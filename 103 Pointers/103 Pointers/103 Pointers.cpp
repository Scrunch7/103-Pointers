
#include "Header.h"

void iterativeMultiply(int val) {
    val *= 2;
    std::cout << val;
}


void iterativeMultiplyRef(int &val) {
    val *= 2;
    std::cout << val;
}


int main()
{
  
    int* varPtr = &var;
    iterativeMultiply(var);
    iterativeMultiply(var);
}

