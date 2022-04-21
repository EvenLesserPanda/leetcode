// // Space Complexity: O(1)
// // Time Complexity: O(n + m)

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s == t)
//             return true;
//         if(s.size() != t.size())
//             return false;
        
//         unordered_map<char, int> storage;
        
//         for(auto ch : s)
//             storage[ch]++;
        
//         for(int i = 0; i < t.size(); i++)
//         {
//             if(storage[t[i]] == 0)
//                 return false;
//             storage[t[i]]--;
//         }
        
//         return true;
//     }
// };

// Space Complexity: O(1)
// Time Complexity: O(n)

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s == t)
            return true;
        if(s.size() != t.size())
            return false;
        
        int arr[26] = {};
        
        for(int i = 0; i < s.size(); i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }
            
        for(int i = 0; i < 26; i++)
        {
            if(arr[i])
                return false;
        }
        
        return true;
    }
};
