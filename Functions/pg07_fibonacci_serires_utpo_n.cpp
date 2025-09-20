#include <iostream>
using namespace std;

int calculateFibonacciOf(int num)
{
    int a = 0;
    int b = 1;
    int result = 0;
    if (num <= 1)
    {
        return num;
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            result = a + b;
            a = b;
            b = result;
        }
        return result;
    }
}

int main()
{
    int num = 7;
    int fiboNumber = calculateFibonacciOf(num);
    std::cout << "Fibonacci of " << num << " is " << fiboNumber;
    return 0;
}