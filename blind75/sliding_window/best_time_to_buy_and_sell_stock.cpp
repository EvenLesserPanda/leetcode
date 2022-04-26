// Space Complexity: O(1)
// Time Complexity: O(n)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0, right = 1, total = 0;
        while(right != prices.size())
        {
            if(prices[left] >= prices[right])
                left = right;
            else
                total = max(prices[right] - prices[left], total);
            
            right++;
        }
        
        return total;
    }
};
