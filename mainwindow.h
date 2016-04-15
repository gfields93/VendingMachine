#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_NickelButton_clicked();
    void on_DimeButton_clicked();
    void on_QuarterButton_clicked();
    void on_DollarButton_clicked();

    void on_RefundButton_clicked();

    void on_AButton_clicked();

    void on_BButton_clicked();

    void on_CButton_clicked();

    void on__1Button_clicked();

    void on__2Button_clicked();

    void on__3Button_clicked();

    void Error();

    void Refund();

    void Output();

    void Purchase();

private:
    Ui::MainWindow *ui;

    void coinStates();
};

#endif // MAINWINDOW_H
