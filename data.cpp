#include<string.h>
#include<stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

bool putdata(double indep [10], double dep [10], int i)
{
	bool success = true;
	
	switch (i)
	{
		case 1:
			memcpy (indep, (double[10]){1,2,3,4,5,6,7,8,9,10}, sizeof(double[10]));
			memcpy (dep, (double[10]){20,33,45,50,60,61,65,78,90,104}, sizeof(double[10]));
			break;
			
		default:
			cout << "Invalid dataset" << endl;
			success = false;
			break;
	}
	
	return success;
}