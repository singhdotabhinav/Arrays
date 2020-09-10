
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        
        
        int n=nums.size();
        if(n==0)
            return 0;
        if(n==1)
            return nums[0];
        int currProduct=1;
        int maxProduct=0;
        for(int i=0;i<n;i++){
            currProduct*=nums[i];
            maxProduct=max(maxProduct,currProduct);
            if(currProduct==0)
                currProduct=1;
        }
        currProduct=1;
        reverse(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            currProduct*=nums[i];
            maxProduct=max(maxProduct,currProduct);
            if(currProduct==0)
                currProduct=1;
        }
        return maxProduct;
        
    }
};
