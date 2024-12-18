#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "p2pconnector.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private:
    Ui::MainWindow *ui;

    //enable==true все контролы доступны
    //enable==false все контролы недоступны кроме кнопки Включить
    void enableControls (bool enable);

    //класс связи по протоколу "точка-точка"
    Tp2pConnector * connector {nullptr};

private slots:
    //обработчик нажатия на кнопку Включить
    void onPowerClicked();

    //обработчик нажатия на кнопку Отправить
    void onSendClicked();

    //обработчик нажатия на какой-то
    //радио баттон из групбокса "Выбор режима"
    void onModesClicked();

    //обработчик нажатия на какой-то
    //радио баттон из групбокса "Левый верхний светофор"
    void onLeftTopClicked();

    //обработчик нажатия на какой-то
    //радио баттон из групбокса "Левый нижний светофор"
    void onLeftBottomClicked();

    //обработчик нажатия на какой-то
    //радио баттон из групбокса "Правый верхний светофор"
    void onRightTopClicked();

    //обработчик нажатия на какой-то
    //радио баттон из групбокса "Правый нижний светофор"
    void onRightBottomClicked();

    //В режиме автоматического управления
    //проверяем должна ли быть кнопка
    //Отправить доступна пользователю или нет
    void checkButtonSendStateAuto();

    //от коннектора пришёл ответ
    //что связь установлена
    void onHandshaked();

};
#endif // MAINWINDOW_H
