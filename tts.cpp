#include "tts.h"
#include "ui_tts.h"

tts::tts(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tts)
{
    ui->setupUi(this);


    QStringList H1;
    H1<<"11-A"<<"11-B"<<"11-C"<<"11-D"<<"11-E"<<"12-A"<<"12-B"<<"12-C"<<"12-D"<<"12-E";
    for(int i=3; i<=10 ; i++)
    {
    ui->tableWidget->setHorizontalHeaderLabels(H1);
    }
    QStringList V2;
   V2<<"CLASS"<<"STAFF"<<"SUBSTUTION";
    for(int i=3; i<=3 ; i++)
    {
    ui->tableWidget->setVerticalHeaderLabels(V2);
    }




}

tts::~tts()
{
    delete ui;
}

