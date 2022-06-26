#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->DisplayNumber->setText("0");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Button0_clicked()
{
    if(ui->DisplayNumber->text() == "0")
        return;
    else{
        numberOnDisplay += ui->Button0->text();
        ui->DisplayNumber->setText(numberOnDisplay);
    }
}

void MainWindow::on_Button1_clicked()
{
    numberOnDisplay += ui->Button1->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}


void MainWindow::on_Button2_clicked()
{
    numberOnDisplay += ui->Button2->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}


void MainWindow::on_Button3_clicked()
{
    numberOnDisplay += ui->Button3->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}


void MainWindow::on_Button4_clicked()
{
    numberOnDisplay += ui->Button4->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}


void MainWindow::on_Button5_clicked()
{
    numberOnDisplay += ui->Button5->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}


void MainWindow::on_Button6_clicked()
{
    numberOnDisplay += ui->Button6->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}


void MainWindow::on_Button7_clicked()
{
    numberOnDisplay += ui->Button7->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}

void MainWindow::on_Button8_clicked()
{
    numberOnDisplay += ui->Button8->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}


void MainWindow::on_Button9_clicked()
{
    numberOnDisplay += ui->Button9->text();
    ui->DisplayNumber->setText(numberOnDisplay);
}


void MainWindow::on_AdditionButton_clicked()
{
    if(oldNumber==0){
        oldNumber = numberOnDisplay.toInt();
        numberOnDisplay.clear();
        ui->DisplayNumber->setText("0");
    }
    else{
        oldNumber = calculate.addition(oldNumber, numberOnDisplay.toInt());
        ui->DisplayNumber->setText(QString::number(oldNumber));
        numberOnDisplay.clear();
    }
}


void MainWindow::on_SubtractionButton_clicked()
{
    if(oldNumber==0){
        oldNumber = numberOnDisplay.toInt();
        numberOnDisplay.clear();
        ui->DisplayNumber->setText("0");
    }
    else{
        oldNumber = calculate.subtraction(oldNumber, numberOnDisplay.toInt());
        ui->DisplayNumber->setText(QString::number(oldNumber));
        numberOnDisplay.clear();
    }
}


void MainWindow::on_DivisionButton_clicked()
{
    if(oldNumber==0){
        oldNumber = numberOnDisplay.toInt();
        numberOnDisplay.clear();
        ui->DisplayNumber->setText("0");
    }
    else if(ui->DisplayNumber->text() == "0"){
        QMessageBox QmessgBox;
        QmessgBox.setText("You can't divide by 0!");
        QmessgBox.exec();
    }
    else{
        oldNumber = calculate.division(oldNumber, numberOnDisplay.toInt());
        ui->DisplayNumber->setText(QString::number(oldNumber));
        numberOnDisplay.clear();
    }
}


void MainWindow::on_MultiplikationButton_clicked()
{
    if(oldNumber==0){
        oldNumber = numberOnDisplay.toInt();
        numberOnDisplay.clear();
        ui->DisplayNumber->setText("0");
    }
    else{
        oldNumber = calculate.multiplikation(oldNumber, numberOnDisplay.toInt());
        ui->DisplayNumber->setText(QString::number(oldNumber));
        numberOnDisplay.clear();
    }
}

