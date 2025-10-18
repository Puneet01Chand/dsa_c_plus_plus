#include <iostream>
using namespace std;

bool retrieveTarget(vector<int> nums,int target){
    for(int item:nums){
        if (target==item)
        {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> nums = {1,8,5,6,9,10};
    int target = 10;
    bool isTarget = retrieveTarget(nums,target);
    if (isTarget)
    {
        std::cout << "Target found";
        return 0;
    }
    std::cout << "Target not found";
    return 0;
}