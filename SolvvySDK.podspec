
#  Be sure to run `pod spec lint SolvvySDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#
Pod::Spec.new do |s|
# ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
  #
  #  These will help people to find your library, and whilst it
  #  can feel like a chore to fill in it's definitely to your advantage. The
  #  summary should be tweet-length, and the description more in depth.
  #
s.name          = "SolvvySDK"
s.version       = "1.1.0"
s.summary       = "SolvvySDK is a framework"
s.homepage      = "https://github.com/solvvy/mobile-sdk-ios-public"
s.description   = "Aims to reimagine the customer experience through intelligent automation and machine learning"
s.license       = "MIT"
s.author        = { "solvvy" => "janaki@solvvy.com" }
s.platform      = :ios, "10.0"
s.ios.vendored_frameworks = 'SolvvySDK.framework'
s.swift_version = "5.1"
s.source        = { :git => "https://github.com/solvvy/mobile-sdk-ios-public.git", :tag => "#{s.version}" }
s.exclude_files = "Classes/Exclude"
end