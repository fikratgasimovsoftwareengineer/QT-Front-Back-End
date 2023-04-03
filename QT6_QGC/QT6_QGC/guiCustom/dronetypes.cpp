#include "dronetypes.h"
#include "ui_dronetypes.h"

droneTypes::droneTypes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::droneTypes)
{
    ui->setupUi(this);


    //*********First Quadrator*************
    drone_uav_main = ui->quadrator;
    QPixmap drone_map(":/:/quadrator.png");
    drone_uav_main->setPixmap(drone_map);
    drone_uav_main->setScaledContents(true);

    // ***Add Items to Contnue
    first = ui->uav_main_comboBox;
    first->addItem("Quadrator x");
    first->addItem("Hexa Copter");
    // Finished!

    //*********TRI Copter*************
    drone_uav_2 = ui->tricopter_y;
    QPixmap tree_copter_map(":/:/copter.png");
    drone_uav_2->setPixmap(tree_copter_map);
    drone_uav_2->setScaledContents(true);

    // continue !
    tricopter_combo = ui->combo_tricopter;
    tricopter_combo->addItem("Copter X");
    tricopter_combo->addItem("Other Copter");
    tricopter_combo->addItem("Beluga X");
    // Finished!


    //**** Plane ****
    drone_uav_plane = ui->plane;
    QPixmap plane_map(":/:/plane.png");
    drone_uav_plane->setPixmap(plane_map);
    drone_uav_plane->setScaledContents(true);

    // continue plane combo
    plane_combo = ui->combo_plane_ui;
    plane_combo->addItem("Plane X");


    // UGV Configuration
    drone_ugv = ui->rover;
    QPixmap ugv_map(":/:/ground vehicle.jpg");
    drone_ugv->setPixmap(ugv_map);
    drone_ugv->setScaledContents(true);

    //UGV continue
    ugv_combo = ui->ugv_combo_ui;
    ugv_combo->addItem("Generic Ground Vehicle");
    ugv_combo->addItem("Doberbot");
    ugv_combo->addItem("CaterPillar");


    // *****Unknown Types 1****
    drone_uav_unknown_1 = ui->unknown_drone_ui;
    QPixmap uav_unknown_map(":/:/drone_question.jpg");
    drone_uav_unknown_1->setPixmap(uav_unknown_map);
    drone_uav_unknown_1->setScaledContents(true);

    uav_unknown_box = ui->comboBox_3;
    uav_unknown_box->addItem("Coming soon..");


    // *****Unknown Types 2****
    drone_uav_unknown_2 = ui->unknown_drone_ui_2;
    QPixmap uav_unknown_map_2(":/:/drone_question.jpg");
    drone_uav_unknown_2->setPixmap(uav_unknown_map_2);
    drone_uav_unknown_2->setScaledContents(true);

    uav_unknown_box_2 = ui->comboBox_6;
    uav_unknown_box_2->addItem("Coming soon ..");

    // overload connection for first quadrator

    connect(first, QOverload<int>::of(&QComboBox::activated), this, &droneTypes::choose_copter);

    // connection for tricopter
    connect(tricopter_combo, QOverload<int>::of(&QComboBox::activated), this, &droneTypes::tree_copter);

    // conneciton for ugv
    connect(ugv_combo, QOverload<int>::of(&QComboBox::activated), this, &droneTypes::ugv_robots);


}

droneTypes::~droneTypes()
{
    delete ui;
}

void droneTypes::choose_copter(int index)
{
    //drone_uav_main = ui->quadrator;


    int selectedIndex = ui->uav_main_comboBox->currentIndex();

    QPixmap drone_map;
    if (selectedIndex==0){
        drone_map = QPixmap(":/:/quadrator.png");

    }
    else if(selectedIndex==1){


        drone_map = QPixmap(":/:/hexacopter.png");

    }
    drone_uav_main->setPixmap(drone_map);
    drone_uav_main->setScaledContents(true);
}

void droneTypes::tree_copter(int index)
{
    int selectedIndex = ui->combo_tricopter->currentIndex();

    QPixmap tree_copter_map;
    if (selectedIndex == 0){

        tree_copter_map = QPixmap(":/:/copter.png");

    }
    else if (selectedIndex == 1){
       tree_copter_map = QPixmap(":/:/tricopter_specific.png");
    }
    else if (selectedIndex == 2){
        tree_copter_map = QPixmap(":/:/beluga.png");
    }
    drone_uav_2->setPixmap(tree_copter_map);
    drone_uav_2->setScaledContents(true);


}

void droneTypes::ugv_robots(int index)
{
    int selectedIndex = ui->ugv_combo_ui->currentIndex();

    QPixmap ugv_map;
    if (selectedIndex==0){
        ugv_map = QPixmap(":/:/ground vehicle.jpg");
    }
    else if(selectedIndex == 1){
        ugv_map = QPixmap(":/:/aliengo.png");
    }
    else if(selectedIndex == 2){
        ugv_map = QPixmap(":/:/cinqoli.jpg");
    }

    drone_ugv->setPixmap(ugv_map);
    drone_ugv->setScaledContents(true);
}

