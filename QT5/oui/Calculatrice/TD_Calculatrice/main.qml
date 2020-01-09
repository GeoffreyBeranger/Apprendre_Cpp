import QtQuick 2.12
import QtQuick.Window 2.12
import QtGraphicalEffects 1.0
import QtQuick.Controls 1.6
import Qt.labs.calendar 1.0
import QtQuick.Extras 1.4
import QtQuick.Layouts 1.3
import QtTest 1.2
import "fonctions.js" as Oui

Window {
    visible: true
    width: 400
    height: 400
    title: qsTr("Hello World")

    GridLayout {
        id: gridLayout
        x: -83
        y: 70
        width: 360
        height: 261
        scale: 0.4
        rows: 5
        columns: 4

        TextField {
            id: textField
            y: 0
            width: 400
            Layout.fillHeight: false
            Layout.fillWidth: true
            Layout.columnSpan: 4
            Layout.rowSpan: 1
            placeholderText: qsTr("Tapez votre Calcul")
        }

        Button {
            id: button7
            text: qsTr("7")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button8
            text: qsTr("8")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button9
            text: qsTr("9")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: buttonPlus
            text: qsTr("+")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button4
            text: qsTr("4")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button5
            text: qsTr("5")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button6
            text: qsTr("6")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: buttonMoins
            text: qsTr("-")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button1
            text: qsTr("1")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button2
            text: qsTr("2")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button3
            text: qsTr("3")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: buttonFoix
            text: qsTr("*")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: buttonClear
            text: qsTr("C")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: button0
            text: qsTr("0")
            onClicked: {

                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: buttonEgale
            text: qsTr("=")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }

        Button {
            id: buttonDivision
            text: qsTr("/")
            onClicked: {
                Oui.operation(text);
                console.log(text)
            }
        }
    }


}
