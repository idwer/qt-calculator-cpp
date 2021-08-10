#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "include/arithmeticoperation.h"

/* Provide a way of storing button state. */
bool add = false;
bool subtract = false;
bool divide = false;
bool multiply = false;

double leftHandValue = 0.0;
double rightHandValue = 0.0;

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

/*!
 * \brief MainWindow::updateLeftHandText
 * \param text is the number, in QString form, that will be appended to existing text.
 */
void MainWindow::updateLeftHandText(QString text)
{
        ui->leftHandText->setText(ui->leftHandText->text().append(text));
}

/*!
 * \brief MainWindow::updateRightHandText
 * \param text is the number, in QString form, that will be appended to existing text.
 */
void MainWindow::updateRightHandText(QString text)
{
    ui->rightHandText->setText(ui->rightHandText->text().append(text));
}

/*!
 * \brief MainWindow::updateText
 * \param text is the number, in QString form, that will be appended to existing text.
 */
void MainWindow::updateText(QString text)
{
    /* When the user has decided to perform an action, update text in either the left or right box. */
    if (add || subtract || divide || multiply) {
        updateRightHandText(text);
    } else {
        updateLeftHandText(text);
    }
}

/*!
 * \brief MainWindow::resetButtonColor
 * \param button wil have its background color changed.
 */
void MainWindow::resetButtonColor(QPushButton *button)
{
    button->setStyleSheet(STR_BGCOLOR_DEFAULT);
}

/*!
 * \brief MainWindow::resetButtonColor
 */
void MainWindow::resetButtonColor()
{
    if (subtract || divide || multiply) {
        resetButtonColor(ui->btnSubtract);
        resetButtonColor(ui->btnDivide);
        resetButtonColor(ui->btnMultiply);
    }

    if (add || subtract || multiply) {
        resetButtonColor(ui->btnAdd);
        resetButtonColor(ui->btnSubtract);
        resetButtonColor(ui->btnMultiply);
    }

    if (add || divide || multiply) {
        resetButtonColor(ui->btnAdd);
        resetButtonColor(ui->btnDivide);
        resetButtonColor(ui->btnMultiply);
    }

    if (add || subtract || divide) {
        resetButtonColor(ui->btnAdd);
        resetButtonColor(ui->btnSubtract);
        resetButtonColor(ui->btnDivide);
    }
}

/*!
 * \brief MainWindow::resetState
 */
void MainWindow::resetState()
{
    add = false;
    subtract = false;
    divide = false;
    multiply = false;
}

/*!
 * \brief MainWindow::resetGuiState
 */
void MainWindow::resetGuiState()
{
    /* Change other buttons' state. */
    ui->btnAdd->setEnabled(true);
    ui->btnSubtract->setEnabled(true);
    ui->btnDivide->setEnabled(true);
    ui->btnMultiply->setEnabled(true);

    ui->btnAdd->setStyleSheet(STR_BGCOLOR_DEFAULT);
    ui->btnDivide->setStyleSheet(STR_BGCOLOR_DEFAULT);
    ui->btnSubtract->setStyleSheet(STR_BGCOLOR_DEFAULT);
    ui->btnMultiply->setStyleSheet(STR_BGCOLOR_DEFAULT);
}

/*!
 * \brief MainWindow::on_btnZero_clicked
 */
void MainWindow::on_btnZero_clicked()
{
    updateText(ui->btnZero->text());
}

/*!
 * \brief MainWindow::on_btnOne_clicked
 */
void MainWindow::on_btnOne_clicked()
{
    updateText(ui->btnOne->text());
}

/*!
 * \brief MainWindow::on_btnTwo_clicked
 */
void MainWindow::on_btnTwo_clicked()
{
    updateText(ui->btnTwo->text());
}

/*!
 * \brief MainWindow::on_btnThree_clicked
 */
void MainWindow::on_btnThree_clicked()
{
    updateText(ui->btnThree->text());
}

/*!
 * \brief MainWindow::on_btnFour_clicked
 */
void MainWindow::on_btnFour_clicked()
{
    updateText(ui->btnFour->text());
}

/*!
 * \brief MainWindow::on_btnFive_clicked
 */
void MainWindow::on_btnFive_clicked()
{
    updateText(ui->btnFive->text());
}

/*!
 * \brief MainWindow::on_btnSix_clicked
 */
void MainWindow::on_btnSix_clicked()
{
    updateText(ui->btnSix->text());
}

/*!
 * \brief MainWindow::on_btnSeven_clicked
 */
void MainWindow::on_btnSeven_clicked()
{
    updateText(ui->btnSeven->text());
}

/*!
 * \brief MainWindow::on_btnEight_clicked
 */
void MainWindow::on_btnEight_clicked()
{
    updateText(ui->btnEight->text());
}

/*!
 * \brief MainWindow::on_btnNine_clicked
 */
void MainWindow::on_btnNine_clicked()
{
    updateText(ui->btnNine->text());
}

/*!
 * \brief MainWindow::on_btnSeparator_clicked
 */
void MainWindow::on_btnSeparator_clicked()
{
    updateText(ui->btnSeparator->text());
}

/*!
 * \brief MainWindow::on_btnAdd_clicked
 */
void MainWindow::on_btnAdd_clicked()
{
    /* Don't respond on button clicks until a number is entered. */
    if (ui->leftHandText->text().isEmpty())
        return;

    /* Toggle the background color of other buttons. */
    resetButtonColor();

    /* Change other buttons' state. */
    ui->btnSubtract->setDisabled(true);
    ui->btnDivide->setDisabled(true);
    ui->btnMultiply->setDisabled(true);

    leftHandValue = ui->leftHandText->text().toDouble();

    ui->btnAdd->setStyleSheet(STR_BGCOLOR_GREEN);

    add = true;
}

/*!
 * \brief MainWindow::on_btnSubtract_clicked
 */
void MainWindow::on_btnSubtract_clicked()
{
    /* Don't respond on button clicks until a number is entered. */
    if (ui->leftHandText->text().isEmpty())
        return;

    /* Toggle the background color of other buttons. */
    resetButtonColor();

    /* Change other buttons' state. */
    ui->btnAdd->setDisabled(true);
    ui->btnDivide->setDisabled(true);
    ui->btnMultiply->setDisabled(true);

    leftHandValue = ui->leftHandText->text().toDouble();

    ui->btnSubtract->setStyleSheet(STR_BGCOLOR_GREEN);

    subtract = true;
}

/*!
 * \brief MainWindow::on_btnDivide_clicked
 */
void MainWindow::on_btnDivide_clicked()
{
    /* Don't respond on button clicks until a number is entered. */
    if (ui->leftHandText->text().isEmpty())
        return;

    /* Toggle the background color of other buttons. */
    resetButtonColor();

    /* Change other buttons' state. */
    ui->btnAdd->setDisabled(true);
    ui->btnSubtract->setDisabled(true);
    ui->btnMultiply->setDisabled(true);

    leftHandValue = ui->leftHandText->text().toDouble();

    ui->btnDivide->setStyleSheet(STR_BGCOLOR_GREEN);

    divide = true;
}

/*!
 * \brief MainWindow::on_btnMultiply_clicked
 */
void MainWindow::on_btnMultiply_clicked()
{
    /* Don't respond on button clicks until a number is entered. */
    if (ui->leftHandText->text().isEmpty())
        return;

    /* Toggle the background color of other buttons. */
    resetButtonColor();

    /* Change other buttons' state. */
    ui->btnAdd->setDisabled(true);
    ui->btnSubtract->setDisabled(true);
    ui->btnDivide->setDisabled(true);

    leftHandValue = ui->leftHandText->text().toDouble();

    ui->btnMultiply->setStyleSheet(STR_BGCOLOR_GREEN);

    multiply = true;
}

/*!
 * \brief MainWindow::on_btnClear_clicked
 */
void MainWindow::on_btnClear_clicked()
{
    if (!add && !subtract && !divide && !multiply) {
        ui->leftHandText->clear();
        ui->rightHandText->clear();
        return;
    }

    if (add || subtract || divide || multiply) {
        ui->rightHandText->clear();
    } else {
        ui->leftHandText->clear();
    }
}

/*!
 * \brief MainWindow::on_btnCE_clicked
 */
void MainWindow::on_btnCE_clicked()
{
    leftHandValue = 0.0;
    rightHandValue = 0.0;

    ui->resultText->clear();
    ui->leftHandText->clear();
    ui->rightHandText->clear();

    resetState();
    resetGuiState();
}

/*!
 * \brief MainWindow::on_btnResult_clicked
 */
void MainWindow::on_btnResult_clicked()
{
    rightHandValue = ui->rightHandText->text().toDouble();

    if (add)
        ui->resultText->setText(QString::number(ArithmeticOperation::Add(leftHandValue, rightHandValue)));

    if (subtract)
        ui->resultText->setText(QString::number(ArithmeticOperation::Subtract(leftHandValue, rightHandValue)));

    if (divide)
        ui->resultText->setText(QString::number(ArithmeticOperation::Divide(leftHandValue, rightHandValue)));

    if (multiply)
        ui->resultText->setText(QString::number(ArithmeticOperation::Multiply(leftHandValue, rightHandValue)));

    resetState();
    resetGuiState();
}
