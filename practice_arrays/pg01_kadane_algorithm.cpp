#include <iostream>
using namespace std;



// Brute force approach 1

/*

void calculateSubArraySum(int nums[],int size){
    std::cout << "Actual array [";
    int maxSum=INT_MIN;
    for(int i=0;i<size;i++){
        std::cout << " "<<nums[i];
    }
    std::cout << " ]"<<endl;
    std::cout << "======== Calculating Sum of an given array ========="<<endl;
    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            int sum = 0;
            for (int i = start; i <= end; i++)
            {
               sum+=nums[i];
            }
               std::cout << "Sum is "<<sum<<endl;
           if (sum>maxSum)
           {
             maxSum = sum;
           }
           
        }        
    }
    std::cout << "Maximum sum is "<<maxSum<<endl;
}

*/

/*





*/


/*

void calculateSubArraySum(int nums[],int size){
    std::cout << "Actual array [";
    int maxSum=INT_MIN;
    for(int i=0;i<size;i++){
        std::cout << " "<<nums[i];
    }
    std::cout << " ]"<<endl;
    std::cout << "======== Calculating Sum of an given array ========="<<endl;
    for (int start = 0; start < size; start++)
    {
        int currentSum = 0;
        for (int end = start; end < size; end++)
        {
            currentSum += nums[end];
            cout << "Subarray (" << start << " to " << end 
                 << ") sum = " << currentSum << endl;
            maxSum = max(maxSum, currentSum);
        }        
    }
    std::cout << "Maximum sum is "<<maxSum<<endl;
}


*/



/*

⚡ Kadane’s Algorithm — Core Summary

Intuition (the heart of it):

If the running sum ever drops below 0, it can’t contribute to a larger future sum — so restart the sum there.

Steps:

Initialize
currentSum = 0, maxSum = -∞

For each number num in array:

currentSum = max(num, currentSum + num)

maxSum = max(maxSum, currentSum)

Return maxSum

Why it works:
Positive sums help future totals grow; negative sums drag them down — so discard the past when it becomes a burden.

Complexity:
🕒 O(n) 💾 O(1)

*/


// Using Kadane’s Algorithm



int calculateSubArraySum(int nums[],int size){
    std::cout << "Actual array [";
    int maxSum=INT_MIN;
    for(int i=0;i<size;i++){
        std::cout << " "<<nums[i];
    }
    std::cout << " ]"<<endl;
    std::cout << "======== Calculating Sum of an given array ========="<<endl;
    int currentSum = 0;
    for (int i = 0; i < size; i++){
        currentSum += nums[i];
        maxSum = max(maxSum,currentSum);
        if (currentSum<0)
        {
            currentSum = 0;
        }
    }
    return maxSum;
}

int main() {
    int nums[] = {3,-4,5,4,-1,7,-8};
    int size = 7;
    int maxSum = calculateSubArraySum(nums,size);
    std::cout << "Maximum sum is "<<maxSum<<endl;
    return 0;
} 