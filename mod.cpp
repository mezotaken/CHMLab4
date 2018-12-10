#include "mod.h"

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

void model::calculate(int n, QVector<double>& X, QVector<double>& V)
{

}
