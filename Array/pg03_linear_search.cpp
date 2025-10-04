#include <iostream>
using namespace std;

int returnTarget(int numbers[], int target)
{
    for (int i = 0; i < 7; i++)
    {
        if (target == numbers[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int numbers[] = {1, 6, 3, 8, 5, 4, 9};
    int target = 80;
    int index = returnTarget(numbers, target);
    if (index != -1)
    {
        std::cout << "Target found on index " << index;
    }
    else
    {
        std::cout << "Target not found";
    }

    return 0;
}