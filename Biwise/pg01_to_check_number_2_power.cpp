#include <iostream>
using namespace std;

// Using a loop by increasing power
/*

void checkNumber(int num){
    int power = 1;

    if (num==1)
    {
        std::cout << "1 is a power of 2";
        return;
    }
    
    while (power<num)
    {   
        power = 2*power;
        if (power>num)
        {
            std::cout << "Number not found for "<<num<<endl;
            return;
        }
        if (power == num)
        {
            std::cout <<num<< " is a power of 2";
            return;
        }
        
    }
}

*/
// Using Bitwise & operation because if a number is a power of 2 by calculating n & (n-1) is always zero

/*

    Taking an example of n = 16;
    Use 5 bits just for clarity (positions 4..0).
    n = 16 → binary 1 0 0 0 0
    n-1 = 15 → binary 0 1 1 1 1
    Bitwise AND, column by column:

    1 & 0 = 0
    0 & 1 = 0
    0 & 1 = 0
    0 & 1 = 0
    0 & 1 = 0
    => 0 0 0 0 0  (which is 0)
*/

/*


bool checkNumber(int num){
    int result = num & (num-1);
    if (result==0)
    {
        return true;
    }
    return false;
}


*/



// Using this 1 << k logic 


/*

    1 << 0 → 0001 → 1
    1 << 1 → 0010 → 2
    1 << 2 → 0100 → 4
    1 << 3 → 1000 → 8
    1 << 4 → 1 0000 → 16
    Every shift puts the 1 in a new position, which creates the sequence of powers of 2.

    Why is that 2^k?

    Because shifting left by one position multiplies by 2:
    1 << 1 = 2^1
    1 << 2 = 2^2
    1 << 3 = 2^3
    1 << k = 2^k
    So the expression 1 << k directly generates powers of two.
*/


bool checkNumber(int num){
    int k = 0;
    while (1<<k<=num)
    {
        int result = 1<<k;
        std::cout << "1<<"<<k<<" is "<<result<<endl;
        if (result == num)
        {
            return true;
        }
        
        k++;
    }
    
    return false;
}


int main() {
    int num = 6;
    bool isNumber = checkNumber(num);
    if (isNumber)
    {
        std::cout <<num<<" is a power of 2";
    }
    else{
    std::cout <<num<<" is not a power of 2";    
    }
    
    return 0;
}