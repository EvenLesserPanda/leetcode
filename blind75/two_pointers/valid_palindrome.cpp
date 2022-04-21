// Space Complexity: O(1)
// Time Complexity: O(n)

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while(left < right)
        {
            if(!isalnum(s[left]))
                left++;
            else if(!isalnum(s[right]))
                right--;
            else if(tolower(s[left++]) != tolower(s[right--]))
                return false;
        }
        
        return true;
    }
};
