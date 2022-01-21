#include "second_dialog.h"
#include "ui_second_dialog.h"
#include "QDebug"
Second_Dialog::Second_Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Second_Dialog)
{
    ui->setupUi(this);
}

Second_Dialog::~Second_Dialog()
{
    delete ui;
}

void Second_Dialog::on_pushButton_clicked()
{
    auto result = ui->lineEdit->text();
    qDebug() << result;
}

