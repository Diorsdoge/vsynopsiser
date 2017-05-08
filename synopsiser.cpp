#include "synopsiser.h"
#include "ui_synopsiser.h"

Synopsiser::Synopsiser(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Synopsiser)
{
    ui->setupUi(this);

    QObject::connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(getOriginalVideoPath()));
}

Synopsiser::~Synopsiser()
{
    delete ui;
}
