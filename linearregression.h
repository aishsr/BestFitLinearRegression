
//structs

typedef struct linReg
{
	double x;
	double y;
}
linReg;

//functions
void linear_regression(double* indep, double* dep, int size, linReg* lr);