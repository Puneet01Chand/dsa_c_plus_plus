#include <iostream>
using namespace std;

int calculateSumOfDigits(int num)
{
    int digitSum=0;
    while(num>0){
        int lastDigit = num%10;
        num = num/10;
        digitSum+=lastDigit;
    }
    return digitSum;
}

int main()
{
    int num = 145;
    int result = calculateSumOfDigits(num);
    std::cout << "Sum of digits of a number is : "<<result;
    return 0;
}