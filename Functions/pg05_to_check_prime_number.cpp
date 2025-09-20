#include <iostream>
using namespace std;

bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        std::cout << "Calculating " << num << "/" << i;
        if (num % i == 0)
        {
            return false;
        }
        std::cout << endl;
    }
    return true;
}

int main()
{
    int num = 9;
    bool isPrime = checkPrime(num);
    if (!isPrime)
    {
        std::cout << num << " is " << "not a prime number";
    }
    else
    {
        std::cout << num << " is " << "a prime number";
    }
    return 0;
}