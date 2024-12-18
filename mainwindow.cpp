#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QIntValidator>

#include "p2p_structs.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //сигналы-слоты от элементов ГУИ
    {
        connect(ui->pushButtonPower, &QPushButton::clicked,
                this, &MainWindow::onPowerClicked);
        connect(ui->pushButtonSend, &QPushButton::clicked,
                this, &MainWindow::onSendClicked);
        connect(ui->tabWidgetModes, &QTabWidget::currentChanged,
                this, &MainWindow::onModesClicked);
        connect(ui->buttonGroupLeftBottom, SIGNAL(buttonClicked(QAbstractButton *)),
                this, SLOT(onLeftBottomClicked()));
        connect(ui->buttonGroupLeftTop, SIGNAL(buttonClicked(QAbstractButton *)),
                this, SLOT(onLeftTopClicked()));
        connect(ui->buttonGroupLeftBottom, SIGNAL(buttonClicked(QAbstractButton *)),
                this, SLOT(onLeftBottomClicked()));
        connect(ui->buttonGroupRightBottom, SIGNAL(buttonClicked(QAbstractButton *)),
                this, SLOT(onRightBottomClicked()));
        connect(ui->buttonGroupRightTop, SIGNAL(buttonClicked(QAbstractButton *)),
                this, SLOT(onRightTopClicked()));
        auto lineEdits = findChildren<QLineEdit *>();
        foreach(auto wgt, lineEdits)
        {
            connect(wgt, &QLineEdit::textChanged,
                    this, &MainWindow::checkButtonSendStateAuto);
        }
    }

    onModesClicked();
    enableControls(false);
    //устанавливаем валидаторы, чтоюы
    //можно ыбло вводить только целые числа
    //в диапозоне [0, 2147483647]
    auto lineEdits = findChildren<QLineEdit *>();
    foreach(auto wgt, lineEdits)
    {
        auto validator = new QIntValidator(this);
        validator->setBottom(0);
        wgt->setValidator(validator);
    }


    //инициализация класса связи
    //по протоколу Точка-Точка
    connector = new Tp2pConnector(this);

    connect(connector, &Tp2pConnector::handshaked,
            this, &MainWindow::onHandshaked);
    connector->handshake();

    ui->statusbar->showMessage("Нет связи с перекрестком");
}

MainWindow::~MainWindow()
{
    delete ui;
}


//от коннектора пришёл ответ
//что связь установлена
void MainWindow::onHandshaked()
{
    ui->statusbar->showMessage("Связь установлена");
}

//В режиме автоматического управления
//проверяем должна ли быть кнопка
//Отправить доступна пользователю или нет
void MainWindow::checkButtonSendStateAuto()
{
    bool enabled = true;
    auto lineEdits = findChildren<QLineEdit *>();
    foreach(auto wgt, lineEdits)
    {
        if (wgt->text().isEmpty())
        {
            enabled = false;
        }
    }
    ui->pushButtonSend->setEnabled(enabled);
}

//обработчик нажатия на какой-то
//радио баттон из групбокса "Левый верхний светофор"
void MainWindow::onLeftTopClicked()
{
    if (ui->radioButtonGreenLeftTop->isChecked())
    {
        ui->radioButtonGreenRightBottom->setChecked(true);
        ui->radioButtonRedLeftBottom->setChecked(true);
        ui->radioButtonRedRightTop->setChecked(true);
    }
    else if (ui->radioButtonRedLeftTop->isChecked())
    {
        ui->radioButtonRedRightBottom->setChecked(true);
        ui->radioButtonGreenLeftBottom->setChecked(true);
        ui->radioButtonGreenRightTop->setChecked(true);
    }
    else if (ui->radioButtonYellowLeftTop->isChecked())
    {
        ui->radioButtonYellowRightBottom->setChecked(true);
        ui->radioButtonYellowLeftBottom->setChecked(true);
        ui->radioButtonYellowRightTop->setChecked(true);
    }
}

//обработчик нажатия на какой-то
//радио баттон из групбокса "Левый нижний светофор"
void MainWindow::onLeftBottomClicked()
{
    if (ui->radioButtonGreenLeftBottom->isChecked())
    {
        ui->radioButtonGreenRightTop->setChecked(true);
        ui->radioButtonRedLeftTop->setChecked(true);
        ui->radioButtonRedRightBottom->setChecked(true);
    }
    else if (ui->radioButtonRedLeftBottom->isChecked())
    {
        ui->radioButtonRedRightTop->setChecked(true);
        ui->radioButtonGreenLeftTop->setChecked(true);
        ui->radioButtonGreenRightBottom->setChecked(true);
    }
    else if (ui->radioButtonYellowLeftBottom->isChecked())
    {
        ui->radioButtonYellowRightTop->setChecked(true);
        ui->radioButtonYellowLeftTop->setChecked(true);
        ui->radioButtonYellowRightBottom->setChecked(true);
    }
}

//обработчик нажатия на какой-то
//радио баттон из групбокса "Правый нижний светофор"
void MainWindow::onRightBottomClicked()
{
    if (ui->radioButtonGreenRightBottom->isChecked())
    {
        ui->radioButtonGreenLeftTop->setChecked(true);
        ui->radioButtonRedLeftBottom->setChecked(true);
        ui->radioButtonRedRightTop->setChecked(true);
    }
    else if (ui->radioButtonRedRightBottom->isChecked())
    {
        ui->radioButtonRedLeftTop->setChecked(true);
        ui->radioButtonGreenLeftBottom->setChecked(true);
        ui->radioButtonGreenRightTop->setChecked(true);
    }
    else if (ui->radioButtonYellowRightBottom->isChecked())
    {
        ui->radioButtonYellowLeftTop->setChecked(true);
        ui->radioButtonYellowLeftBottom->setChecked(true);
        ui->radioButtonYellowRightTop->setChecked(true);
    }
}

//обработчик нажатия на какой-то
//радио баттон из групбокса "Правый верхний светофор"
void MainWindow::onRightTopClicked()
{
    if (ui->radioButtonGreenRightTop->isChecked())
    {
        ui->radioButtonGreenLeftBottom->setChecked(true);
        ui->radioButtonRedLeftTop->setChecked(true);
        ui->radioButtonRedRightBottom->setChecked(true);
    }
    else if (ui->radioButtonRedRightTop->isChecked())
    {
        ui->radioButtonRedLeftBottom->setChecked(true);
        ui->radioButtonGreenLeftTop->setChecked(true);
        ui->radioButtonGreenRightBottom->setChecked(true);
    }
    else if (ui->radioButtonYellowRightTop->isChecked())
    {
        ui->radioButtonYellowLeftBottom->setChecked(true);
        ui->radioButtonYellowLeftTop->setChecked(true);
        ui->radioButtonYellowRightBottom->setChecked(true);
    }
}

//enable==true все контролы доступны
//enable==false все контролы недоступны кроме кнопки Включить
void MainWindow::enableControls (bool enable)
{
    auto buttons = findChildren<QAbstractButton *>();
    foreach(auto wgt, buttons)
    {
        wgt->setEnabled(enable);
    }
    auto lineEdits = findChildren<QLineEdit *>();
    foreach(auto wgt, lineEdits)
    {
        wgt->setEnabled(enable);
    }

    ui->pushButtonPower->setEnabled(true);
}

//обработчик нажатия на кнопку Включить
void MainWindow::onPowerClicked()
{
    enableControls(ui->pushButtonPower->isChecked());

    MessagePower message;
    message.isOn = ui->pushButtonPower->isChecked();
    QByteArray array;
    array.append(reinterpret_cast<char *>( &message ), sizeof( message ));
    connector->send(array);
}

//обработчик нажатия на какой-то
//радио баттон из групбокса "Выбор режима"
void MainWindow::onModesClicked()
{
    bool needHideGroups = (ui->tabWidgetModes->currentWidget() != ui->tabManual) ;
    ui->groupBoxLeftBottom->setHidden(needHideGroups);
    ui->groupBoxLeftTop->setHidden(needHideGroups);
    ui->groupBoxRightBottom->setHidden(needHideGroups);
    ui->groupBoxRightTop->setHidden(needHideGroups);

    bool needHideEdits = (ui->tabWidgetModes->currentWidget() != ui->tabAuto);
    ui->wgtTimeGreen->setHidden(needHideEdits);
    ui->wgtTimeRed->setHidden(needHideEdits);
    ui->wgtTimeYellow->setHidden(needHideEdits);

    if (ui->tabWidgetModes->currentWidget() == ui->tabAuto)
    {
        checkButtonSendStateAuto();
    }
    else
    {
        ui->pushButtonSend->setEnabled(true);
    }
}

//обработчик нажатия на кнопку Отправить
void MainWindow::onSendClicked()
{
    //отправляем сообщения Перекрёстку
    if (ui->tabWidgetModes->currentWidget() == ui->tabManual)
    {
        MessageManual message;

        if (ui->radioButtonGreenLeftBottom->isChecked())
        {
            message.color_bottom = defGreen;
        }
        else if (ui->radioButtonRedLeftBottom->isChecked())
        {
            message.color_bottom = defRed;
        }
        else if (ui->radioButtonYellowLeftBottom->isChecked())
        {
            message.color_bottom = defYellow;
        }

        if (ui->radioButtonGreenLeftTop->isChecked())
        {
            message. color_left= defGreen;
        }
        else if (ui->radioButtonRedLeftTop->isChecked())
        {
            message.color_left = defRed;
        }
        else if (ui->radioButtonYellowLeftTop->isChecked())
        {
            message.color_left = defYellow;
        }

        if (ui->radioButtonGreenRightBottom->isChecked())
        {
            message.color_right= defGreen;
        }
        else if (ui->radioButtonRedRightBottom->isChecked())
        {
            message.color_right = defRed;
        }
        else if (ui->radioButtonYellowRightBottom->isChecked())
        {
            message.color_right = defYellow;
        }

        if (ui->radioButtonGreenRightTop->isChecked())
        {
            message.color_top = defGreen;
        }
        else if (ui->radioButtonRedRightTop->isChecked())
        {
            message.color_right = defRed;
        }
        else if (ui->radioButtonYellowRightTop->isChecked())
        {
            message.color_right = defYellow;
        }

        QByteArray array;
        array.append(reinterpret_cast<char *>( &message ), sizeof( message ));
        connector->send(array);
    }
    else if (ui->tabWidgetModes->currentWidget() == ui->tabStandAlone)
    {
        MessageStandAlone message;
        QByteArray array;
        array.append(reinterpret_cast<char *>( &message ), sizeof( message ));
        connector->send(array);
    }
    else if (ui->tabWidgetModes->currentWidget() == ui->tabAuto)
    {
        MessageAuto message;
        message.time_green = ui->lineEditTimeGreen->text().toInt();
        message.time_red = ui->lineEditTimeRed->text().toInt();
        message.time_yellow = ui->lineEditTimeYellow->text().toInt();

        QByteArray array;
        array.append(reinterpret_cast<char *>( &message ), sizeof( message ));
        connector->send(array);
    }
}

