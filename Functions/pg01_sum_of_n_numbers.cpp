#include <iostream>
using namespace std;

int calculateSum(int num){
    int sum=0;
    for(int i=1;i<=num;i++){
        sum+=i;
    }
    return sum;
}


int main() {
    int sumOf = 4;
    int sum = calculateSum(sumOf);

    std::cout << "Sum from 1 upto " << sumOf << " is " << sum;

    
    return 0;
}