class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();++i)
        {
             int x=nums[i];
            int k=0;
            while(x>0)
            {
                k++;
                x=x/10;

            }
            
            if(k%2==0){sum++;}
            
        
        }
        return sum;
    }
};