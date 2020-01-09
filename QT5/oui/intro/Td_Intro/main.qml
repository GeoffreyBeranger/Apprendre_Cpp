import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 1.6
import QtGraphicalEffects 1.0
import QtQuick.Extras 1.4
import QtQuick.Layouts 1.3
import QtTest 1.2
import Qt.labs.calendar 1.0
import "fonctions.js" as FonctionCouleur

Window {
    visible: true
    width: 50
    height: 50
    title: qsTr("Hello World")

    Rectangle {
        id: rect
        width: 250
        height: 250


        Button{

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            text: "Changer la Couleur"
            onClicked: {
                FonctionCouleur.changerCouleurRectangle();

            }
        }
    }


}
