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
    void getOriginalVideoPath();
    void origVideoPlay();
    void synoVideoPlay();
    void analyze();
    void synopsis();
    void bgImgDisplay();
    void keyAvtivityDisplay();
};

#endif // SYNOPSISER_H
