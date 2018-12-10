#include "mainwindow.h"
#include "model.h"
#include "ui_mainwindow.h"


static modeltest1 mdtest1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("LabWork4");

    ui->table0->setColumnCount(5);
    ui->table0->setHorizontalHeaderLabels(QStringList()<< "№ узла"<<"x_i" <<"u(x_i)"<<"v(x_i)"<<"u(x_i)-v(x_i)");
    ui->table0->verticalHeader()->setVisible(false);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start0_clicked()
{
    QTableWidgetItem *tbl;
    QVector<double> X;
    QVector<double> V;
    QVector<double> U;
    int n = ui->n0fd->text().toInt();
    mdtest1.calculate(n,X,V);
    mdtest1.CorrectSol(n,U);
    ui->table0->setRowCount(n+1);
    for(int i = 0;i<n+1;i++)
    {
        tbl = new QTableWidgetItem(QString::number(i));
        ui->table0->setItem(i,0,tbl);
        tbl = new QTableWidgetItem(QString::number(X[i]));
        ui->table0->setItem(i,1,tbl);
        tbl = new QTableWidgetItem(QString::number(U[i]));
        ui->table0->setItem(i,2,tbl);
    }
}


void MainWindow::on_clear0_clicked()
{
    ui->table0->clear();
    ui->table0->setHorizontalHeaderLabels(QStringList()<< "№ узла"<<"x_i" <<"u(x_i)"<<"v(x_i)"<<"u(x_i)-v(x_i)");
}
