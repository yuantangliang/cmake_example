#include <iostream>
#include "mathlib/Math.h"
#include "main.h"

using namespace std;

int main(int argx, char *argv[])
{
    Math math;
    int sum =  math.add(5, 6);
    std:cout << "5 + 6 is " << sum << std::endl;
    return 0;
}