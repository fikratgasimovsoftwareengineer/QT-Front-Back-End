import QtQuick 2.15
import QtPositioning 5.9
import Qt3D.Core 2.4
Rectangle{

    Map{
        id:mapView
        anchors.fill: parent
        center: QtPositioning.coordinate(25,6585, 125.3658)


    }
}
