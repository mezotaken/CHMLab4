#include "model.h"


double modeltest1::k(double x)
{
        return 1.0;
}

double modeltest1::q(double x)
{
        return 0.0;
}

double modeltest1::f(double x)
{
        return -2.0;
}


void modeltest1::CorrectSol(int n, QVector<double>& U)
{
    double h = 1.0/n;
    double x = 0;
    for(int i = 0;i<n;i++)
    {
        U.push_back(u(x));
        x+=h;
    }
    U.push_back(0);
}

void model::calculate(int n, QVector<double>& X, QVector<double>& V)
{
    double h = 1.0/n;
    double x = 0;
    for(int i = 0;i<n;i++)
    {
        X.push_back(x);
        x+=h;
    }
    X.push_back(1);


    //tridiagonal(...,V);
}

void model::tridiagonal(QVector<double>& A,QVector<double>& B,QVector<double>& C,double k1,double k2,double m1,double m2,QVector<double>& fi, QVector<double>& result)
{
    int n = A.size()+2;
    result.resize(n);
    QVector<double> a,b;
    a.push_back(k1); b.push_back(m1);
    for(int i = 1;i<n+1;i++)
    {
        //a.push_back();
        //b.push_back();
    }
}
