#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <iostream>

#include "data.h"
#include "linearregression.h"
using namespace std;

void printdata (double* indep, double* dep, int size);


int main (void)
{
	
	cout << "--------------------Linear Regression--------------------" << endl;
	
	//arrays of values
	double indep [10];
	double dep [10];
	
	
	for (int i = 1; i < 3; i++)
	{
		if (putdata (indep, dep, i))
		{
			printf("Data Set %d\n-----------\n", i);

            printdata(indep, dep, 8);

            linReg lr;

            linear_regression(indep, dep, 8, &lr);

            printf("y = %gx + %g\n\n", lr.x, lr.y);
		}
	}
	
	
	return 0;
		
	
}

void printdata (double* indep, double* dep, int size)
{
	for (int i =0; i < size; i++)
	{
		printf("%3.0lf\t%3.0lf\n", indep[i], dep[i]);

	}
}