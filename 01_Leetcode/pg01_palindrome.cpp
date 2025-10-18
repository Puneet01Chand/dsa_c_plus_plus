/*

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


*/
bool isPalinDrome(int num){
    int quotient = num;
    int remainder = 0;
    int addedBy = 0;
    while (quotient>0)
    {
        remainder = quotient % 10;
        quotient = quotient / 10;
        addedBy = addedBy * 10 + remainder;
    }
    if (addedBy==num)
    {
        return true;
    }
    
    return false;
    
}
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    std::cout << "Is "<<num<<" palindrome: "<<isPalinDrome(num);
    return 0;
}