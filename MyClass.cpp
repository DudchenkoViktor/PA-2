// MyClass.cpp
#include "MyClass.h"

double MyClass::FuncA(double x, int n) {
	double sum = 0;
	double term =1;

	for (int i = 0; i < n; ++i) {
		sum += term;
		term *= x;
	}

	return sum;
}
