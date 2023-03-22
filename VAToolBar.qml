import QtQuick 2.0

Item {
    id: control

    Rectangle {
        id: background
        anchors.fill: parent

        color: "#cccccc"

        Component.onCompleted: {
            console.info("+++ background::onCompleted.");
        }
    }

    VASearchBox {
        id: searchbox

        width: 200
        height: 32
        anchors.right: parent.right
        anchors.rightMargin: 10
        anchors.verticalCenter: parent.verticalCenter

        Component.onCompleted: {
            console.info("+++ searchbox::onCompleted.");
        }
    }

    Component.onCompleted: {
        console.info("+++ control VAToolBar::onCompleted.");
    }
}
