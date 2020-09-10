//Given an array containing only 0s and 1s, find the largest subarray which contains equal no of 0s and 1s. Expected time complexity is O(n).
//I/P {1, 0, 1, 1, 1, 0, 0}
//O/P 6
//Explanation link : https://www.youtube.com/watch?v=9ZyLjjk536U&ab_channel=TECHDOSE


class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        
        unordered_map<int ,int> mp;
        int sum=0;
        int subarray=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]==0?-1:1;
            if(sum==0){
                if(subarray<i+1)
                    subarray=i+1;
            }
            else if(mp.find(sum)!=mp.end()){
                if(subarray<i-mp[sum])
                    subarray=i-mp[sum];
            }
            else
                mp[sum]=i;
        }
         return subarray;
    }
   
};
