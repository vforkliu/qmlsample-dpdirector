import QtQuick 2.15
import QtQuick.Window 2.15
import com.example.va 1.0 as VA

Window {
    id: root
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    VA.Director{
        id: director

        window: root
    }

    VAToolBar {
        id: toolbar

        width: parent.width
        height: 64
    }


}
