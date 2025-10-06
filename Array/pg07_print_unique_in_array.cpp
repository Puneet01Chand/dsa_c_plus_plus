#include <iostream>
using namespace std;

void printUniqueElements(int numbers[],int size){
    std::cout << "Actual Array: [";
    for (int i = 0; i < size; i++)
    {
     std::cout <<" "<<numbers[i];   
    }
    std::cout << " ]"<<endl;
    std::cout << "Unique: [";
    for (int i = 0; i < size; i++)
    {
        int target = numbers[i];
        int unique = true;
        for (int j = 0; j < size; j++)
        {
            if (i!=j)
            {
               if (target==numbers[j])
               {
                unique = false;
                break;
               }
            }
        }
        if (unique)
        {
            std::cout<<" "<<target;
        }
        
    }
    std::cout << " ]";
    
}

int main() {
    int numbers[] = {4, 5, 6, 4, 7, 5, 8};
    int size = 7;
    printUniqueElements(numbers,size);
    return 0;
}