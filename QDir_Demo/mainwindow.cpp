#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QDir dir("D:/C++ codes/QT/QDir_Demo");

//    if (dir.exists())
//    {
//        QMessageBox::information(this, "Title", "Exist");
//    }
//    else
//        QMessageBox::information(this, "Title", "Not Found");

    QDir dir;
    foreach (QFileInfo var, dir.drives()){
        ui->comboBox->addItem(var.absoluteFilePath());
    }

    QDir dir2("C:/");
    foreach (QFileInfo var, dir2.entryInfoList()){
        if (var.isDir())
            ui->listWidget->addItem("Dir : " + var.absoluteFilePath());
        if (var.isFile())
            ui->listWidget->addItem("File : " + var.absoluteFilePath());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//    QDir dir("D:/XYZ");
//    if (dir.exists())
//        QMessageBox::information(this, "ABC", "Exist");
//    else
//    {
//        dir.mkpath("D:/XYZ");
//    }
    ui->listWidget->clear();

    QDir dir(ui->comboBox->currentText());
    foreach (QFileInfo var, dir.entryInfoList()){
        if (var.isDir())
            ui->listWidget->addItem("Dir : " + var.absoluteFilePath());
        if (var.isFile())
            ui->listWidget->addItem("File : " + var.absoluteFilePath());
    }
}

