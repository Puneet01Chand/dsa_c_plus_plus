#include <iostream>
using namespace std;


int indexOfSmallest(int numbers[],int count){
    int smallest = INT_MAX;
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (smallest>numbers[i])
        {
            index = i;
            smallest = numbers[i];
        }
        
    }
    
return index;
}
int indexOfLargest(int numbers[],int count){
    int largest = INT_MIN;
    int index = -1;
    for (int i = 0; i < count; i++)
    {
        if (largest<numbers[i])
        {
            index = i;
            largest = numbers[i];
        }
        
    }
    
return index;
}

int main() {
    int numbers[] = {5,15,22,-15,24};
    int count = sizeof(numbers) / sizeof(numbers[0]);
    int smallIndex = indexOfSmallest(numbers,count);
    int largeIndex = indexOfLargest(numbers,count);
    std::cout << "Index of smallest number is "<<smallIndex<<endl;
    std::cout << "Index of smallest number is "<<largeIndex<<endl;
    return 0;
}