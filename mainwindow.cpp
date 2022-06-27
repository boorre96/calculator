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
    if(buttonPressedTracker.buttonLastPressedIsEmpty() || buttonPressedTracker.getButtonLastPressed() != ui->AdditionButton->text())
        buttonPressedTracker.buttonLastPressed(ui->AdditionButton->text());


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
    if(buttonPressedTracker.buttonLastPressedIsEmpty()|| buttonPressedTracker.getButtonLastPressed() != ui->SubtractionButton->text())
        buttonPressedTracker.buttonLastPressed(ui->SubtractionButton->text());

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
    if(buttonPressedTracker.buttonLastPressedIsEmpty()|| buttonPressedTracker.getButtonLastPressed() != ui->MultiplikationButton->text())
        buttonPressedTracker.buttonLastPressed(ui->DivisionButton->text());

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
    if(buttonPressedTracker.buttonLastPressedIsEmpty()|| buttonPressedTracker.getButtonLastPressed() != ui->DivisionButton->text())
        buttonPressedTracker.buttonLastPressed(ui->MultiplikationButton->text());

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


void MainWindow::on_ButtonClear_clicked()
{
    numberOnDisplay.clear();
    ui->DisplayNumber->setText("0");
    oldNumber = 0;
}


void MainWindow::on_ButtonEqual_clicked()
{
    if(buttonPressedTracker.getButtonLastPressed() == "")
        return;
    else if(buttonPressedTracker.getButtonLastPressed() == "+")
        MainWindow::on_AdditionButton_clicked();
    else if(buttonPressedTracker.getButtonLastPressed() == "-")
        MainWindow::on_SubtractionButton_clicked();
    else if(buttonPressedTracker.getButtonLastPressed() == "*")
        MainWindow::on_MultiplikationButton_clicked();
    else if(buttonPressedTracker.getButtonLastPressed() == "/")
        MainWindow::on_DivisionButton_clicked();
    buttonPressedTracker.clearButtonPressed();

}

