#include <iostream>
using namespace std;


int calculateSum(int numbers[],int size){
    int sum = 0;
    for (size_t i = 0; i < size; i++)
    {
        sum+=numbers[i];
    }
    return sum;
}

int calculateProduct(int numbers[],int size){
    int product = 1;
    for (size_t i = 0; i < size; i++)
    {
        product*=numbers[i];
    }
    return product;
}

int main() {
    int numbers[] = {1,5,7,8,2,6,8};
    int size = 7;
    int sum = calculateSum(numbers,size);
    int product = calculateProduct(numbers,size);
    std::cout << "Sum of array is "<<sum<<endl;
    std::cout << "Product of array is "<<product;
    return 0;
}