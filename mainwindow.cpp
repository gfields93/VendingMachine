#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "data.h"
#include <QString>
#include <QChar>
#include <QThread>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
    ui->StateLabel->setText("State 1");
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

    if(Data::getCurrentState() == Data::state1) {
        Data::setPrevState(Data::getCurrentState());
        Data::setCurrentState(Data::state2);
        ui->StateLabel->setText("State 2");
    }
    else coinStates();
}

void MainWindow::on_DimeButton_clicked()
{
    Data::setValue(Data::getValue()+0.10);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
    if(Data::getCurrentState() == Data::state1) {
        Data::setPrevState(Data::getCurrentState());
        Data::setCurrentState(Data::state2);
        ui->StateLabel->setText("State 2");
    }
    else coinStates();
}
void MainWindow::on_QuarterButton_clicked()
{
    Data::setValue(Data::getValue()+0.25);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
    if(Data::getCurrentState() == Data::state1) {
        Data::setPrevState(Data::getCurrentState());
        Data::setCurrentState(Data::state2);
        ui->StateLabel->setText("State 2");
    }
    else coinStates();
}

void MainWindow::on_DollarButton_clicked()
{
    Data::setValue(Data::getValue()+1.00);
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->lcdNumber->update();
    if(Data::getCurrentState() == Data::state1) {
        Data::setPrevState(Data::getCurrentState());
        Data::setCurrentState(Data::state3);
        ui->StateLabel->setText("State 3");
    }
    else coinStates();
}



void MainWindow::on_RefundButton_clicked()
{
    Data::setPrevState(Data::getCurrentState()); Data::setCurrentState(Data::state8);
    ui->StateLabel->setText("State 8");
    Refund();
    Data::setPrevState(Data::getCurrentState()); Data::setCurrentState(Data::state1);
    ui->StateLabel->setText("State 1");
}

void MainWindow::on_AButton_clicked()
{
    if(static_cast<int>(Data::getValue()*100+0.5) >= 50){
        ui->OptionLabel->setText("A");
        Data::setPrevState(Data::getCurrentState()); Data::setCurrentState(Data::state6);
        ui->StateLabel->setText("State 6");
    }
    else Error();
}

void MainWindow::on_BButton_clicked()
{
    if(static_cast<int>(Data::getValue()*100+0.5) >= 100){
        ui->OptionLabel->setText("B");
        Data::setPrevState(Data::getCurrentState()); Data::setCurrentState(Data::state6);
        ui->StateLabel->setText("State 6");
    }
    else Error();
}

void MainWindow::on_CButton_clicked()
{
    if(static_cast<int>(Data::getValue()*100+0.5) >= 150){
        ui->OptionLabel->setText("C");
        Data::setPrevState(Data::getCurrentState()); Data::setCurrentState(Data::state6);
        ui->StateLabel->setText("State 6");
    }
    else Error();
}

void MainWindow::on__1Button_clicked()
{
    QString string = ui->OptionLabel->text();
    if(string.isEmpty() || Data::getCurrentState()!=Data::state6){
        Error();
    }
    else{
        ui->OptionLabel->setText(string + "1");
        Purchase();
        ui->StateLabel->setText("State 7");
        Output();
    }
}

void MainWindow::on__2Button_clicked()
{
    QString string = ui->OptionLabel->text();
    if(string.isEmpty() || Data::getCurrentState()!=Data::state6){
        Error();
    }
    else{
        ui->OptionLabel->setText(string + "2");
        Purchase();
        ui->StateLabel->setText("State 7");
        Output();
    }
}

void MainWindow::on__3Button_clicked()
{
    QString string = ui->OptionLabel->text();
    if(string.isEmpty() || Data::getCurrentState()!=Data::state6){
        Error();
    }
    else{
        ui->OptionLabel->setText(string + "3");
        Purchase();
        ui->StateLabel->setText("State 7");
        Output();
    }
}

void MainWindow::Error()
{
    ui->StateLabel->setText("State 9");
    ui->OptionLabel->setText("Error!");
    ui->OptionLabel->repaint();
    QApplication::processEvents();
    QApplication::flush();
    QThread::sleep(1);
    ui->OptionLabel->setText("");
    switch (Data::getPrevState()) {
    case Data::state1:
        ui->StateLabel->setText("State 1");
        break;
    case Data::state2:
        ui->StateLabel->setText("State 2");
        break;
    case Data::state3:
        ui->StateLabel->setText("State 3");
        break;
    case Data::state4:
        ui->StateLabel->setText("State 4");
        break;
    case Data::state5:
        ui->StateLabel->setText("State 5");
        break;
    case Data::state6:
        ui->StateLabel->setText("State 6");
        break;
    case Data::state7:
        ui->StateLabel->setText("State 7");
        break;
    case Data::state8:
        ui->StateLabel->setText("State 8");
        break;
    case Data::state9:
        ui->StateLabel->setText("State 9");
        break;
    default:
        break;
    }
}

void MainWindow::Refund()
{
    ui->StateLabel->setText("State 8");
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
    Data::setPrevState(Data::getCurrentState());
    Data::setCurrentState(Data::state1);
    ui->OptionLabel->setText("");
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
    ui->StateLabel->setText("State 1");
}

void MainWindow::coinStates(){
    int y = static_cast<int>(Data::getValue()*100+0.5);
    switch (Data::getCurrentState()) {
    case Data::state2:
        if(y<50){}
        else if(y>=50 && y<100) {Data::setPrevState(Data::state2); Data::setCurrentState(Data::state3); ui->StateLabel->setText("State 3");}
        else if(y>=100 && y<150) {Data::setPrevState(Data::state2); Data::setCurrentState(Data::state4); ui->StateLabel->setText("State 4");}
        else if(y >= 150){Data::setPrevState(Data::state2); Data::setCurrentState(Data::state5); ui->StateLabel->setText("State 5");}
        break;
    case Data::state3:
        if(y < 100){}
        else if(y>=100 && y<150){Data::setPrevState(Data::state3); Data::setCurrentState(Data::state4); ui->StateLabel->setText("State 4");}
        else if(y >= 150){Data::setPrevState(Data::state3); Data::setCurrentState(Data::state5); ui->StateLabel->setText("State 5");}
        break;
    case Data::state4:
        if(y < 150){}
        else {Data::setPrevState(Data::state4); Data::setCurrentState(Data::state5); ui->StateLabel->setText("State 5");}
    case Data::state5:
        break;
    default:
        break;
    }
}

void MainWindow::Output()
{
    Data::setPrevState(Data::getCurrentState()); Data::setCurrentState(Data::state7);
    ui->OptionLabel->repaint();
    QApplication::processEvents();
    QApplication::flush();
    QThread::sleep(1);
    ui->OptionLabel->setText("");
    Data::setPrevState(Data::getCurrentState()); Data::setCurrentState(Data::state8);
    Refund();
    Data::setPrevState(Data::getCurrentState()); Data::setCurrentState(Data::state1);
    ui->StateLabel->setText("State 1");
}

void MainWindow::Purchase(){
    QString string = ui->OptionLabel->text();
    switch (string.at(0).toLatin1()) {
    case 'A':
        Data::setValue(Data::getValue()-0.50);
        break;
    case 'B':
        Data::setValue(Data::getValue()-1.00);
        break;
    case 'C':
        Data::setValue(Data::getValue()-1.50);
        break;
    default:
        break;
    }
    ui->lcdNumber->display(QString::number(Data::getValue(),'f',2));
}
