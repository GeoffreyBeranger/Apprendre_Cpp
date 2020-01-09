import QtQuick 2.12
import QtQuick.Controls 2.5
import "fonctions.js" as Fonctions

Page {
    width: 600
    height: 400

    header: Label {
        text: qsTr("Page 1")
        font.pixelSize: Qt.application.font.pixelSize * 2
        padding: 10
    }

    Label {
        text: qsTr("oui")
        anchors.centerIn: parent
    }


}
