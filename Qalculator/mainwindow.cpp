#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnZero_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnZero->text());
}

void MainWindow::on_btnOne_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnOne->text());
}

void MainWindow::on_btnTwo_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnTwo->text());
}

void MainWindow::on_btnThree_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnThree->text());
}

void MainWindow::on_btnFour_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnFour->text());
}

void MainWindow::on_btnFive_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnFive->text());
}

void MainWindow::on_btnSix_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnSix->text());
}

void MainWindow::on_btnSeven_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnSeven->text());
}

void MainWindow::on_btnEight_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnEight->text());
}

void MainWindow::on_btnNine_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnNine->text());
}

void MainWindow::on_btnSeparator_clicked()
{
    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnSeparator->text());
}

void MainWindow::on_btnAdd_clicked()
{
    int64_t left = ui->lineEdit_LeftHand->text().toDouble();
    int64_t right = ui->lineEdit_RightHand->text().toDouble();

    ui->lineEdit->setText(QString::number(ArithmeticOperation::Add(left, right)));
}

void MainWindow::on_btnSubtract_clicked()
{
    int64_t left = ui->lineEdit_LeftHand->text().toDouble();
    int64_t right = ui->lineEdit_RightHand->text().toDouble();

    ui->lineEdit->setText(QString::number(ArithmeticOperation::Subtract(left, right)));
}

void MainWindow::on_btnDivide_clicked()
{
    int64_t left = ui->lineEdit_LeftHand->text().toDouble();
    int64_t right = ui->lineEdit_RightHand->text().toDouble();

    ui->lineEdit->setText(QString::number(ArithmeticOperation::Divide(left, right)));
}

void MainWindow::on_btnMultiply_clicked()
{
    int64_t left = ui->lineEdit_LeftHand->text().toDouble();
    int64_t right = ui->lineEdit_RightHand->text().toDouble();

    ui->lineEdit->setText(QString::number(ArithmeticOperation::Multiply(left, right)));
}

void MainWindow::on_btnResult_clicked()
{
//    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnResult->text());
}
