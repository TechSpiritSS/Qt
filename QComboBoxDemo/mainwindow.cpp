#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->comboBox->addItem(QIcon(":/img/envelop.png"), "Option1");
//    ui->comboBox->addItem(QIcon(":/img/location-icon.png"), "Option2");
//    ui->comboBox->addItem(QIcon(":/img/whatsapp icon2.png"), "Option3");

    for (int i = 0; i < 10; ++i)
    {
        ui->comboBox->addItem(QString::number(i) + " Option");
    }
    ui->comboBox->insertItem(3, "New Item");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "TITLE", ui->comboBox->currentText());
}

