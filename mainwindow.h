#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "calculations.h"
#include "buttonpressedtracker.h"

#include <QMainWindow>
#include <iostream>
#include <cmath>
#include <QMessageBox>
#include <QString>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Calculations calculate;
    ButtonPressedTracker buttonPressedTracker;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button0_clicked();

    void on_Button8_clicked();

    void on_Button1_clicked();

    void on_Button2_clicked();

    void on_Button3_clicked();

    void on_Button4_clicked();

    void on_Button5_clicked();

    void on_Button6_clicked();

    void on_Button7_clicked();

    void on_Button9_clicked();

    void on_AdditionButton_clicked();

    void on_SubtractionButton_clicked();

    void on_DivisionButton_clicked();

    void on_MultiplikationButton_clicked();

    void on_ButtonClear_clicked();

    void on_ButtonEqual_clicked();

private:
    Ui::MainWindow *ui;
    QString numberOnDisplay = "";
    double oldNumber = 0;
};
#endif // MAINWINDOW_H
