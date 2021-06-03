#include <iostream>
#include "vector.hpp"

int main()
{
    Vector a (10);
    Vector b (5);
    Vector c (15); 
    a = b; // translates to a.operator= (b) 
    a = b = c;
    a = a;
}

