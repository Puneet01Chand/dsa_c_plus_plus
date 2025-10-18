#include <iostream>
using namespace std;

// Brute Force Approach
/*

int getMajorityElement(int nums[], int size){
    for (int i = 0; i < size; i++)
    {
     int frequency = 0;
     for (int j = 0; j < size; j++)
     {
        if (nums[i]==nums[j])
        {
            frequency++;
        }
        
     }

     if (frequency>(size/2))
     {
        return nums[i];
     }
            
    }

    return -1;
}


*/


// nlogn + n Approach

/*

int getMajorityElement(vector<int>& nums){
    int n = nums.size();
    sort(nums.begin(),nums.end());
    int frequency = 1;
    int ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i]==nums[i-1])
        {
            frequency++;
        }
        else{
            frequency = 1;
            ans = nums[i];
        }

        if (frequency>(n/2))
        {
            return  ans;
        }
        
    }
    return -1;
    
}

*/


/*

Absolutely — here’s an **intuitive, plain-language summary** of the **Moore’s Voting Algorithm** (also called **Boyer–Moore Majority Vote Algorithm**) 👇

---

### 💡 The Core Idea

If an element appears **more than half** of the time in an array,
then it can **“cancel out”** all other elements and still remain in the end.

---

### 🧠 Intuitive Thinking

Imagine a **voting scenario**:

* Each element in the array is a **voter**.
* The “majority element” is a **candidate** that gets **+1 vote**.
* Every different element gives a **–1 vote** (like voting against the candidate).

Whenever the count of votes drops to zero, it means:

> “So far, the candidate has been balanced out by others — let’s pick a new candidate.”

At the end of the process, if a majority element truly exists,
it will be the **last remaining candidate**, because it outnumbers all others combined.

---

### ⚙️ Step-by-Step Intuition

Let’s take an example:

```
nums = [2, 2, 1, 1, 1, 2, 2]
```

1. Start with **no candidate**, `count = 0`.
2. Move through the array:

   * `2`: count = 1 (new candidate 2)
   * `2`: count = 2
   * `1`: count = 1
   * `1`: count = 0 → candidate reset
   * `1`: count = 1 (new candidate 1)
   * `2`: count = 0 → candidate reset
   * `2`: count = 1 (new candidate 2)

✅ Final candidate = 2
(and indeed, 2 is the majority element)

---

### 🧩 Why It Works

Because a true majority element appears **more than n/2 times**,
it **cannot be completely canceled out** by all the other elements combined.
So after all the “pairwise eliminations,” the majority survives.

---

### ⏱️ Efficiency

* **Time complexity:** O(n)
* **Space complexity:** O(1)
* **Passes:**
  1️⃣ Find candidate
  2️⃣ Verify it actually appears > n/2 times

---

### 🏁 Summary Sentence

> **Moore’s Voting Algorithm** smartly “cancels out” non-majority elements in pairs, leaving the majority element as the last survivor — like finding the most popular opinion after everyone debates and cancels out each other.



*/

int getMajorityElement(vector<int> &nums){
    int size = nums.size();
    int frequency = 0;
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (frequency==0)
        {
            ans = nums[i];
        }
        
        if (nums[i]==ans)
        {
            frequency++;
        }
        else{
            frequency--;
        }        
    }

    //  if there is no surity that the majority element exists because it may not be 
    // then we need perform an additional step


    /*
    
    int count = 0;
    for(int item : nums){
        if (item==ans)
        {
            count++;
        }
    }

    if (count>(size/2))
    {
        return ans;
    }
    else{
        return -1;
    }

    */

    return ans;
}

int main() {
    vector<int> nums = {2,2,1,1,1,2,2};
    int element = getMajorityElement(nums);
    // majority element < n/2 
    std::cout << "Element is "<<element;
    return 0;
}