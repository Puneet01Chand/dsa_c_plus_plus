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

void swapMaxMinPosition(int numbers[],int size){
    int indexLarge = indexOfLargest(numbers,size);
    int indexSmall = indexOfSmallest(numbers,size);
    swap(numbers[indexSmall],numbers[indexLarge]);
    std::cout << "[";
    for (int i = 0; i < size; i++)
    {
        std::cout << " "<<numbers[i];
    }
    std::cout << " ]";

    
}

int main() {
    int numbers[] = {5, 2, 9, 1, 7};
    int size = 5;
    swapMaxMinPosition(numbers,size);
    return 0;
}