#include <iostream>
using namespace std;


/*
void printPairSum(int nums[], int size, int target)
{
    vector<int> result = {};
    std::cout << "Actual array [";
    for (int i = 0; i < size; i++)
    {
        std::cout << " " << nums[i];
    }
    std::cout << " ]" << endl;
    std::cout << "======== Calculating Pair Sum of an given array =========" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            // std::cout << nums[i] << " + " << nums[j] << endl;
            int addResult = nums[i] + nums[j];
            if (addResult == target)
            {
                result.push_back(i);
                result.push_back(j);
            }
        }
    }

    bool pairFound = result.size()>0;
    if (pairFound)
    {
        std::cout << "Pairs are :";
        for(int item : result){
            std::cout <<item<< ",";
        }
    }
}
*/

// O(n) Approach
vector<int> pairSum(int nums[], int size, int target)
{
    int start = 0;
    int end = size-1;
    vector<int> pairs = {};
    std::cout << "Actual array [";
    for (int i = 0; i < size; i++)
    {
        std::cout << " " << nums[i];
    }
    std::cout << " ]" << endl;
    std::cout << "======== Calculating Pair Sum of an given array =========" << endl;

    while (start<end)
    {
        int result = nums[start]+nums[end];
        if (result>target)
        {
            end--;
        }
        else if (result<target)
        {
            start++;
        }
        else{
            pairs.push_back(nums[start]);
            pairs.push_back(nums[end]);
            return pairs;
        }
    }
    return pairs;
    
}
int main()
{
    int nums[] = {2, 7, 11, 15};
    int size = 4;
    int target = 9;
    vector<int> pairs = pairSum(nums, size, target);
    std::cout << "Pairs found: "<<pairs[0]<<" , "<<pairs[1];
    return 0;
}