#include <iostream>
using namespace std;

int main() {
    int andResult = 6&10;
    int orResult = 6|10;
    int xorResult = 6^10;
    int leftShift = 10<<2;
    int rightShift = 10>>1;
    std::cout << "Solution of 6 & 10 = "<<andResult<<endl;
    std::cout << "Solution of 6 | 10 = "<<orResult<<endl;
    std::cout << "Solution of 6 ^ 10 = "<<xorResult<<endl;
    std::cout << "Solution of 10 << 2 = "<<leftShift<<endl;
    std::cout << "Solution of 10 >> 1 = "<<rightShift<<endl;
    return 0;
}

