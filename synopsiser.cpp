#include "synopsiser.h"
#include "ui_synopsiser.h"
#include <QDebug>


Synopsiser::Synopsiser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Synopsiser)
{
    ui->setupUi(this);

    QObject::connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(getOriginalVideoPath()));
    QObject::connect(ui->origPlayButton, SIGNAL(clicked()), this, SLOT(origVideoPlay()));
    QObject::connect(ui->synoPlayButton, SIGNAL(clicked()), this, SLOT(synoVideoPlay()));
    QObject::connect(ui->analyzeButton, SIGNAL(clicked()), this, SLOT(analyze()));
    QObject::connect(ui->synopsisButton, SIGNAL(clicked()), this, SLOT(synopsis()));
    QObject::connect(ui->bdImgButton, SIGNAL(clicked()), this, SLOT(bgImgDisplay()));
    QObject::connect(ui->keyActivityButton, SIGNAL(clicked()), this, SLOT(keyAvtivityDisplay()));

}

Synopsiser::~Synopsiser()
{
    delete ui;
}

void Synopsiser::getOriginalVideoPath()
{
    qDebug()<<"Open";
}

void Synopsiser::origVideoPlay()
{
    qDebug()<<"origVideoPlay";
}

void Synopsiser::synoVideoPlay()
{
    qDebug()<<"synoVideoPlay";
}

void Synopsiser::analyze()
{
    qDebug()<<"analyze";
}

void Synopsiser::synopsis()
{
    qDebug()<<"synopsis";
}

void Synopsiser::bgImgDisplay()
{
    qDebug()<<"bgImgDisplay";
}

void Synopsiser::keyAvtivityDisplay()
{
    qDebug()<<"keyActivityDisplay";
}
