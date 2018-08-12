# Qt for Android Examples
http://doc.qt.io/qt-5/examples-android.html 

## Getting Started
* Android SDK, NDK 安裝好以後，要在 Qt Creator :arrow_right: Tool :arrow_right: Options :arrow_right: Devices :arrow_right: Android 設定JDK SDK NDK 路徑
* 用指令 `update-alternatives --list java` 可以檢查Java路徑
* 路徑複製到 /usr/lib/jvm/java-8-openjdk-amd64/ 即可，不用再往下
* OpenJDK 11版不相容，會造成Platform SDK installed錯誤，建議用OpenJDK 8

## Creating a Mobile Application
### Create a Project
https://doc-snapshots.qt.io/qtcreator-4.6/qtcreator-accelbubble-example.html
* New Project :arrow_right: Qt Quick Application - Swipe
* In the **Project Details** section, you can choose a predefined style for buttons and sliders by picking a [Qt Quick Controls Style](http://doc.qt.io/qt-5/qtquickcontrols2-styles.html)
* Check **Android ARM** kits if building an mobile application for Android.
* *Page1Form.ui.qml* creates the application main view, and *main.qml* creates the application logic. 
  * *Page2Form.ui.qml* is ignored.
### Create a AccelBubble Main View
### Moving the Bubble


## Deploying to the Device
## Porting a Qt Application
## Publishing to Google Play
## Adding OpenSSL Support for Android
## Building from Sources
## Qt Notifier - demonstrates how to call Java code from an Android application

