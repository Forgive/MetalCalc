#ifndef SCRAPTOTEXT_H
#define SCRAPTOTEXT_H

#include <QWidget>

namespace Ui {
class scrapToText;
}

class scrapToText : public QWidget
{
    Q_OBJECT
    
public:
    explicit scrapToText(QWidget *parent = 0);
    ~scrapToText();
    
private:
    Ui::scrapToText *ui;

public slots:
    void calc();
};

#endif // SCRAPTOTEXT_H
