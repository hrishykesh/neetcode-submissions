class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int high = n-1;
        int low=0;
        int gmax=INT_MIN;
        while (low<high)
        {
            gmax=max(gmax, (high-low)*(min(heights[high],heights[low])));
            if(heights[low]<heights[high])
                low++;
            else 
                high--;
        }
        return gmax;
        
    }
};
