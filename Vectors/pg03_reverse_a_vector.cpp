#include <iostream>
#include <vector>
using namespace std;

void reverseVector(vector<int>& nums){
    int size = nums.size()-1;
    if (size==0)
    {
        return;
    }
    int start = 0;
    int end = size;
    std::cout << "Actual array [";
    for(int item : nums){
        std::cout << " "<<item;
    }
    std::cout << " ]"<<endl;
    std::cout << "======== REVERSING AN ARRAY ========="<<endl;
    while (start<end)
    {
        swap(nums.at(start),nums.at(end));
        start++;
        end--;
    }
    std::cout << "Updated array [";
    for(int item : nums){
        std::cout << " "<<item;
    }
    std::cout << " ]"<<endl;    
}
int main() {
    vector<int> nums = {1,2,3,4};
    reverseVector(nums);
    return 0;
}