#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "arithmeticoperation.h"

bool add = false;
bool subtract = false;
bool divide = false;
bool multiply = false;

double left = 0.0;
double right = 0.0;

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

void MainWindow::updateLeftHandField(QString s)
{
        ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + s);
}

void MainWindow::updateRightHandField(QString s)
{
    ui->lineEdit_RightHand->setText(ui->lineEdit_RightHand->text() + s);
}

void MainWindow::on_btnZero_clicked()
{
    QString s = ui->btnZero->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnOne_clicked()
{
    QString s = ui->btnOne->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnTwo_clicked()
{
    QString s = ui->btnTwo->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnThree_clicked()
{
    QString s = ui->btnThree->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnFour_clicked()
{
    QString s = ui->btnFour->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnFive_clicked()
{
    QString s = ui->btnFive->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnSix_clicked()
{
    QString s = ui->btnSix->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnSeven_clicked()
{
    QString s = ui->btnSeven->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnEight_clicked()
{
    QString s = ui->btnEight->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnNine_clicked()
{
    QString s = ui->btnNine->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
}

void MainWindow::on_btnSeparator_clicked()
{
    QString s = ui->btnSeparator->text();
    add ? updateRightHandField(s) : updateLeftHandField(s);
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

void MainWindow::on_btnCE_clicked()
{
    left = 0.0;
    right = 0.0;

    ui->lineEdit->clear();
    ui->lineEdit_LeftHand->clear();
    ui->lineEdit_RightHand->clear();
}

void MainWindow::on_btnResult_clicked()
{
//    ui->lineEdit_LeftHand->setText(ui->lineEdit_LeftHand->text() + ui->btnResult->text());
}
