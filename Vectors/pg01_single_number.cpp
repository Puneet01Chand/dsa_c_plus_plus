#include <iostream>
#include <vector>
using namespace std;
int getUnique(vector<int>& nums){
    int unique = 0;
    for(int item:nums){
        unique = unique^item;
    }
    return unique;
}
int main() {
    vector<int> nums = {4,1,2,1,2};
    int unique = getUnique(nums);
    if (unique>0)
    {
        std::cout << "Unique Number is: "<<unique;
    }
    else
    {
        std::cout << "Unique Number not found";
    }
    
    
    return 0;
}