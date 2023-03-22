import QtQuick 2.15
import QtQuick.Window 2.15
import com.example.va 1.0 as VA

Window {
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Item {
        id: firstItem
        Component.onCompleted: {
            console.info("+++ firstItem::onCompleted.");
        }
    }

    VA.Director{
        id: director

        window: root

        Component.onCompleted: {
            console.info("+++ director::onCompleted.");
        }
    }

    VAToolBar {
        id: toolbar

        width: parent.width
        height: 64
        Component.onCompleted: {
            console.info("+++ toolbar::onCompleted.");
        }
    }

    Component.onCompleted: {
        console.info("+++ root::onCompleted.");
    }


}
