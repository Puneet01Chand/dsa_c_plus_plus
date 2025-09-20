#include <iostream>
using namespace std;

int binaryToDecimal(int num){
    int result = 0;
    int remaining = num;
    int power = 1;
    while (remaining!=0)
    {
        int bid = remaining%10;
        remaining = remaining/10;
        result= result + (bid*power);
        power = power*2;
    }


    return result;
}

int main() {
    int binaryNumber = 101;
    int decimalNumber = binaryToDecimal(binaryNumber);
    std::cout << "Binary number "<<binaryNumber<<" is "<<decimalNumber<<" in decimal";
    return 0;
}