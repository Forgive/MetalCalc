#include "scraptotext.h"
#include "ui_scraptotext.h"

scrapToText::scrapToText(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scrapToText)
{
    ui->setupUi(this);
    QValidator *valir = new QIntValidator(0, 99999);
    ui->scrap->setValidator(valir);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(calc()));
}

scrapToText::~scrapToText()
{
    delete ui;
}

void scrapToText::calc()
{
    double scrap = ui->scrap->text().toInt();
    scrap = scrap / 9;
    scrap = static_cast<int>(scrap * 100)/100.0;
    QString scraptext = QString("%1").arg(scrap, 0, 'f', 2);
    ui->result->setText(scraptext);
}
