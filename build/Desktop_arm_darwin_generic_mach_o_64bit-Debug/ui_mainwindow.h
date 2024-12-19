/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidgetModes;
    QWidget *tabStandAlone;
    QWidget *tabAuto;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QWidget *wgtTimeGreen;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTimeGreen;
    QLineEdit *lineEditTimeGreen;
    QSpacerItem *horizontalSpacer_3;
    QWidget *wgtTimeRed;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTimeRed;
    QLineEdit *lineEditTimeRed;
    QSpacerItem *horizontalSpacer_4;
    QWidget *wgtTimeYellow;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelTimeYellow;
    QLineEdit *lineEditTimeYellow;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QWidget *tabManual;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBoxRightBottom;
    QHBoxLayout *horizontalLayout_8;
    QRadioButton *radioButtonRedRightBottom;
    QRadioButton *radioButtonYellowRightBottom;
    QRadioButton *radioButtonGreenRightBottom;
    QGroupBox *groupBoxLeftTop;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButtonRedLeftTop;
    QRadioButton *radioButtonYellowLeftTop;
    QRadioButton *radioButtonGreenLeftTop;
    QGroupBox *groupBoxLeftBottom;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *radioButtonRedLeftBottom;
    QRadioButton *radioButtonYellowLeftBottom;
    QRadioButton *radioButtonGreenLeftBottom;
    QGroupBox *groupBoxRightTop;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButtonGreenRightTop;
    QRadioButton *radioButtonRedRightTop;
    QRadioButton *radioButtonYellowRightTop;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonPower;
    QPushButton *pushButtonSend;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroupLeftBottom;
    QButtonGroup *buttonGroupLeftTop;
    QButtonGroup *buttonGroupRightBottom;
    QButtonGroup *buttonGroupRightTop;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1155, 482);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        tabWidgetModes = new QTabWidget(centralwidget);
        tabWidgetModes->setObjectName("tabWidgetModes");
        tabStandAlone = new QWidget();
        tabStandAlone->setObjectName("tabStandAlone");
        tabWidgetModes->addTab(tabStandAlone, QString());
        tabAuto = new QWidget();
        tabAuto->setObjectName("tabAuto");
        verticalLayout = new QVBoxLayout(tabAuto);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        wgtTimeGreen = new QWidget(tabAuto);
        wgtTimeGreen->setObjectName("wgtTimeGreen");
        horizontalLayout_2 = new QHBoxLayout(wgtTimeGreen);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelTimeGreen = new QLabel(wgtTimeGreen);
        labelTimeGreen->setObjectName("labelTimeGreen");
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        labelTimeGreen->setFont(font);

        horizontalLayout_2->addWidget(labelTimeGreen);

        lineEditTimeGreen = new QLineEdit(wgtTimeGreen);
        lineEditTimeGreen->setObjectName("lineEditTimeGreen");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditTimeGreen->sizePolicy().hasHeightForWidth());
        lineEditTimeGreen->setSizePolicy(sizePolicy);
        lineEditTimeGreen->setMinimumSize(QSize(100, 0));
        lineEditTimeGreen->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(lineEditTimeGreen);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_5->addWidget(wgtTimeGreen);

        wgtTimeRed = new QWidget(tabAuto);
        wgtTimeRed->setObjectName("wgtTimeRed");
        horizontalLayout_3 = new QHBoxLayout(wgtTimeRed);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelTimeRed = new QLabel(wgtTimeRed);
        labelTimeRed->setObjectName("labelTimeRed");
        labelTimeRed->setFont(font);

        horizontalLayout_3->addWidget(labelTimeRed);

        lineEditTimeRed = new QLineEdit(wgtTimeRed);
        lineEditTimeRed->setObjectName("lineEditTimeRed");
        sizePolicy.setHeightForWidth(lineEditTimeRed->sizePolicy().hasHeightForWidth());
        lineEditTimeRed->setSizePolicy(sizePolicy);
        lineEditTimeRed->setMinimumSize(QSize(100, 0));
        lineEditTimeRed->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(lineEditTimeRed);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_5->addWidget(wgtTimeRed);

        wgtTimeYellow = new QWidget(tabAuto);
        wgtTimeYellow->setObjectName("wgtTimeYellow");
        horizontalLayout_4 = new QHBoxLayout(wgtTimeYellow);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        labelTimeYellow = new QLabel(wgtTimeYellow);
        labelTimeYellow->setObjectName("labelTimeYellow");
        labelTimeYellow->setFont(font);

        horizontalLayout_4->addWidget(labelTimeYellow);

        lineEditTimeYellow = new QLineEdit(wgtTimeYellow);
        lineEditTimeYellow->setObjectName("lineEditTimeYellow");
        sizePolicy.setHeightForWidth(lineEditTimeYellow->sizePolicy().hasHeightForWidth());
        lineEditTimeYellow->setSizePolicy(sizePolicy);
        lineEditTimeYellow->setMinimumSize(QSize(100, 0));
        lineEditTimeYellow->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(lineEditTimeYellow);

        horizontalSpacer_5 = new QSpacerItem(807, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_5->addWidget(wgtTimeYellow);


        verticalLayout->addLayout(verticalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidgetModes->addTab(tabAuto, QString());
        tabManual = new QWidget();
        tabManual->setObjectName("tabManual");
        gridLayout = new QGridLayout(tabManual);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 2, 1, 1);

        groupBoxRightBottom = new QGroupBox(tabManual);
        groupBoxRightBottom->setObjectName("groupBoxRightBottom");
        QFont font1;
        font1.setPointSize(12);
        groupBoxRightBottom->setFont(font1);
        horizontalLayout_8 = new QHBoxLayout(groupBoxRightBottom);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        radioButtonRedRightBottom = new QRadioButton(groupBoxRightBottom);
        buttonGroupRightBottom = new QButtonGroup(MainWindow);
        buttonGroupRightBottom->setObjectName("buttonGroupRightBottom");
        buttonGroupRightBottom->addButton(radioButtonRedRightBottom);
        radioButtonRedRightBottom->setObjectName("radioButtonRedRightBottom");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(radioButtonRedRightBottom->sizePolicy().hasHeightForWidth());
        radioButtonRedRightBottom->setSizePolicy(sizePolicy1);
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonRedRightBottom->setPalette(palette);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        radioButtonRedRightBottom->setFont(font2);

        horizontalLayout_8->addWidget(radioButtonRedRightBottom);

        radioButtonYellowRightBottom = new QRadioButton(groupBoxRightBottom);
        buttonGroupRightBottom->addButton(radioButtonYellowRightBottom);
        radioButtonYellowRightBottom->setObjectName("radioButtonYellowRightBottom");
        sizePolicy1.setHeightForWidth(radioButtonYellowRightBottom->sizePolicy().hasHeightForWidth());
        radioButtonYellowRightBottom->setSizePolicy(sizePolicy1);
        QPalette palette1;
        QBrush brush3(QColor(223, 223, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonYellowRightBottom->setPalette(palette1);
        radioButtonYellowRightBottom->setFont(font2);

        horizontalLayout_8->addWidget(radioButtonYellowRightBottom);

        radioButtonGreenRightBottom = new QRadioButton(groupBoxRightBottom);
        buttonGroupRightBottom->addButton(radioButtonGreenRightBottom);
        radioButtonGreenRightBottom->setObjectName("radioButtonGreenRightBottom");
        sizePolicy1.setHeightForWidth(radioButtonGreenRightBottom->sizePolicy().hasHeightForWidth());
        radioButtonGreenRightBottom->setSizePolicy(sizePolicy1);
        QPalette palette2;
        QBrush brush4(QColor(0, 170, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonGreenRightBottom->setPalette(palette2);
        radioButtonGreenRightBottom->setFont(font2);
        radioButtonGreenRightBottom->setChecked(true);

        horizontalLayout_8->addWidget(radioButtonGreenRightBottom);


        gridLayout->addWidget(groupBoxRightBottom, 5, 2, 1, 1);

        groupBoxLeftTop = new QGroupBox(tabManual);
        groupBoxLeftTop->setObjectName("groupBoxLeftTop");
        groupBoxLeftTop->setFont(font1);
        horizontalLayout_5 = new QHBoxLayout(groupBoxLeftTop);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        radioButtonRedLeftTop = new QRadioButton(groupBoxLeftTop);
        buttonGroupLeftTop = new QButtonGroup(MainWindow);
        buttonGroupLeftTop->setObjectName("buttonGroupLeftTop");
        buttonGroupLeftTop->addButton(radioButtonRedLeftTop);
        radioButtonRedLeftTop->setObjectName("radioButtonRedLeftTop");
        sizePolicy1.setHeightForWidth(radioButtonRedLeftTop->sizePolicy().hasHeightForWidth());
        radioButtonRedLeftTop->setSizePolicy(sizePolicy1);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonRedLeftTop->setPalette(palette3);
        radioButtonRedLeftTop->setFont(font2);

        horizontalLayout_5->addWidget(radioButtonRedLeftTop);

        radioButtonYellowLeftTop = new QRadioButton(groupBoxLeftTop);
        buttonGroupLeftTop->addButton(radioButtonYellowLeftTop);
        radioButtonYellowLeftTop->setObjectName("radioButtonYellowLeftTop");
        sizePolicy1.setHeightForWidth(radioButtonYellowLeftTop->sizePolicy().hasHeightForWidth());
        radioButtonYellowLeftTop->setSizePolicy(sizePolicy1);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonYellowLeftTop->setPalette(palette4);
        radioButtonYellowLeftTop->setFont(font2);

        horizontalLayout_5->addWidget(radioButtonYellowLeftTop);

        radioButtonGreenLeftTop = new QRadioButton(groupBoxLeftTop);
        buttonGroupLeftTop->addButton(radioButtonGreenLeftTop);
        radioButtonGreenLeftTop->setObjectName("radioButtonGreenLeftTop");
        sizePolicy1.setHeightForWidth(radioButtonGreenLeftTop->sizePolicy().hasHeightForWidth());
        radioButtonGreenLeftTop->setSizePolicy(sizePolicy1);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonGreenLeftTop->setPalette(palette5);
        radioButtonGreenLeftTop->setFont(font2);
        radioButtonGreenLeftTop->setChecked(true);

        horizontalLayout_5->addWidget(radioButtonGreenLeftTop);


        gridLayout->addWidget(groupBoxLeftTop, 4, 2, 1, 1);

        groupBoxLeftBottom = new QGroupBox(tabManual);
        groupBoxLeftBottom->setObjectName("groupBoxLeftBottom");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxLeftBottom->sizePolicy().hasHeightForWidth());
        groupBoxLeftBottom->setSizePolicy(sizePolicy2);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        groupBoxLeftBottom->setFont(font3);
        horizontalLayout_6 = new QHBoxLayout(groupBoxLeftBottom);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        radioButtonRedLeftBottom = new QRadioButton(groupBoxLeftBottom);
        buttonGroupLeftBottom = new QButtonGroup(MainWindow);
        buttonGroupLeftBottom->setObjectName("buttonGroupLeftBottom");
        buttonGroupLeftBottom->addButton(radioButtonRedLeftBottom);
        radioButtonRedLeftBottom->setObjectName("radioButtonRedLeftBottom");
        sizePolicy1.setHeightForWidth(radioButtonRedLeftBottom->sizePolicy().hasHeightForWidth());
        radioButtonRedLeftBottom->setSizePolicy(sizePolicy1);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonRedLeftBottom->setPalette(palette6);
        radioButtonRedLeftBottom->setFont(font2);
        radioButtonRedLeftBottom->setChecked(true);

        horizontalLayout_6->addWidget(radioButtonRedLeftBottom);

        radioButtonYellowLeftBottom = new QRadioButton(groupBoxLeftBottom);
        buttonGroupLeftBottom->addButton(radioButtonYellowLeftBottom);
        radioButtonYellowLeftBottom->setObjectName("radioButtonYellowLeftBottom");
        sizePolicy1.setHeightForWidth(radioButtonYellowLeftBottom->sizePolicy().hasHeightForWidth());
        radioButtonYellowLeftBottom->setSizePolicy(sizePolicy1);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonYellowLeftBottom->setPalette(palette7);
        radioButtonYellowLeftBottom->setFont(font2);

        horizontalLayout_6->addWidget(radioButtonYellowLeftBottom);

        radioButtonGreenLeftBottom = new QRadioButton(groupBoxLeftBottom);
        buttonGroupLeftBottom->addButton(radioButtonGreenLeftBottom);
        radioButtonGreenLeftBottom->setObjectName("radioButtonGreenLeftBottom");
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonGreenLeftBottom->setPalette(palette8);
        radioButtonGreenLeftBottom->setFont(font2);

        horizontalLayout_6->addWidget(radioButtonGreenLeftBottom);


        gridLayout->addWidget(groupBoxLeftBottom, 1, 2, 1, 1);

        groupBoxRightTop = new QGroupBox(tabManual);
        groupBoxRightTop->setObjectName("groupBoxRightTop");
        groupBoxRightTop->setFont(font1);
        groupBoxRightTop->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignTop);
        gridLayout_2 = new QGridLayout(groupBoxRightTop);
        gridLayout_2->setObjectName("gridLayout_2");
        radioButtonGreenRightTop = new QRadioButton(groupBoxRightTop);
        buttonGroupRightTop = new QButtonGroup(MainWindow);
        buttonGroupRightTop->setObjectName("buttonGroupRightTop");
        buttonGroupRightTop->addButton(radioButtonGreenRightTop);
        radioButtonGreenRightTop->setObjectName("radioButtonGreenRightTop");
        sizePolicy1.setHeightForWidth(radioButtonGreenRightTop->sizePolicy().hasHeightForWidth());
        radioButtonGreenRightTop->setSizePolicy(sizePolicy1);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonGreenRightTop->setPalette(palette9);
        radioButtonGreenRightTop->setFont(font2);

        gridLayout_2->addWidget(radioButtonGreenRightTop, 0, 2, 1, 1);

        radioButtonRedRightTop = new QRadioButton(groupBoxRightTop);
        buttonGroupRightTop->addButton(radioButtonRedRightTop);
        radioButtonRedRightTop->setObjectName("radioButtonRedRightTop");
        sizePolicy1.setHeightForWidth(radioButtonRedRightTop->sizePolicy().hasHeightForWidth());
        radioButtonRedRightTop->setSizePolicy(sizePolicy1);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonRedRightTop->setPalette(palette10);
        radioButtonRedRightTop->setFont(font2);
        radioButtonRedRightTop->setChecked(true);

        gridLayout_2->addWidget(radioButtonRedRightTop, 0, 0, 1, 1);

        radioButtonYellowRightTop = new QRadioButton(groupBoxRightTop);
        buttonGroupRightTop->addButton(radioButtonYellowRightTop);
        radioButtonYellowRightTop->setObjectName("radioButtonYellowRightTop");
        sizePolicy1.setHeightForWidth(radioButtonYellowRightTop->sizePolicy().hasHeightForWidth());
        radioButtonYellowRightTop->setSizePolicy(sizePolicy1);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        radioButtonYellowRightTop->setPalette(palette11);
        radioButtonYellowRightTop->setFont(font2);

        gridLayout_2->addWidget(radioButtonYellowRightTop, 0, 1, 1, 1);


        gridLayout->addWidget(groupBoxRightTop, 0, 2, 1, 1);

        tabWidgetModes->addTab(tabManual, QString());

        verticalLayout_2->addWidget(tabWidgetModes);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(60);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(-1, -1, 20, -1);
        pushButtonPower = new QPushButton(centralwidget);
        pushButtonPower->setObjectName("pushButtonPower");
        sizePolicy.setHeightForWidth(pushButtonPower->sizePolicy().hasHeightForWidth());
        pushButtonPower->setSizePolicy(sizePolicy);
        pushButtonPower->setMinimumSize(QSize(50, 50));
        pushButtonPower->setMaximumSize(QSize(50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/power_on.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon.addFile(QString::fromUtf8(":/icons/power_off.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButtonPower->setIcon(icon);
        pushButtonPower->setIconSize(QSize(50, 50));
        pushButtonPower->setCheckable(true);
        pushButtonPower->setChecked(false);
        pushButtonPower->setFlat(true);

        horizontalLayout->addWidget(pushButtonPower);

        pushButtonSend = new QPushButton(centralwidget);
        pushButtonSend->setObjectName("pushButtonSend");
        sizePolicy.setHeightForWidth(pushButtonSend->sizePolicy().hasHeightForWidth());
        pushButtonSend->setSizePolicy(sizePolicy);
        pushButtonSend->setMinimumSize(QSize(50, 50));
        pushButtonSend->setMaximumSize(QSize(50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/send.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButtonSend->setIcon(icon1);
        pushButtonSend->setIconSize(QSize(50, 50));
        pushButtonSend->setFlat(true);

        horizontalLayout->addWidget(pushButtonSend);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1155, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidgetModes->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pult", nullptr));
        tabWidgetModes->setTabText(tabWidgetModes->indexOf(tabStandAlone), QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\275\320\276\320\274\320\275\320\276\320\265 \321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265", nullptr));
        labelTimeGreen->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">\320\222\321\200\320\265\320\274\321\217 \320\267\320\265\320\273\321\221\320\275\320\276\320\263\320\276 \321\206\320\262\320\265\321\202\320\260:</span></p></body></html>", nullptr));
        labelTimeRed->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">\320\222\321\200\320\265\320\274\321\217 \320\272\321\200\320\260\321\201\320\275\320\276\320\263\320\276 \321\206\320\262\320\265\321\202\320\260:</span></p></body></html>", nullptr));
        labelTimeYellow->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#000000;\">\320\222\321\200\320\265\320\274\321\217 \320\266\321\221\320\273\321\202\320\276\320\263\320\276 \321\206\320\262\320\265\321\202\320\260:</span></p></body></html>", nullptr));
        tabWidgetModes->setTabText(tabWidgetModes->indexOf(tabAuto), QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265", nullptr));
        groupBoxRightBottom->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\321\213\320\271 \321\201\320\262\320\265\321\202\320\276\321\204\320\276\321\200", nullptr));
        radioButtonRedRightBottom->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButtonYellowRightBottom->setText(QCoreApplication::translate("MainWindow", "\320\226\321\221\320\273\321\202\321\213\320\271", nullptr));
        radioButtonGreenRightBottom->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
        groupBoxLeftTop->setTitle(QCoreApplication::translate("MainWindow", "\320\233\320\265\320\262\321\213\320\271  \321\201\320\262\320\265\321\202\320\276\321\204\320\276\321\200", nullptr));
        radioButtonRedLeftTop->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButtonYellowLeftTop->setText(QCoreApplication::translate("MainWindow", "\320\226\321\221\320\273\321\202\321\213\320\271", nullptr));
        radioButtonGreenLeftTop->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
        groupBoxLeftBottom->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\270\320\266\320\275\320\270\320\271 \321\201\320\262\320\265\321\202\320\276\321\204\320\276\321\200", nullptr));
        radioButtonRedLeftBottom->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButtonYellowLeftBottom->setText(QCoreApplication::translate("MainWindow", "\320\226\321\221\320\273\321\202\321\213\320\271", nullptr));
        radioButtonGreenLeftBottom->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
        groupBoxRightTop->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\205\320\275\320\270\320\271 \321\201\320\262\320\265\321\202\320\276\321\204\320\276\321\200", nullptr));
        radioButtonGreenRightTop->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
        radioButtonRedRightTop->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButtonYellowRightTop->setText(QCoreApplication::translate("MainWindow", "\320\226\321\221\320\273\321\202\321\213\320\271", nullptr));
        tabWidgetModes->setTabText(tabWidgetModes->indexOf(tabManual), QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \321\200\321\203\321\207\320\275\320\276\320\265", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonPower->setToolTip(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260 \320\277\320\270\321\202\320\260\320\275\320\270\321\217", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonPower->setText(QString());
#if QT_CONFIG(tooltip)
        pushButtonSend->setToolTip(QCoreApplication::translate("MainWindow", "\320\232\320\275\320\276\320\277\320\272\320\260 \320\276\321\202\320\277\321\200\320\260\320\262\320\272\320\270 \321\201\320\276\320\276\320\261\321\211\320\265\320\275\320\270\320\271", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonSend->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
