#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "data.h"
#include <QString>
#include <QThread>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_NickelButton_clicked()
{
    Data::setValue(Data::getValue()+0.05);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
}

void MainWindow::on_DimeButton_clicked()
{
    Data::setValue(Data::getValue()+0.10);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
}
void MainWindow::on_QuarterButton_clicked()
{
    Data::setValue(Data::getValue()+0.25);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
}

void MainWindow::on_DollarButton_clicked()
{
    Data::setValue(Data::getValue()+1.00);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
}

void MainWindow::on_RefundButton_clicked()
{
    int x = static_cast<int>(Data::getValue()*100+0.5);
    while(x > 0){
        if(x >= 100){
            x -= 100;
            Data::setValue(Data::getValue()-1.00);
            ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
            ui->lcdNumber->update();
            this->update();
            QCoreApplication::processEvents();
            QCoreApplication::flush();
            QThread::sleep(1);
        }
        else if(x >= 25){
            x -= 25;
            Data::setValue(Data::getValue()-0.25);
            ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
            ui->lcdNumber->update();
            this->update();
            QCoreApplication::processEvents();
            QCoreApplication::flush();
            QThread::sleep(1);
        }
        else if(x >= 10){
            x -= 10;
            Data::setValue(Data::getValue()-0.10);
            ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
            ui->lcdNumber->update();
            this->update();
            QCoreApplication::processEvents();
            QCoreApplication::flush();
            QThread::sleep(1);
        }
        else if(x >= 5){
            x -= 5;
            Data::setValue(Data::getValue()-0.05);
            ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
            ui->lcdNumber->update();
            this->update();
            QCoreApplication::processEvents();
            QCoreApplication::flush();
            QThread::sleep(1);
        }
    }
}
