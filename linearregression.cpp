#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include <iostream>

#include"linearregression.h"

using namespace std;

static double average (double* data, int size);
static double averageProducts (double* data1, double* data2, int size);
static double variance (double* data, int size);



//FUNCTIONS
void linear_regression(double* indep, double* dep, int size, linReg* lr)
{
    double indepAverage = average(indep, size);
    double depAverage = average(dep, size);
    double productAverage = averageProducts(indep, dep, size);
    double indepVariance = variance(indep, size);

    lr->x = (productAverage - (indepAverage * depAverage) ) / indepAverage;

    lr->y = depAverage - (lr->x * indepAverage);
}

//--------------------------------------------------------
// FUNCTION average
//--------------------------------------------------------
static double average(double* data, int size)
{
    double total = 0;

    // note that incrementing total is done within the for loop
    for(int i = 0; i < size; total += data[i], i++);

    return total / size;
}

//--------------------------------------------------------
// FUNCTION averageProducts
//--------------------------------------------------------

static double averageProducts(double* data1, double* data2, int size)
{
    double total = 0;

    // note that incrementing total is done within the for loop
    for(int i = 0; i < size; total += (data1[i] * data2[i]), i++);

    return total / size;
}

//--------------------------------------------------------
// FUNCTION variance
//--------------------------------------------------------
static double variance(double* data, int size)
{
    double squares[size];

    for(int i = 0; i < size; i++)
    {
        squares[i] = pow(data[i], 2);
    }

    double averageSquares = average(squares, size);
    double mean = average(data, size);
    double squareAverage = pow(mean, 2);
    double variance = averageSquares - squareAverage;

    return variance;
}