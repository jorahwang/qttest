#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow1;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void ShowChildDialog();

private slots:
    void on_pushButton_clicked();

    void on_fileButton_clicked();

private:
    Ui::MainWindow1 *ui;
};

#endif // MAINWINDOW_H
