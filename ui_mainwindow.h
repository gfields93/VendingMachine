/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *line;
    QLCDNumber *lcdNumber;
    QFrame *frame;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *B1;
    QLabel *B2;
    QLabel *C2;
    QLabel *C1;
    QLabel *C3;
    QLabel *A2;
    QLabel *A3;
    QLabel *A1;
    QLabel *Label_100;
    QLabel *Label_150;
    QLabel *B3;
    QLabel *Label_50;
    QLabel *OptionLabel;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *NickelButton;
    QPushButton *DimeButton;
    QPushButton *QuarterButton;
    QPushButton *DollarButton;
    QGroupBox *groupBox_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *_1Button;
    QPushButton *BButton;
    QPushButton *AButton;
    QPushButton *_2Button;
    QPushButton *CButton;
    QPushButton *_3Button;
    QPushButton *RefundButton;
    QGroupBox *groupBox_3;
    QLabel *StateLabel;
    QMenuBar *menuBar;
    QMenu *menuVending_Machine;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(689, 403);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(420, 0, 21, 381));
        line->setLineWidth(5);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(30, 20, 241, 61));
        lcdNumber->setStyleSheet(QLatin1String("color:red;\n"
"background-color:black"));
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(40, 90, 341, 171));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        line_2 = new QFrame(frame);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 50, 341, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(frame);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 100, 341, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(frame);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(80, 0, 16, 171));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(frame);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(160, 0, 16, 171));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(frame);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(240, 0, 16, 171));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 321, 151));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        B1 = new QLabel(layoutWidget);
        B1->setObjectName(QStringLiteral("B1"));
        B1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(B1, 1, 1, 1, 1);

        B2 = new QLabel(layoutWidget);
        B2->setObjectName(QStringLiteral("B2"));
        B2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(B2, 1, 2, 1, 1);

        C2 = new QLabel(layoutWidget);
        C2->setObjectName(QStringLiteral("C2"));
        C2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(C2, 2, 2, 1, 1);

        C1 = new QLabel(layoutWidget);
        C1->setObjectName(QStringLiteral("C1"));
        C1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(C1, 2, 1, 1, 1);

        C3 = new QLabel(layoutWidget);
        C3->setObjectName(QStringLiteral("C3"));
        C3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(C3, 2, 3, 1, 1);

        A2 = new QLabel(layoutWidget);
        A2->setObjectName(QStringLiteral("A2"));
        A2->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(A2, 0, 2, 1, 1);

        A3 = new QLabel(layoutWidget);
        A3->setObjectName(QStringLiteral("A3"));
        A3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(A3, 0, 3, 1, 1);

        A1 = new QLabel(layoutWidget);
        A1->setObjectName(QStringLiteral("A1"));
        A1->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(A1, 0, 1, 1, 1);

        Label_100 = new QLabel(layoutWidget);
        Label_100->setObjectName(QStringLiteral("Label_100"));
        Label_100->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Label_100, 1, 0, 1, 1);

        Label_150 = new QLabel(layoutWidget);
        Label_150->setObjectName(QStringLiteral("Label_150"));
        Label_150->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Label_150, 2, 0, 1, 1);

        B3 = new QLabel(layoutWidget);
        B3->setObjectName(QStringLiteral("B3"));
        B3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(B3, 1, 3, 1, 1);

        Label_50 = new QLabel(layoutWidget);
        Label_50->setObjectName(QStringLiteral("Label_50"));
        Label_50->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(Label_50, 0, 0, 1, 1);

        OptionLabel = new QLabel(centralWidget);
        OptionLabel->setObjectName(QStringLiteral("OptionLabel"));
        OptionLabel->setGeometry(QRect(280, 20, 111, 61));
        OptionLabel->setStyleSheet(QLatin1String("background-color:black;\n"
"color:red;\n"
"font-size:60px"));
        OptionLabel->setAlignment(Qt::AlignCenter);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(449, 10, 231, 351));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 22, 201, 134));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        NickelButton = new QPushButton(verticalLayoutWidget);
        NickelButton->setObjectName(QStringLiteral("NickelButton"));

        verticalLayout->addWidget(NickelButton);

        DimeButton = new QPushButton(verticalLayoutWidget);
        DimeButton->setObjectName(QStringLiteral("DimeButton"));

        verticalLayout->addWidget(DimeButton);

        QuarterButton = new QPushButton(verticalLayoutWidget);
        QuarterButton->setObjectName(QStringLiteral("QuarterButton"));

        verticalLayout->addWidget(QuarterButton);

        DollarButton = new QPushButton(verticalLayoutWidget);
        DollarButton->setObjectName(QStringLiteral("DollarButton"));

        verticalLayout->addWidget(DollarButton);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 160, 229, 175));
        gridLayoutWidget = new QWidget(groupBox_2);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 201, 121));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        _1Button = new QPushButton(gridLayoutWidget);
        _1Button->setObjectName(QStringLiteral("_1Button"));

        gridLayout->addWidget(_1Button, 0, 1, 1, 1);

        BButton = new QPushButton(gridLayoutWidget);
        BButton->setObjectName(QStringLiteral("BButton"));

        gridLayout->addWidget(BButton, 1, 0, 1, 1);

        AButton = new QPushButton(gridLayoutWidget);
        AButton->setObjectName(QStringLiteral("AButton"));

        gridLayout->addWidget(AButton, 0, 0, 1, 1);

        _2Button = new QPushButton(gridLayoutWidget);
        _2Button->setObjectName(QStringLiteral("_2Button"));

        gridLayout->addWidget(_2Button, 1, 1, 1, 1);

        CButton = new QPushButton(gridLayoutWidget);
        CButton->setObjectName(QStringLiteral("CButton"));

        gridLayout->addWidget(CButton, 2, 0, 1, 1);

        _3Button = new QPushButton(gridLayoutWidget);
        _3Button->setObjectName(QStringLiteral("_3Button"));

        gridLayout->addWidget(_3Button, 2, 1, 1, 1);

        RefundButton = new QPushButton(groupBox_2);
        RefundButton->setObjectName(QStringLiteral("RefundButton"));
        RefundButton->setGeometry(QRect(10, 150, 113, 32));

        verticalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(90, 290, 211, 81));
        groupBox_3->setStyleSheet(QLatin1String("background-color:white;\n"
""));
        StateLabel = new QLabel(groupBox_3);
        StateLabel->setObjectName(QStringLiteral("StateLabel"));
        StateLabel->setGeometry(QRect(18, 25, 171, 51));
        StateLabel->setStyleSheet(QStringLiteral("font-size:30px"));
        StateLabel->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 689, 22));
        menuVending_Machine = new QMenu(menuBar);
        menuVending_Machine->setObjectName(QStringLiteral("menuVending_Machine"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuVending_Machine->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        B1->setText(QApplication::translate("MainWindow", "B1", 0));
        B2->setText(QApplication::translate("MainWindow", "B2", 0));
        C2->setText(QApplication::translate("MainWindow", "C2", 0));
        C1->setText(QApplication::translate("MainWindow", "C1", 0));
        C3->setText(QApplication::translate("MainWindow", "C3", 0));
        A2->setText(QApplication::translate("MainWindow", "A2", 0));
        A3->setText(QApplication::translate("MainWindow", "A3", 0));
        A1->setText(QApplication::translate("MainWindow", "A1", 0));
        Label_100->setText(QApplication::translate("MainWindow", "$1.00", 0));
        Label_150->setText(QApplication::translate("MainWindow", "$1.50", 0));
        B3->setText(QApplication::translate("MainWindow", "B3", 0));
        Label_50->setText(QApplication::translate("MainWindow", "$0.50", 0));
        OptionLabel->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Money", 0));
        NickelButton->setText(QApplication::translate("MainWindow", "$0.05", 0));
        DimeButton->setText(QApplication::translate("MainWindow", "$0.10", 0));
        QuarterButton->setText(QApplication::translate("MainWindow", "$0.25", 0));
        DollarButton->setText(QApplication::translate("MainWindow", "$1.00", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Options", 0));
        _1Button->setText(QApplication::translate("MainWindow", "1", 0));
        BButton->setText(QApplication::translate("MainWindow", "B", 0));
        AButton->setText(QApplication::translate("MainWindow", "A", 0));
        _2Button->setText(QApplication::translate("MainWindow", "2", 0));
        CButton->setText(QApplication::translate("MainWindow", "C", 0));
        _3Button->setText(QApplication::translate("MainWindow", "3", 0));
        RefundButton->setText(QApplication::translate("MainWindow", "Refund", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Current State:", 0));
        StateLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        menuVending_Machine->setTitle(QApplication::translate("MainWindow", "Vending Machine", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
