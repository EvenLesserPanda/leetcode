// // Space Complexity: O(n)
// // Time Complexity: O(n)

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_map<int, int> storage;
//         for(auto num : nums)
//         {
//             if(storage[num] == 1)
//                 return true;
//             storage[num]++;
//         }
        
//         return false;
//     }
// };

// Space Complexity: O(1)
// Time Complexity: O(nlogn)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() <= 1)
            return false;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 1; i++)
        {
            int right = i + 1;
            if(nums[i] == nums[right])
                return true;
        }
        
        return false;
    }
};
