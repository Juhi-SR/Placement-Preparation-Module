class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
        return false;
    }
 
    unordered_map<int, int> freq;
 
    for (char x: s) {
        freq[x]++;
    }
 
    for (char y: t)
    {
       
        if (freq.find(y) == freq.end()) {
            return false;
        }
 
        freq[y]--;
 
        if (!freq[y]) {
            freq.erase(y);
        }
    }
 
    return !freq.size();

    }
};