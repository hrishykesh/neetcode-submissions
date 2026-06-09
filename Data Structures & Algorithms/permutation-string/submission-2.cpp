class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s2.size();
        int m= s1.size();
        if (m > n) return false;
        vector<int> counts1(26,0);
        vector<int> counts2(26,0);
        for(int i=0;i<m;i++){
            counts1[s1[i]-'a']++;
            counts2[s2[i]-'a']++;
        }
        if(counts1==counts2)
            return true;
        for(int r=m; r<n;r++)
        {   
            counts2[s2[r]-'a']++;
            counts2[s2[r-m]-'a']--;
            if(counts2==counts1)
                return true;

        }
        return false;

    }
};
