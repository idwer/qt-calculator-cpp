#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "arithmeticoperation.h"

bool add = false;
bool subtract = false;
bool divide = false;
bool multiply = false;

double left = 0.0;
double right = 0.0;

const QColor GREEN = QColor(Qt::green);
const QString STYLE_BGCOLOR_STRING = QString("background-color: %1").arg(GREEN.name());

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
    left = ui->lineEdit_LeftHand->text().toDouble();

    ui->btnAdd->setStyleSheet(STYLE_BGCOLOR_STRING);

    add = true;
}

void MainWindow::on_btnSubtract_clicked()
{
    left = ui->lineEdit_LeftHand->text().toDouble();

    ui->btnSubtract->setStyleSheet(STYLE_BGCOLOR_STRING);

    subtract = true;
}

void MainWindow::on_btnDivide_clicked()
{
    left = ui->lineEdit_LeftHand->text().toDouble();

    ui->btnDivide->setStyleSheet(STYLE_BGCOLOR_STRING);

    divide = true;
}

void MainWindow::on_btnMultiply_clicked()
{
    left = ui->lineEdit_LeftHand->text().toDouble();

    ui->btnMultiply->setStyleSheet(STYLE_BGCOLOR_STRING);

    multiply = true;
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
    QColor color = ui->btnResult->palette().color(QWidget::backgroundRole());

    if (color.isValid()) {
        QString s = QString("background-color: %1").arg(color.name());
        ui->btnAdd->setStyleSheet(s);
        ui->btnDivide->setStyleSheet(s);
        ui->btnSubtract->setStyleSheet(s);
        ui->btnMultiply->setStyleSheet(s);
    }

    /* reset state */
    add = false;
    subtract = false;
    divide = false;
    multiply = false;
}
