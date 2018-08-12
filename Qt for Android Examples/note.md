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
* Create a empty file under the same directory with the QML files, and copy the code of [Bulebubble.svg](https://doc-snapshots.qt.io/qtcreator-4.6/qtcreator-accelbubble-bluebubble-svg.html) into it.
* Double-click *Page1Form.ui.qml* to enter Design mode.
* Delete the **Label** item in the **Navigator** window.
* In the **QML Types** tab of the **Library** window search for *rectangle* and then drag a rectangle onto the **Page**.
  * In the **Properties** window change the id of the retangle to *mainWindow*.
  * In the **Layout** tab of the **Properties** window click *Fill parent item*.
* From the **Resources** tab of the **Library** window drag *Bluebubble.svg* onto the rectangle.
  * In the **Properties** window change the id of Bluebubble to *bubble*.
  * Make sure that in the **Navigator** window *bubble* is under *mainWindow*.
* In the **Navigator** window toggle *mainWindow* and *bubble* as property aliases of the root item.
* Right-click the bubble and select **Move Component to Separate File**.
  * Enter *Bubble* into Component Name.
  * Deselect **x**, **y**, and **ui.qml file**.

### Moving the Bubble
#### Edit bubble.qml
Add the following properties in the `Image` object:
>     smooth: true
>     property real centerX
>     property real centerY
>     property real bubbleCenter


## Deploying to the Device
## Porting a Qt Application
## Publishing to Google Play
## Adding OpenSSL Support for Android
## Building from Sources
## Qt Notifier - demonstrates how to call Java code from an Android application

