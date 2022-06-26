#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <cmath>
#include <QString>
#include <string>
#include "calculations.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    Calculations calculate;

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

private:
    Ui::MainWindow *ui;
    QString numberOnDisplay = "";
    int oldNumber = 0;
};
#endif // MAINWINDOW_H
