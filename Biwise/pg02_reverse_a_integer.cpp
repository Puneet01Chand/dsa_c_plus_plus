#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int quotient = num;
    int remainder = 0;
    int multiplyBy = 0;
    while (quotient > 0)
    {
        remainder = quotient % 10;
        quotient = quotient / 10;
        multiplyBy = multiplyBy * 10 + remainder;
    }
    return multiplyBy;
}
int main()
{
    int number = 123;
    std::cout << "Input: " << number << endl;
    int revNumber = reverseNumber(number);
    std::cout << "Result: " << revNumber << endl;
    return 0;
}