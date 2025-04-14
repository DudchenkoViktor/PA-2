#include "MyClass.h"
#include <cassert>
#include <cmath>

int main() {
    MyClass obj;
    assert(fabs(obj.FuncA(0.5, 3) - 1.875) < 0.0001);
    return 0;
}
