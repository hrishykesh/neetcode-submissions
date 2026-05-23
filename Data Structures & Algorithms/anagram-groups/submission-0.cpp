class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> sortedstring;
        vector<vector<string>> anagram;
        string temp="";
        for (string s : strs)
        {  
            temp=s;
            sort(temp.begin(),temp.end());
            if(sortedstring.find(temp)!=sortedstring.end())
            {
                anagram[sortedstring[temp]].push_back(s);
            }
            else
            {
                anagram.push_back({s});
                sortedstring[temp]=anagram.size()-1;
            }
        }
        return anagram;
    }
};
