#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include "mydialog.h"
#include <QColorDialog>
#include <QDebug>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::ShowChildDialog);
    qDebug("%d", ui->lcdNumber->value());

    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit->setDisplayFormat("yyyy-MM-dd HH:mm:ss");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ShowChildDialog()
{
    //MyDialog* dlg = new MyDialog(this);
    MyDialog dlg;
    if (dlg.exec() == QDialog::Accepted)
    {
        qDebug("dlg closed!");
    }

    //delete dlg;
}

void MainWindow::on_pushButton_clicked()
{
    //QColor color = QColorDialog::getColor(Qt::red, this, "sdf");
    //qDebug() << "color: " << color;
}

void MainWindow::on_fileButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "file dialog", "D:", "format(*png,*jpg)");
    qDebug("fileName,%s", fileName.data());
}
