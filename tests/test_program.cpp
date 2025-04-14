#include "MyClass.h"
#include <cassert>
#include <cmath>  // Исправлено с omath на cmath
#include <iostream>

void testPartialSum(double x, int n, double expected) {
	 MyClass obj;
	double result = obj.FuncA(x, n);
	double tolerance = 0.0001;

	std::cout << "Testing x=" << x << " n=" << n
		<< " Result=" << result
		<< " Expected=" << expected << std::endl;

	assert(fabs(result - expected) < tolerance);
}

int main() {
	// Тесты для ряда 1/(1-x) = 1 + x + x^2 + ... + x^n
	testPartialSum(0.5, 3, 1.875);    // 1 + 0.5 + 0.25 + 0.125
	testPartialSum(0.5, 5, 1.9375);   // 1 + 0.5 + 0.25 + 0.125 + 0.0625 + 0.03125
	testPartialSum(0.2, 4, 1.2488);   // 1 + 0.2 + 0.04 + 0.008 + 0.0016

	std::cout << "All tests passed!" << std::endl;
	return 0;
}
