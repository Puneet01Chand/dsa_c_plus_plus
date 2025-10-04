#include <iostream>
using namespace std;

int findSmallest(int numbers[],int count){
    int smallest = INT_MAX;
    for (int i = 0; i < count; i++)
    {
        // if (smallest>numbers[i])
        // {
        //     smallest = numbers[i];
        // }

        // using min and max

        smallest = min(smallest,numbers[i]);
    }
    
return smallest;
}


int findLargest(int numbers[],int count){
    int largestNumber = INT_MIN;
    for (int i = 0; i < count; i++)
    {
        // if (largestNumber<numbers[i])
        // {
        //     largestNumber = numbers[i];
        // }
          
        // using min and max

        largestNumber = max(largestNumber,numbers[i]);
        
    }
    return largestNumber;
    
}

int main() {
    int numbers[] = {5,15,22,-15,24};
    int count = sizeof(numbers) / sizeof(numbers[0]);
    // int count = size(numbers);
    int smallestNumber = findSmallest(numbers,count);
    int largestNumber = findLargest(numbers,count);
    std::cout << "Smallest Number is "<<smallestNumber<<endl;
    std::cout << "Largest Number is "<<largestNumber<<endl;
    return 0;
}