import QtQuick 2.12
import QtQuick.Controls 2.5

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Tabs")

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1Form {
            Switch {
                id: switchSexe
                x: 102
                y: 41
                text: qsTr("Homme")
                checked: false
                enabled: true
                focusPolicy: Qt.WheelFocus
                onCheckedChanged: {
                    console.log("Oui");
                }


                Label {
                    id: label
                    x: 20
                    y: 53
                    text: qsTr("Sexe")
                }
            }
        }

        Page2Form {
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex

        TabButton {
            text: qsTr("Page 1")
        }
        TabButton {
            text: qsTr("Page 2")
        }
    }
}
