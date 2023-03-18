import QtQuick 2.0

Item {
    id: control

    Rectangle {
        id: background
        anchors.fill: parent

        color: "#cccccc"
    }

    VASearchBox {
        id: searchbox

        width: 200
        height: 32
        anchors.right: parent.right
        anchors.rightMargin: 10
        anchors.verticalCenter: parent.verticalCenter
    }
}
