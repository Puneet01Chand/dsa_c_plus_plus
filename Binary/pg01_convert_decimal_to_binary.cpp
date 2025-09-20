
#include <iostream>
using namespace std;


int getBinary(int num){
    int quotient = num;
    int result = 0;
    int power = 1;

    while (quotient>0)
    {
        int remainder = quotient%2;
        quotient = quotient/2;
        result+=(remainder*power);
        power  = power*10;
    }

    return result;
}

int main() {
    int num = 5;
    int binary = getBinary(num);
    std::cout << "Decimal of number "<<num<<" is "<<binary<<" in binary";
    return 0;
}