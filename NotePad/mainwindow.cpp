#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNew_triggered()
{
    filePath = "";
    ui->textEdit->setText("");
}


void MainWindow::on_actionOpen_triggered()
{
    QString filter = "*.txt";
    QString fileName =  QFileDialog::getOpenFileName(this, "Open File Name", "D://", filter);
    QFile file(fileName);
    filePath = fileName;
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "ERRORRRR", "Can't Open this file");
        return;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}


void MainWindow::on_actionSave_triggered()
{
    QFile file(filePath);
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "ERRORRRR", "Can't Open this file");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actionSave_As_triggered()
{
    QString fileName =  QFileDialog::getSaveFileName(this, "Save File Name", "D://");
    QFile file(fileName);
    filePath = fileName;
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "ERRORRRR", "Can't Open this file");
        return;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}


void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionExit_triggered()
{
    connect(ui->actionExit, SIGNAL(clicked()), this, SLOT(close()));
}


void MainWindow::on_actionAbout_triggered()
{
    QString aboutText;
    aboutText = "By Sidharth Sethi\n";
    aboutText += "Date - 28th Jan, 2022\n";
    aboutText += "(c) NotePad";
    QMessageBox::about(this, "About", aboutText);
}

