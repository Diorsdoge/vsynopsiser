#ifndef SYNOPSISER_H
#define SYNOPSISER_H

#include <QMainWindow>

namespace Ui {
class Synopsiser;
}

class Synopsiser : public QMainWindow
{
    Q_OBJECT

public:
    explicit Synopsiser(QWidget *parent = 0);
    ~Synopsiser();

private:
    Ui::Synopsiser *ui;
private slots:
    QString getOriginalVideoPath();
};

#endif // SYNOPSISER_H
