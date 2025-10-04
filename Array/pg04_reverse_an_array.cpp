#include <iostream>
using namespace std;

void reverseArray(int numbers[],int size){
    int start = 0;
    int end = 6;
    while (start<end)
    {
        swap(numbers[start],numbers[end]);
        start++;
        end--;
        std::cout << "[";
        for (int i = 0; i < size; i++)
        {
        std::cout << " "<<numbers[i];
        }
        std::cout << " ]"<<endl;
    }
    
}

// Using * 2 pointers approach
int main() {
 int numbers[] = {1, 6, 3, 8, 5, 4, 9};
 int size = 7;
 reverseArray(numbers,size);
 return 0;
}