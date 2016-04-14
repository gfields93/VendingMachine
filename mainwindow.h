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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
