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
    QGroupBox *groupBoxLeftTop;
    QVBoxLayout *verticalLayout_6;
    QRadioButton *radioButtonRedLeftTop;
    QRadioButton *radioButtonYellowLeftTop;
    QRadioButton *radioButtonGreenLeftTop;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBoxRightBottom;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButtonRedRightBottom;
    QRadioButton *radioButtonYellowRightBottom;
    QRadioButton *radioButtonGreenRightBottom;
    QGroupBox *groupBoxLeftBottom;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *radioButtonRedLeftBottom;
    QRadioButton *radioButtonYellowLeftBottom;
    QRadioButton *radioButtonGreenLeftBottom;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBoxRightTop;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioButtonRedRightTop;
    QRadioButton *radioButtonYellowRightTop;
    QRadioButton *radioButtonGreenRightTop;
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

        horizontalSpacer_5 = new QSpacerItem(790, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

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
        groupBoxLeftTop = new QGroupBox(tabManual);
        groupBoxLeftTop->setObjectName("groupBoxLeftTop");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxLeftTop->sizePolicy().hasHeightForWidth());
        groupBoxLeftTop->setSizePolicy(sizePolicy1);
        groupBoxLeftTop->setMaximumSize(QSize(130, 130));
        groupBoxLeftTop->setBaseSize(QSize(130, 130));
        QFont font1;
        font1.setPointSize(12);
        groupBoxLeftTop->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(groupBoxLeftTop);
        verticalLayout_6->setObjectName("verticalLayout_6");
        radioButtonRedLeftTop = new QRadioButton(groupBoxLeftTop);
        buttonGroupLeftTop = new QButtonGroup(MainWindow);
        buttonGroupLeftTop->setObjectName("buttonGroupLeftTop");
        buttonGroupLeftTop->addButton(radioButtonRedLeftTop);
        radioButtonRedLeftTop->setObjectName("radioButtonRedLeftTop");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(radioButtonRedLeftTop->sizePolicy().hasHeightForWidth());
        radioButtonRedLeftTop->setSizePolicy(sizePolicy2);
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonRedLeftTop->setPalette(palette);
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        radioButtonRedLeftTop->setFont(font2);
        radioButtonRedLeftTop->setStyleSheet(QString::fromUtf8("color:black"));

        verticalLayout_6->addWidget(radioButtonRedLeftTop);

        radioButtonYellowLeftTop = new QRadioButton(groupBoxLeftTop);
        buttonGroupLeftTop->addButton(radioButtonYellowLeftTop);
        radioButtonYellowLeftTop->setObjectName("radioButtonYellowLeftTop");
        sizePolicy2.setHeightForWidth(radioButtonYellowLeftTop->sizePolicy().hasHeightForWidth());
        radioButtonYellowLeftTop->setSizePolicy(sizePolicy2);
        QPalette palette1;
        QBrush brush4(QColor(223, 223, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonYellowLeftTop->setPalette(palette1);
        radioButtonYellowLeftTop->setFont(font2);
        radioButtonYellowLeftTop->setStyleSheet(QString::fromUtf8("color:black"));

        verticalLayout_6->addWidget(radioButtonYellowLeftTop);

        radioButtonGreenLeftTop = new QRadioButton(groupBoxLeftTop);
        buttonGroupLeftTop->addButton(radioButtonGreenLeftTop);
        radioButtonGreenLeftTop->setObjectName("radioButtonGreenLeftTop");
        sizePolicy2.setHeightForWidth(radioButtonGreenLeftTop->sizePolicy().hasHeightForWidth());
        radioButtonGreenLeftTop->setSizePolicy(sizePolicy2);
        QPalette palette2;
        QBrush brush5(QColor(0, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonGreenLeftTop->setPalette(palette2);
        radioButtonGreenLeftTop->setFont(font2);
        radioButtonGreenLeftTop->setStyleSheet(QString::fromUtf8("color:black"));
        radioButtonGreenLeftTop->setChecked(true);

        verticalLayout_6->addWidget(radioButtonGreenLeftTop);


        gridLayout->addWidget(groupBoxLeftTop, 4, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 2, 1, 1);

        groupBoxRightBottom = new QGroupBox(tabManual);
        groupBoxRightBottom->setObjectName("groupBoxRightBottom");
        groupBoxRightBottom->setMaximumSize(QSize(130, 130));
        groupBoxRightBottom->setFont(font1);
        verticalLayout_7 = new QVBoxLayout(groupBoxRightBottom);
        verticalLayout_7->setObjectName("verticalLayout_7");
        radioButtonRedRightBottom = new QRadioButton(groupBoxRightBottom);
        buttonGroupRightBottom = new QButtonGroup(MainWindow);
        buttonGroupRightBottom->setObjectName("buttonGroupRightBottom");
        buttonGroupRightBottom->addButton(radioButtonRedRightBottom);
        radioButtonRedRightBottom->setObjectName("radioButtonRedRightBottom");
        sizePolicy2.setHeightForWidth(radioButtonRedRightBottom->sizePolicy().hasHeightForWidth());
        radioButtonRedRightBottom->setSizePolicy(sizePolicy2);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonRedRightBottom->setPalette(palette3);
        radioButtonRedRightBottom->setFont(font2);
        radioButtonRedRightBottom->setStyleSheet(QString::fromUtf8("color:black"));

        verticalLayout_7->addWidget(radioButtonRedRightBottom);

        radioButtonYellowRightBottom = new QRadioButton(groupBoxRightBottom);
        buttonGroupRightBottom->addButton(radioButtonYellowRightBottom);
        radioButtonYellowRightBottom->setObjectName("radioButtonYellowRightBottom");
        sizePolicy2.setHeightForWidth(radioButtonYellowRightBottom->sizePolicy().hasHeightForWidth());
        radioButtonYellowRightBottom->setSizePolicy(sizePolicy2);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonYellowRightBottom->setPalette(palette4);
        radioButtonYellowRightBottom->setFont(font2);
        radioButtonYellowRightBottom->setStyleSheet(QString::fromUtf8("color:black"));

        verticalLayout_7->addWidget(radioButtonYellowRightBottom);

        radioButtonGreenRightBottom = new QRadioButton(groupBoxRightBottom);
        buttonGroupRightBottom->addButton(radioButtonGreenRightBottom);
        radioButtonGreenRightBottom->setObjectName("radioButtonGreenRightBottom");
        sizePolicy2.setHeightForWidth(radioButtonGreenRightBottom->sizePolicy().hasHeightForWidth());
        radioButtonGreenRightBottom->setSizePolicy(sizePolicy2);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonGreenRightBottom->setPalette(palette5);
        radioButtonGreenRightBottom->setFont(font2);
        radioButtonGreenRightBottom->setStyleSheet(QString::fromUtf8("color:black"));
        radioButtonGreenRightBottom->setChecked(true);

        verticalLayout_7->addWidget(radioButtonGreenRightBottom);


        gridLayout->addWidget(groupBoxRightBottom, 4, 3, 1, 1);

        groupBoxLeftBottom = new QGroupBox(tabManual);
        groupBoxLeftBottom->setObjectName("groupBoxLeftBottom");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBoxLeftBottom->sizePolicy().hasHeightForWidth());
        groupBoxLeftBottom->setSizePolicy(sizePolicy3);
        groupBoxLeftBottom->setMaximumSize(QSize(130, 130));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        groupBoxLeftBottom->setFont(font3);
        verticalLayout_4 = new QVBoxLayout(groupBoxLeftBottom);
        verticalLayout_4->setObjectName("verticalLayout_4");
        radioButtonRedLeftBottom = new QRadioButton(groupBoxLeftBottom);
        buttonGroupLeftBottom = new QButtonGroup(MainWindow);
        buttonGroupLeftBottom->setObjectName("buttonGroupLeftBottom");
        buttonGroupLeftBottom->addButton(radioButtonRedLeftBottom);
        radioButtonRedLeftBottom->setObjectName("radioButtonRedLeftBottom");
        sizePolicy2.setHeightForWidth(radioButtonRedLeftBottom->sizePolicy().hasHeightForWidth());
        radioButtonRedLeftBottom->setSizePolicy(sizePolicy2);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonRedLeftBottom->setPalette(palette6);
        radioButtonRedLeftBottom->setFont(font2);
        radioButtonRedLeftBottom->setStyleSheet(QString::fromUtf8("color:black"));
        radioButtonRedLeftBottom->setChecked(true);

        verticalLayout_4->addWidget(radioButtonRedLeftBottom);

        radioButtonYellowLeftBottom = new QRadioButton(groupBoxLeftBottom);
        buttonGroupLeftBottom->addButton(radioButtonYellowLeftBottom);
        radioButtonYellowLeftBottom->setObjectName("radioButtonYellowLeftBottom");
        sizePolicy2.setHeightForWidth(radioButtonYellowLeftBottom->sizePolicy().hasHeightForWidth());
        radioButtonYellowLeftBottom->setSizePolicy(sizePolicy2);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonYellowLeftBottom->setPalette(palette7);
        radioButtonYellowLeftBottom->setFont(font2);
        radioButtonYellowLeftBottom->setStyleSheet(QString::fromUtf8("color:black"));

        verticalLayout_4->addWidget(radioButtonYellowLeftBottom);

        radioButtonGreenLeftBottom = new QRadioButton(groupBoxLeftBottom);
        buttonGroupLeftBottom->addButton(radioButtonGreenLeftBottom);
        radioButtonGreenLeftBottom->setObjectName("radioButtonGreenLeftBottom");
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonGreenLeftBottom->setPalette(palette8);
        radioButtonGreenLeftBottom->setFont(font2);
        radioButtonGreenLeftBottom->setStyleSheet(QString::fromUtf8("color:black"));

        verticalLayout_4->addWidget(radioButtonGreenLeftBottom);


        gridLayout->addWidget(groupBoxLeftBottom, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 2, 2, 1);

        groupBoxRightTop = new QGroupBox(tabManual);
        groupBoxRightTop->setObjectName("groupBoxRightTop");
        sizePolicy1.setHeightForWidth(groupBoxRightTop->sizePolicy().hasHeightForWidth());
        groupBoxRightTop->setSizePolicy(sizePolicy1);
        groupBoxRightTop->setMaximumSize(QSize(130, 16777215));
        groupBoxRightTop->setBaseSize(QSize(130, 130));
        groupBoxRightTop->setFont(font1);
        groupBoxRightTop->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_3 = new QVBoxLayout(groupBoxRightTop);
        verticalLayout_3->setObjectName("verticalLayout_3");
        radioButtonRedRightTop = new QRadioButton(groupBoxRightTop);
        buttonGroupRightTop = new QButtonGroup(MainWindow);
        buttonGroupRightTop->setObjectName("buttonGroupRightTop");
        buttonGroupRightTop->addButton(radioButtonRedRightTop);
        radioButtonRedRightTop->setObjectName("radioButtonRedRightTop");
        sizePolicy2.setHeightForWidth(radioButtonRedRightTop->sizePolicy().hasHeightForWidth());
        radioButtonRedRightTop->setSizePolicy(sizePolicy2);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonRedRightTop->setPalette(palette9);
        radioButtonRedRightTop->setFont(font2);
        radioButtonRedRightTop->setStyleSheet(QString::fromUtf8("color:black"));
        radioButtonRedRightTop->setChecked(true);

        verticalLayout_3->addWidget(radioButtonRedRightTop);

        radioButtonYellowRightTop = new QRadioButton(groupBoxRightTop);
        buttonGroupRightTop->addButton(radioButtonYellowRightTop);
        radioButtonYellowRightTop->setObjectName("radioButtonYellowRightTop");
        sizePolicy2.setHeightForWidth(radioButtonYellowRightTop->sizePolicy().hasHeightForWidth());
        radioButtonYellowRightTop->setSizePolicy(sizePolicy2);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush4);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonYellowRightTop->setPalette(palette10);
        radioButtonYellowRightTop->setFont(font2);
        radioButtonYellowRightTop->setStyleSheet(QString::fromUtf8("color:black"));

        verticalLayout_3->addWidget(radioButtonYellowRightTop);

        radioButtonGreenRightTop = new QRadioButton(groupBoxRightTop);
        buttonGroupRightTop->addButton(radioButtonGreenRightTop);
        radioButtonGreenRightTop->setObjectName("radioButtonGreenRightTop");
        sizePolicy2.setHeightForWidth(radioButtonGreenRightTop->sizePolicy().hasHeightForWidth());
        radioButtonGreenRightTop->setSizePolicy(sizePolicy2);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush5);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        radioButtonGreenRightTop->setPalette(palette11);
        radioButtonGreenRightTop->setFont(font2);
        radioButtonGreenRightTop->setStyleSheet(QString::fromUtf8("color:black"));

        verticalLayout_3->addWidget(radioButtonGreenRightTop);


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

        tabWidgetModes->setCurrentIndex(2);


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
        groupBoxLeftTop->setTitle(QCoreApplication::translate("MainWindow", "\320\233\320\265\320\262\321\213\320\271  \321\201\320\262\320\265\321\202\320\276\321\204\320\276\321\200", nullptr));
        radioButtonRedLeftTop->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButtonYellowLeftTop->setText(QCoreApplication::translate("MainWindow", "\320\226\321\221\320\273\321\202\321\213\320\271", nullptr));
        radioButtonGreenLeftTop->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
        groupBoxRightBottom->setTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\321\213\320\271 \321\201\320\262\320\265\321\202\320\276\321\204\320\276\321\200", nullptr));
        radioButtonRedRightBottom->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButtonYellowRightBottom->setText(QCoreApplication::translate("MainWindow", "\320\226\321\221\320\273\321\202\321\213\320\271", nullptr));
        radioButtonGreenRightBottom->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
        groupBoxLeftBottom->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\270\320\266\320\275\320\270\320\271 \321\201\320\262\320\265\321\202\320\276\321\204\320\276\321\200", nullptr));
        radioButtonRedLeftBottom->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButtonYellowLeftBottom->setText(QCoreApplication::translate("MainWindow", "\320\226\321\221\320\273\321\202\321\213\320\271", nullptr));
        radioButtonGreenLeftBottom->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
        groupBoxRightTop->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\205\320\275\320\270\320\271 \321\201\320\262\320\265\321\202\320\276\321\204\320\276\321\200", nullptr));
        radioButtonRedRightTop->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        radioButtonYellowRightTop->setText(QCoreApplication::translate("MainWindow", "\320\226\321\221\320\273\321\202\321\213\320\271", nullptr));
        radioButtonGreenRightTop->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\321\221\320\275\321\213\320\271", nullptr));
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
