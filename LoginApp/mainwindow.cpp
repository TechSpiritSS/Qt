#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/img/WhatsApp Image 2022-01-20 at 16.09.18.jpeg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->statusbar->addPermanentWidget(ui->label_3);
    ui->statusbar->addPermanentWidget(ui->progressBar);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (username == "test" && password == "test")
    {
        //QMessageBox::information(this, "Login", "Username and Password is correct");
        //hide();
        //secDialog = new SecDialog(this);
        //secDialog->show();
        ui->statusbar->showMessage("Username and Password", 5000);
    }
       else
       //   QMessageBox::warning(this, "Login", "Username and Password is incorrect");
            ui->statusbar->showMessage("Username and Password Incorrect", 5000);
}

