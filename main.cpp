#include <iostream>
#include "mathlib/Math.h"

using namespace std;

int main()
{

    Math math;
    int sum =  math.add(5, 6);
    std:cout << "5 + 6 is " << sum << std::endl;
    return 0;
}