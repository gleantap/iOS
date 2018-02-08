# GleanTap

Installing the Framework
The GleanTap SDK is distributed via CocoaPods and also available as a manually installable framework for your project. You may choose any of the methods as described below -


Installing using CocoaPods
CocoaPods is a dependency manager for Swift and Objective-C Cocoa projects. Its an easy way to install the framework to your project.

Step one

If you don't already have cocoapods installed, you can install it using the below command. If you have cocoapods and have used it before then continue to step two.

sudo gem install cocoapods
Use the following command to complete the setup

pod setup --verbose
This may take a few minutes. The --verbose option will show you the progress logs to watch the process. Once done, you are ready to move to step two.


Step two

Create a file called PodFile in your xCode project and add the following code in that. Substitute your Project Name for YourProjectName in the below code.

target 'YourProjectName' do
    pod 'GleanTapFramework'
end

Step three

In your terminal navigate to your project directory and type the following command

pod install
Once this is successful it will create a new workspace in your xCode.


Manually Installing the Framework

##Step one

Download the framework manually from github or clone it using the following command

git clone (https://github.com/gleantap/iOS)

Step two

Drag the GleanTap.framework file into your xCode Project Workspace.


Step three

Go to General > Embedded Libraries and add the GleanTap.framework to that. Also, add CoreLocation.framework to the Linked Frameworks & Libraries.

Initializing & Configuring
Once you have installed the GleanTap framework you need to add the GleanTap configuration and initialize the library.


Adding GleanTap Configuration
From the Dashboard or the Configuration page of your App in your GleanTap.com account get GleanTap App Id. Open Info.plist file in your xCode project workspace and add a new entry with the key GleanTapAppId & the value copied from the account.


Initializing the Library
To start using GleanTap you need the initialize the library.

Objective - C

Add the following code to your AppDelate class and to any other class where you plan to track custom events, tags or user profile details.

import <GleanTap/GleanTapImplementation.h>

SWIFT

Add the following code to your Objective-C Bridging header file. You can refer Apple's Documentation to see how to create the Objective-C Bridging header file.

#import <GleanTap/GleanTap.h>
#import <GleanTap/GleanTapImplementation.h>
#import <GleanTap/GleanTapAutoIntegrate.h>
Navigate to the Build Settings tab in your project workspace and under the Swift Compiler - General ensure the Objective-C Bridging Header has the path to the newly created bridging header file.

Integrating the SDK
refer the below link

(https://app.gleantap.com/docs/)
