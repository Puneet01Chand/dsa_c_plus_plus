#include <iostream>
using namespace std;

int calculateFactorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int facorialOf = 4;
    int factorial = calculateFactorial(facorialOf);
    std::cout << "Factorial of " << facorialOf << "! is " << factorial;
    return 0;
}