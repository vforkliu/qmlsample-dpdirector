import QtQuick 2.15
import com.example.va 1.0 as VA

Item {
    id: control

    Rectangle {
        id: background
        anchors.fill: parent

        color: "gray"
    }

    VA.SearchModel {
        id: searchModel;

//        window: control.window

        Component.onCompleted: {
            console.info("+++ searchModel::onCompleted.");
            console.debug("searchModel finished:" + control);
            // searchModel.setRootWindow(control.window);
            searchModel.window = control
        }
    }

    Component.onCompleted: {
        console.info("+++ control VASearchBox::onCompleted.");
    }
}
