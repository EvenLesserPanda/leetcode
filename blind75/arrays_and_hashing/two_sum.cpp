// Space Complexity: O(n)
// Time Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> storage;
        for(int i = 0; i < nums.size(); i++)
        {
            if(storage.count(target - nums[i]))
                return {storage.find(target - nums[i])->second, i};
                
            storage[nums[i]] = i;
        }
        return {-1, -1};
    }
};
