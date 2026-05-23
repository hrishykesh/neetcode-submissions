class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char,int> a,b;
        for (char c: s)
        {
            a[c]++;
        }
        for(char c:t)
        {
            b[c]++;
        }
        if(a==b)
            return true;
        else
            return false;

        
    }
};
