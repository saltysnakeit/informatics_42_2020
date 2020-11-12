#include <iostream>
#include <cmath>
#include <string>
#include "Lab1_Functions.h"

using namespace std;

ArrInfo::ArrInfo(int length)
{
	this->length = length;
	this->function = new double[length];
}
double calc(double a, double b, double x)
{
	double y;
	if (x < 5)
	{
		double numenator = pow((log(pow(a, 2) + x) / log(10)), 2);
		double denumenator = pow((a + x), 2);
		y = numenator / denumenator;
	}
	else
	{
		double numenator = pow((a + b * x), 2.5);
		double denumenator = 1.8 + pow(cos(a * x), 3);
		y = numenator / denumenator;
	}

	return y;
}
double calc(double x)
{
	const double a = -2.5;
	const double b = 3.4;
	return calc(a, b, x);
}

ArrInfo taskA(double a, double b, double xn, double xk, double dx)
{
	int size = (int)((abs(xk - xn) / dx) + 1);
	ArrInfo info(size);
	int i = 0;
	for (double x = xn; x <= xk; x += dx)
	{
		info.function[i] = calc(a, b, x);
		i++;
	}
	return info;
}

ArrInfo taskB(double a, double b, double *x, int size)
{
	ArrInfo info(size);

	for (int i = 0; i < size; i++)
	{
		info.function[i] = calc(a, b, x[i]);
	}
	return info;
}

void SquareWithD(int size, int length, int width)
{
	/*ArrInfo SquareParams(size);

		for (int i = 0; i < size; i++)
		{
			SquareParams.function[i] = 0;
		}

		int j;

		for (j = 0; j < size; j++)
		{
			if (j <= length ) SquareParams.function[j] = 1

			
		}
     */

}
void SquareWithOutD(int size, int length, int width)
{
	ArrInfo SquareParams(size);

		for (int i = 1; i <= length; i++)
		{
			for (int j = 1; j <= width; j++)
			{
				if (i == 1 || i == length || j == 1 || j == width)
					SquareParams.function[i] = 1;
				else SquareParams.function[i] = 0;
			}
			cout << endl;
		}
}
