#include <iostream>
using namespace std;


void checkForInersection(int arr1[],int size1,int arr2[],int size2){
    std::cout << "Array 1 is [";
    for (int i = 0; i < size1; i++)
    {
        std::cout << " "<<arr1[i];
    }
    std::cout << " ]"<<endl;

    std::cout << "Array 2 is [";
    for (int i = 0; i < size2; i++)
    {
        std::cout << " "<<arr2[i];
    }
    std::cout << " ]"<<endl;


    std::cout << "Array 1 ∩ Array 2 is [";
    for (int i = 0; i < size1; i++)
    {
        bool isExists = false;
        int target = arr1[i];
        for (int j = 0; j < size2; j++)
        {
            if (target == arr2[j])
            {
                isExists = true;
                break;
            }
            
        }

        if (isExists)
        {
            std::cout <<" "<< target;
        }
    }
    std::cout << " ]";
    
    
}

int main() {
    int arr1[] = {4, 5, 6, 7, 8};
    int size1 = 5;
    int arr2[] = {9,4,1,5};
    int size2 = 4;
    checkForInersection(arr1,size1,arr2,size2);
    return 0;
}