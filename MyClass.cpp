// MyClass.cpp
#include "MyClass.h"

double MyClass::FuncA(double x) {
	double sum = 0;
	double term = 1;

	for (int i = 0; i < 3; ++i) {
		sum += term;
		term *= x;
	}

	return sum;
}
