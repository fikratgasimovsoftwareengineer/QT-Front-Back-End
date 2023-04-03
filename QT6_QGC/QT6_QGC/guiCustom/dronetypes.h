#ifndef DRONETYPES_H
#define DRONETYPES_H

#include <QWidget>
#include <QLabel>
#include <QComboBox>
#include <QPixmap>

namespace Ui {
class droneTypes;
}

class droneTypes : public QWidget
{
    Q_OBJECT

public:
    explicit droneTypes(QWidget *parent = nullptr);
    ~droneTypes();

private slots:
    void choose_copter(int index);
    void tree_copter(int index);

    void ugv_robots(int index);

private:
    Ui::droneTypes *ui;

    // PNG Images for UAV
    QLabel *drone_uav_main;
    QLabel *drone_uav_2;
    QLabel *drone_uav_plane;
    QLabel *drone_uav_unknown_1;
    QLabel *drone_uav_unknown_2;

     // PNG Images for UGV
    QLabel *drone_ugv;


    // QComBo BOx
    QComboBox *first;
    QComboBox *tricopter_combo;
    QComboBox *plane_combo;
    QComboBox *ugv_combo;
    QComboBox *uav_unknown_box;
    QComboBox *uav_unknown_box_2;
};

#endif // DRONETYPES_H
