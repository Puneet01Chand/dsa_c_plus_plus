#include <iostream>
using namespace std;


bool checkPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        //std::cout << "Calculating " << num << "/" << i;
        if (num % i == 0)
        {
            return false;
        }
        // std::cout << endl;
    }
    return true;
}

void printNumbers(int num){
    std::cout << "Prime Numbers"<<endl;

    for(int i = 2;i<=num;i++){
        bool isPrime = checkPrime(i);
        if (isPrime)
        {
            std::cout << i<<" "; 
        }
    }
}
int main() {
    int num=9;
    printNumbers(num);
    return 0;
}