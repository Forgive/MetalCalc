/* Thanks to:

  - Viderizer for idea and developing
  - Lamperi for coding help
  - Forgive for coding help

*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scraptotext.h"
#include <QDebug>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QValidator *validator = new QIntValidator(0, 99); // This allows text inputted to the fields only to be integrers from the range: 0 - 99;
    QValidator *valir = new QIntValidator(0, 999);
    ui->lineEdit->setValidator(validator);
    ui->lineEdit_2->setValidator(valir);

    /* Connecting */

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(calc()));

    connect(ui->radioButton, SIGNAL(clicked()), this, SLOT(addPrep()));
    connect(ui->radioButton_2, SIGNAL(clicked()), this, SLOT(subPrep()));
    connect(ui->radioButton_3, SIGNAL(clicked()), this, SLOT(mulPrep()));
    connect(ui->radioButton_4, SIGNAL(clicked()), this, SLOT(divPrep()));

    connect(ui->actionAbout_MetalCalculator, SIGNAL(triggered()), this, SLOT(about()));
    connect(ui->actionScrap_to_ref_converter, SIGNAL(triggered()), this, SLOT(scraptoref()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::scraptoref()
{
    scrapToText *scraptoref = new scrapToText();
    scraptoref->setParent(this);
    scraptoref->setWindowFlags(Qt::Window);
    scraptoref->show();
}

void MainWindow::about()
{
    QMessageBox::information(this, "About", "<font size=10>By Viderizer 2012</font>");
}

void MainWindow::add()
{
    qDebug() << "Add.";

    double scrap = ui->lineEdit->text().toInt() * 9;

    if (ui->comboBox->currentText() == ".00") { // YES I KNOW IT'S AN UGLY WAY. WILL DO BETTER LATER.
    } else if (ui->comboBox->currentText() == ".11")
        scrap += 1;
    else if (ui->comboBox->currentText() == ".22")
        scrap += 2;
    else if (ui->comboBox->currentText() == ".33")
        scrap += 3;
    else if (ui->comboBox->currentText() == ".44")
        scrap += 4;
    else if (ui->comboBox->currentText() == ".55")
        scrap += 5;
    else if (ui->comboBox->currentText() == ".66")
        scrap += 6;
    else if (ui->comboBox->currentText() == ".77")
        scrap += 7;
    else if (ui->comboBox->currentText() == ".88")
        scrap += 8;
    else
        return; // Shouldn't happen.

    scrap += ui->lineEdit_2->text().toInt() * 9;

    if (ui->comboBox_2->currentText() == ".00") { // YES I KNOW IT'S AN UGLY WAY. WILL DO BETTER LATER.
    } else if (ui->comboBox_2->currentText() == ".11")
        scrap += 1;
    else if (ui->comboBox_2->currentText() == ".22")
        scrap += 2;
    else if (ui->comboBox_2->currentText() == ".33")
        scrap += 3;
    else if (ui->comboBox_2->currentText() == ".44")
        scrap += 4;
    else if (ui->comboBox_2->currentText() == ".55")
        scrap += 5;
    else if (ui->comboBox_2->currentText() == ".66")
        scrap += 6;
    else if (ui->comboBox_2->currentText() == ".77")
        scrap += 7;
    else if (ui->comboBox_2->currentText() == ".88")
        scrap += 8;
    else
        return; // Shouldn't happen.

    scrap = scrap / 9;

    scrap = static_cast<int>(scrap * 100)/100.0;
    QString scraptext = QString("%1").arg(scrap, 0, 'f', 2);
    ui->result->setText(scraptext);

}

void MainWindow::sub()
{
    qDebug() << "Subtract.";

    double scrap = ui->lineEdit->text().toInt() * 9;

    if (ui->comboBox->currentText() == ".00") { // YES I KNOW IT'S AN UGLY WAY. WILL DO BETTER LATER.
    } else if (ui->comboBox->currentText() == ".11")
        scrap += 1;
    else if (ui->comboBox->currentText() == ".22")
        scrap += 2;
    else if (ui->comboBox->currentText() == ".33")
        scrap += 3;
    else if (ui->comboBox->currentText() == ".44")
        scrap += 4;
    else if (ui->comboBox->currentText() == ".55")
        scrap += 5;
    else if (ui->comboBox->currentText() == ".66")
        scrap += 6;
    else if (ui->comboBox->currentText() == ".77")
        scrap += 7;
    else if (ui->comboBox->currentText() == ".88")
        scrap += 8;
    else
        return; // Shouldn't happen.

    scrap -= ui->lineEdit_2->text().toInt() * 9;

    if (ui->comboBox_2->currentText() == ".00") { // YES I KNOW IT'S AN UGLY WAY. WILL DO BETTER LATER.
    } else if (ui->comboBox_2->currentText() == ".11")
        scrap -= 1;
    else if (ui->comboBox_2->currentText() == ".22")
        scrap -= 2;
    else if (ui->comboBox_2->currentText() == ".33")
        scrap -= 3;
    else if (ui->comboBox_2->currentText() == ".44")
        scrap -= 4;
    else if (ui->comboBox_2->currentText() == ".55")
        scrap -= 5;
    else if (ui->comboBox_2->currentText() == ".66")
        scrap -= 6;
    else if (ui->comboBox_2->currentText() == ".77")
        scrap -= 7;
    else if (ui->comboBox_2->currentText() == ".88")
        scrap -= 8;
    else
        return; // Shouldn't happen.

    scrap = scrap / 9;

    scrap = static_cast<int>(scrap * 100)/100.0;
    QString scraptext = QString("%1").arg(scrap, 0, 'f', 2);
    ui->result->setText(scraptext);
}

void MainWindow::mul()
{
    qDebug() << "Multiply.";

    double scrap = ui->lineEdit->text().toInt() * 9;

    if (ui->comboBox->currentText() == ".00") { // YES I KNOW IT'S AN UGLY WAY. WILL DO BETTER LATER.
    } else if (ui->comboBox->currentText() == ".11")
        scrap += 1;
    else if (ui->comboBox->currentText() == ".22")
        scrap += 2;
    else if (ui->comboBox->currentText() == ".33")
        scrap += 3;
    else if (ui->comboBox->currentText() == ".44")
        scrap += 4;
    else if (ui->comboBox->currentText() == ".55")
        scrap += 5;
    else if (ui->comboBox->currentText() == ".66")
        scrap += 6;
    else if (ui->comboBox->currentText() == ".77")
        scrap += 7;
    else if (ui->comboBox->currentText() == ".88")
        scrap += 8;
    else
        return; // Shouldn't happen.

    double scrap2 = ui->lineEdit_2->text().toInt();
    double result = scrap * scrap2;
    scrap = result / 9;

    scrap = static_cast<int>(scrap * 100)/100.0;
    QString scraptext = QString("%1").arg(scrap, 0, 'f', 2);
    ui->result->setText(scraptext);

}

void MainWindow::div()
{
    qDebug() << "Multiply.";

    double scrap = ui->lineEdit->text().toInt() * 9;

    if (ui->comboBox->currentText() == ".00") { // YES I KNOW IT'S AN UGLY WAY. WILL DO BETTER LATER.
    } else if (ui->comboBox->currentText() == ".11")
        scrap += 1;
    else if (ui->comboBox->currentText() == ".22")
        scrap += 2;
    else if (ui->comboBox->currentText() == ".33")
        scrap += 3;
    else if (ui->comboBox->currentText() == ".44")
        scrap += 4;
    else if (ui->comboBox->currentText() == ".55")
        scrap += 5;
    else if (ui->comboBox->currentText() == ".66")
        scrap += 6;
    else if (ui->comboBox->currentText() == ".77")
        scrap += 7;
    else if (ui->comboBox->currentText() == ".88")
        scrap += 8;
    else
        return; // Shouldn't happen.

    double scrap2 = ui->lineEdit_2->text().toInt();
    double result = scrap / scrap2;
    scrap = result / 9;

    scrap = static_cast<int>(scrap * 100)/100.0;
    QString scraptext = QString("%1").arg(scrap, 0, 'f', 2);
//    QString scraptext = scraptext.number(scrap);
    ui->result->setText(scraptext);
}

void MainWindow::addPrep()
{
    ui->label_2->setText("+");
    ui->comboBox_2->show();
    ui->lineEdit_2->setMaxLength(2);
}

void MainWindow::subPrep()
{
    ui->label_2->setText("-");
    ui->comboBox_2->show();
    ui->lineEdit_2->setMaxLength(2);
}

void MainWindow::mulPrep()
{
    ui->label_2->setText("*");
    ui->comboBox_2->hide();
    ui->lineEdit_2->setMaxLength(3);
}

void MainWindow::divPrep()
{
    ui->label_2->setText("/");
    ui->comboBox_2->hide();
    ui->lineEdit_2->setMaxLength(2);
}

void MainWindow::calc()
{
    if (ui->radioButton->isChecked())
        add();
    else if (ui->radioButton_2->isChecked())
        sub();
    else if (ui->radioButton_3->isChecked())
        mul();
    else if (ui->radioButton_4->isChecked())
        div();
}
