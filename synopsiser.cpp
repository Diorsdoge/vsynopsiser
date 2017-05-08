#include "synopsiser.h"
#include "ui_synopsiser.h"

Synopsiser::Synopsiser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Synopsiser)
{
    ui->setupUi(this);
}

Synopsiser::~Synopsiser()
{
    delete ui;
}
