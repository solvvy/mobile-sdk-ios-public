# Solvvy iOS SDK documentation
iOS version : iOS 10 and above.
Current version: 1.0.2
## Getting Started
### Dynamic framework
- Download the latest version of SolvvySDK from https://gitlab.com/solvvy/mobile-sdk-ios-public/tree/solvvySDK_1.0.2 and extract the zip file.  
- Go to your Project Inspector General tab and scroll down to where it says, `Embedded Binaries.` Click the + button and then Add Other. A Finder window will drop down, and here you need to select the `SolvvySDK.framework`.

`Note:` To download SolvvySDK of version 1.0.1, extract the zip from https://gitlab.com/solvvy/mobile-sdk-ios-public/tree/solvvySDK_1.0.1

### OR
### CocoaPods
- Follow <https://guides.cocoapods.org/using/getting-started.html> to install cocoapods.
- Open a terminal window, and $ cd into your project directory.
- Create a Podfile. This can be done by running $ pod init .
- In your Podfile, add the following
```
pod 'SolvvySDK', :git => "https://gitlab.com/solvvy/mobile-sdk-ios-public.git"
```
This will install the SDK supported for latest swift version. To install SDK for the previous swift version, point it to the appropriate branch as shown below.
e.g.
```
pod 'SolvvySDK', :git => "https://gitlab.com/solvvy/mobile-sdk-ios-public.git", :branch => "swift_4.0.3"
```
- From the command line, run `pod install`. And use the `.xcworkspace` file generated by CocoaPods to work on your project!

`Note:` Following are the branch name to be specified in podfile to install SDK of specific swift versions : 
- `swift_4.0.3` for swift version 4.0.3
- `swift_4.1.2` for swift version 4.1.2
- `swift_4.2.1` for swift version 4.2.1
- `swift_5.0` for swift version 5.0

Further, Create a new `Run Script Phase` in your app’s target’s `Build Phases` and paste the following snippet in the script text field:
```
bash "${BUILT_PRODUCTS_DIR}/${FRAMEWORKS_FOLDER_PATH}/SolvvySDK.framework/strip-frameworks.sh"
```
This step is required to work around an App Store submission bug when archiving universal binaries.

### Import framework

- `import SolvvySDK` -> Add import statement at the top of your ViewController.swift file if the client application is in Swift.
- `@import SolvvySDK;` -> Add import statement at the top of your ViewController.m file if the client application is in Objective-C.

#### Api Key, Connector Id, Org Id
To integrate the Solvvy Mobile SDK you will need the Api Key, Connector id and Org id. These can be obtained from the Solvvy Dashboard which can be found at https://dashboard.solvvy.com/. You will have to login. After login, go to `Profile Settings` which can be found at the right top under your username. You should find all this information under `Profile Settings`.

If you have multiple orgs associated with you (typically when you have multiple Personas), the same information needs to be obtained for each org.

Keep this information handy. You will using it during the integration.

#### The simplest integration   

Create an instance of `Persona` class and set your api key, org id and connector id. Create an instance of `SolvvySDK` class, pass in the persona object to it like below and call `startSolvvy` method by passing your current viewController.

Swift Code:
```swift
let singlePersona = Persona()
singlePersona.apiKey = "YOUR API KEY"
singlePersona.orgId = YOUR_ORG_ID
singlePersona.connectorId = "YOUR_CONNECTOR_ID"

let params = SolvvyParams()
params.personaOptions = [singlePersona]
```

```swift
let solvvySDKInstance = try? SolvvySDK(params: params)
solvvySDKInstance?.startSolvvy(fromViewController: self)
```

That's it! You are ready to test Solvvy SDK integration in your app.

#### Changing colors
To make the SDK screens look consistent with your app, you can modify the `SolvvyAppearance` class and pass it to the `startSolvvy` method.

Swift Code:
```swift
class SolvvyAppearance {
var themeColor : UIColor
var backgroundColor : UIColor
var progressBarColor : UIColor
var navigationBarFontColor: UIColor
var fontFamilyName : String
}
```

eg.  to change the background color, progress bar color, theme color, and font style using `SolvvyAppearance` class. `setNavigationBarTextColor` method is used to change the navigation bar text color.
```swift
let appearance = try? SolvvyAppearance(withBackgroundColor: UIColor.black.withAlphaComponent(0.6), progressBarColor: UIColor.black, themeColor: UIColor.brown, fontFamilyName: "HelveticaNeue")
appearance?.setNavigationBarTextColor(withColor: UIColor.black)
solvvyInstance.startSolvvy(fromViewController: self, withAppearance: appearance)
```
### Advanced Scenarios

#### Multiple orgs
If you have multiple organizations, you have to create different personas. In the following example there are `Student` and `Instructor` personas.

Swift Code:
```swift
let student = Persona()
student.orgId = YOUR_ORG_ID
student.apiKey = "YOUR API KEY"
student.connectorId = "YOUR_CONNECTOR_ID"
student.buttonText = "Student"

let instructor = Persona()
instructor.orgId = YOUR_ORG_ID
instructor.apiKey = "YOUR API KEY"
instructor.connectorId = "YOUR_CONNECTOR_ID"
instructor.buttonText = "Instructor"
```

`personaOptions` will have two options and rest of the code remains the same i.e.

```swift
let params = SolvvyParams()
params.personaOptions = [student, instructor]

let solvvySDKInstance = try? SolvvySDK(params: params)
solvvySDKInstance?.startSolvvy(fromViewController: self)
```

#### Collect more information using Forms
The SDK allows for additional information to be collected from the user along with their question. This information is collected in a `form` shown to the user. What forms need to be displayed and what fields are in the forms should already have been configured for you by Solvvy in the backend. By default such information is collected in the Review tab along with the customer question.

But you may also control when such additional information is collected.

##### Pre Question

It maybe collected in the beginning (in the "Ask" tab) before the user has even entered her question. This is called "pre-question".
`PreQuestionForm` class contains `instructionText` of type `String` (header text), `show` boolean variable (indicates whether to show preQuestionForm or not), `fieldIdWhitelist` of type `[String]` which accepts the whitelisted fieldIds. Any required properties which are not in the `fieldIdWhiteList` will not be shown in the `preQuestionForm`.
To do so 

Swift Code:
```swift
let formSettings = FormSettings()

let preQuestionForm = PreQuestionForm()
preQuestionForm.show = true // default value: false

formSettings.preQuestionForm = preQuestionForm 
params.formSettings = formSettings
```

##### Pre Contact
Alternatively, additional information maybe collected in the "Review" tab but before contact options are presented. This is called "pre-contact".
Similar to `PreQuestionForm`, `PreContactForm` also contains `instructionText` of type `String` (header text), `show` boolean variable (indicates whether to show preContactForm or not), `fieldIdWhitelist` of type `[String]` which accepts the whitelisted fieldIds. Any required properties which are not in the `fieldIdWhiteList` will not be shown in the `preContactForm`.

Swift Code:
```swift
let formSettings = FormSettings()

let preContactForm = PreContactForm()
preContactForm.show = true // default value: false
preContactForm.fieldIdWhitelist = [
"custom_44456188",
"custom_44519307",
"custom_44523707",
"custom_44525407",
"custom_44457808",
"custom_44459308",
"custom_44460968",
"custom_44463528",
"custom_44464668",
"custom_44534007"
] // whitelisted properties
preContactForm.instructionText = "We're committed to finding the answers you need as quickly as possible. Please tell us a little about what you need help with."

formSettings.preContactForm = preContactForm
params.formSettings = formSettings
```

##### Multiple Ticket Forms
You may have multiple different ticket forms to collect additional information from a user. Different strategies maybe followed to select which form should be shown to the user.

###### Default Form
If one of the forms is marked as default it will be shown.

###### Custom Ticket Form
Alternatively, in the mobile SDK you can control which form is shown to the user. Obtain the `form Id` for the corresponding form from your CRM and set it using the following code.

```swift
let formSettings = FormSettings()
formSettings.customTicketFormId = "your-ticket-form-id"
```

If a `customTicketFormId` is set it takes precedence. Even if another form is marked as default, the form corresponding to `customTicketFormId` is shown. 

###### User Selects Form
You can also give the choice to the user to select the form. This usually makes sense when the form names correspond to different categories of questions.
```swift
let formSettings = FormSettings()
formSettings.userSelectsForm = true
```

#### Controlling contact options shown
You may want to control what contact options are shown based on information collected from the user or any other context available to the integration code. For this implement a class that conforms to the `SolvvySDKDelegate` protocol. This protocol has "hooks" or "callbacks" that are called at various stages in the SDK dialog flow. All methods are optional.

To control the list of contact options implement the `getSupportOptions` method.

Swift Code:
```swift
func getSupportOptions(forContext context: [String: Any]) -> [SupportOption] {
var supportOptions = [SupportOption]()
let emailOption = EmailOption()
let communityOption = CommunityOption(withCommunityLink: "YOUR_COMMUNITY_URL_STRING")
let chatOption = ChatOption()

supportOptions = [emailOption, communityOption, chatOption]

// for instance, if user types are Gold and Silver, and if you want to support phoneCallOption only for the Gold users
if let userType = context["userType"] as? String, userType == "Gold" {
let phoneCallOption = PhoneCallOption(withPhoneNumber: "9*********")
supportOptions.append(phoneCallOption)
}
return supportOptions
}
```
Four kinds of contact options are currently supported by the SDK. They are "Submit a Ticket" (`EmailOption`), "Chat" (`ChatOption`), "Redirect to a web page" (`CommunityOption`) and "Phone call" (`PhoneOption`). The logic in `getSupportOption` may return one or more of the contact options. It can also configure the options. For example, the phone number for premium customers maybe different from the others. You may also choose not to show a certain option bu not returning it in the list.  

##### Note:
- `userType` key in the context represents the user type selected, if there are multiple users.
- `formIdSelected` key in the context contains the Id of the selected form.
- `context` also contains the other keys which represents the property name and its value.


#### Integrating chat
One of the contact options is `Chat`, which allows the app to direct the user to chat with an agent. Solvvy Mobile SDK has an open architecture. Any chat SDK can be invoked from the chat contact option.

To show a support option to chat, `ChatOption` should have been returned by `getSupportOptions` for the `configureChat` hook to be invoked.

Next, initialize and start the respective SDK in the `configureChat` function.

Swift Code:
```swift
solvvySDKInstance.delegate = self // your current view controller
func configureChat(withChatOption: ChatOption) {
// implementation to configure chat functionality goes here
}
```

#### Custom Contact Options
Instead of the contact options discussed so far, you may want to show a different contact option such as a custom UI. This can be achieved by using the `CustomContactOption`.

First, return the `CustomContactOption` in the list of options returned by the `getSupportOptions` method. You can control the icon shown on the custom contact option using the `icon` field.

Second, implement the `configureCustomOption` method of the `SolvvySDKDelegate` protocol. Similar to `configureChat` you can add any code here to bring up whatever UI you would want to show the user.

```swift
func getSupportOptions(forContext context: [String: Any]) -> [SupportOption] {
var supportOptions = [SupportOption]()

let emailOption = EmailOption()
let communityOption = CommunityOption(withCommunityLink: "YOUR_COMMUNITY_URL_STRING")
let chatOption = ChatOption()

let customContactOption = CustomContactOption(withName: "YOUR_CUSTOM_CONTACT_OPTION_NAME", description: "DESCRIPTION") 
// Ideal Image size for customContactOption icon is 60x60 pixels
customContactOption.icon = UIImage(named: "IMAGE_NAME")

supportOptions = [emailOption, communityOption, chatOption, customContactOption]
return supportOptions
}

func configureCustomOption(withCustomOption: CustomContactOption) {
// Bring up whatever UI you want to present to the user
}
```


#### Skipping Solvvy dialog for some questions
`SolvvySDKDelegate` also allows for the `Review` tab to be completely skipped (i.e. Solvvy will not try to provide any answers) and go directly to the "Complete" tab. For example, in a form field the user has indicated his question is about refunds and you know from your analytics that such questions are hard to answer automatically. In this case implement the `showQuestionSearch` method and return `false`.

Swift Code:
```swift
func showQuestionSearch(forContext context: [String: Any]) -> Bool {
// Extract a form field that has question category in it
if let formId = context["formIdSelected"] as? String,
formId == "YOUR CATEGORY_ID WHERE QUESTION SEARCH IS NOT REQUIRED" {
return false
}
return true
}
```

#### Passing initial context
`initialContext` is a dictionary of type [String: Any] which may contain the default value for the properties like `email`. This dictionary is passed to various methods such as `getSupportOptions`.

Swift Code:
```swift
var initialContext = [String: Any]()
initialContext["email"] = "abc@solvvy.com"
formSettings.initialContext = initialContext
```
#### Hiding properties of initialContext
The app may want to pass additional properties while submitting a ticket. Such properties may be be pre-populated (Ex. email if it is already known) or they may have to be provided by the user. If the app populates these fields, it can hide them from being shown to the user by passing them as a collection of propertyIds in `hidePropertyList`. It is an array of type [String]. 

Note that the properties sent while submitting a ticket need to be configured already in the CRM and the propertyIds used in the `initialContext` and `hidePropertyList` are the same as in the CRM.

Swift Code:

```swift
formSettings.hidePropertyList = ["email", "subject","custom_303132"]
```
#### Using captcha
`requireCaptcha` a boolean which indicates whether the app requires captcha support, which can be passed with `FormSettings`.
```swift
formSettings.requireCaptcha = true // default value: true
```

#### Sending attachments with a ticket
`allowAttachments` is a boolean which indicates whether to support attachments in the ticket creation.
`NSPhotoLibraryUsageDescription` key should be present in the application info.plist to allow attachments support for photo and video.
```swift
formSettings.allowAttachments = true // default value: true
```

#### Solvvy Magic text
If `__solvvy_magic_text_ignore_ticket` is included somewhere in the ticket description, the ticket will not be submitted to your CRM. The Solvvy backend will simply drop the ticket. This is useful while testing. 

#### Sample code if the client application is in Objective C
- Go into `Build Settings` -> At the top select All and Combined -> Under `Build Options`, set `Always Embed Swift Standard Libraries` to Yes.
- `@import SolvvySDK;` -> Add import statement at the top of your viewController.m file.

```swift
Persona *singlePersona = [[Persona alloc] initWithOrganisationId:YOUR_ORG_ID apiKey:@"YOUR_API_KEY" connectorIdForTicketCreation:@"YOUR_CONNECTOR_ID" buttonText:@""];

// setting preQuestionForm to false and preContactForm to true
FormSettings *formSettings = [[FormSettings alloc] init];
formSettings.preContactForm = [[PreContactForm alloc] initWithShow:false fieldIdWhitelist:@[] instructionText:@""];
formSettings.preQuestionForm = [[PreQuestionForm alloc] initWithShow:true fieldIdWhitelist:@[] instructionText:@""];

SolvvyParams *params = [[SolvvyParams alloc] initWithPersonaOptions:@[singlePersona] withFormSettings:formSettings];

SolvvySDK *instance = [[SolvvySDK alloc] initWithParams:params error:nil];

// conforming to SolvvySDKDelegate
instance.delegate = self;

[instance startSolvvyFromViewController:self withAppearance:nil];
```

Implementing `getSupportOptions` SolvvySDKDelegate method.

```swift
- (NSArray<id<SupportOption>> *)getSupportOptionsForContext:(NSDictionary<NSString *,id> *)forContext {
NSMutableArray * supportOptions = [[NSMutableArray alloc] init];
ChatOption *chat = [[ChatOption alloc] init];
[supportOptions addObject:chat];

EmailOption *email = [[EmailOption alloc] init];
[supportOptions addObject:email];

return  supportOptions;
}
```

#### Troubleshooting

- You get an error like `this connector is not enabled for ticket submission...`. Please check to make sure the `connectorIdForTicketCreation` is configured correctly.

#### Performance
It is recommended that the Solvvy SDK is initialized (i.e. `startSolvvy` is called) only when needed and not on every app startup. `startSolvvy` is efficient, still initializing it every time the app starts up  maybe an unnecessary drag on app startup time.

