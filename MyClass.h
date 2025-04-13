// MyClass.h
class MyClass {
public:
    /**
     * Calculates the sum of first n terms of the series 1 + x + x^2 + x^3 + ...
     * @param x - the argument value (must be |x| < 1 for series convergence)
     * @param n - number of terms to sum
     * @return sum of first n terms
     */
    double FuncA(double x, int n);
};
