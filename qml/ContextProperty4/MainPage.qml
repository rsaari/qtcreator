import QtQuick 1.1
import com.nokia.meego 1.0

Page {
    tools: commonTools

    Label {
        id: label
        anchors.centerIn: parent
        text: qsTr(myLabel)
        visible: false
    }

    Button{
        anchors {
            horizontalCenter: parent.horizontalCenter
            top: label.bottom
            topMargin: 10
        }
        text: qsTr(myButton)
        onClicked: label.visible = true
    }
}
