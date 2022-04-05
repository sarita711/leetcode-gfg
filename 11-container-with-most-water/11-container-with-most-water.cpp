class Solution {
public:
    int maxArea(vector<int>& height) {
           int n=height.size();
        int res,maxr=0;
         int x=0,y=n-1;
        while(x<y)
        {
            res=(y-x)*min(height[x],height[y]);   // Calculated the units of water two bars can store.
            maxr=max(maxr,res);      // Maximum water stored.
            if(height[x]<height[y])             
                x++;
            else if(height[x]>height[y])
                y--;
            else
            {
                x++;
                y--;
            }
        }
        return maxr;
    }
};