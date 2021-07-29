#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

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
    void updateLeftHandText(QString);
    void updateRightHandText(QString);
    void updateText(QString);
    void resetButtonColor();
    void resetButtonColor(QPushButton *);

private slots:
    void on_btnSeparator_clicked();
    void on_btnZero_clicked();
    void on_btnOne_clicked();
    void on_btnTwo_clicked();
    void on_btnThree_clicked();
    void on_btnFour_clicked();
    void on_btnFive_clicked();
    void on_btnSix_clicked();
    void on_btnSeven_clicked();
    void on_btnEight_clicked();
    void on_btnNine_clicked();

    void on_btnAdd_clicked();
    void on_btnSubtract_clicked();
    void on_btnDivide_clicked();
    void on_btnMultiply_clicked();
    void on_btnResult_clicked();

    void on_btnClear_clicked();
    void on_btnCE_clicked();
};
#endif // MAINWINDOW_H
