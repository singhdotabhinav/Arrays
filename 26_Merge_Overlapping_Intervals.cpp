//Problem Statement
//Given a set of time intervals in any order, merge all overlapping intervals into one and output the result which should have only mutually exclusive intervals.
//Let the intervals be represented as pairs of integers for simplicity.
//For example, let the given set of intervals be {{1,3}, {2,4}, {5,7}, {6,8} }.
//The intervals {1,3} and {2,4} overlap with each other, so they should be merged and become {1, 4}.
//Similarly {5, 7} and {6, 8} should be merged and become {5, 8}
//Input: intervals = [[1,4],[4,5]]
//Output: [[1,5]]
//Explanation: Intervals [1,4] and [4,5] are considered overlapping.
/*
Initially sort the array and then push the first element into the answer for speculation.
We have two condition if the first elements second part of ans array is greater than or equal to the second element first part of the 
interval array.
The other condition we have to tackle is what if its not? then we push the particular element into the ans array which will be then be under speculation.
interval: [[1,3],[2,6],[8,10],[15,18]]
             i
We initally push the 1st element into the ans array:
ans=[[1,3]]
      j        j points to the latest pushed element
Then we i is incremented.
[[1,3],[2,6],[8,10],[15,18]]
         i
Now the ans[j][1]>interval[i][0] this means there is a possiblity of merging so we merger them
Remember the way we merge is to take the second element as max(ans[j][1],interval[i][1])
cuz imagine we have this
[1,7][2,4] --->merge should be ---->[1,7]

ans=[[1,6]]

then we move i forward

[[1,3],[2,6],[8,10],[15,18]]
               i
Since ans[j][1]<interval[i][0] thus not contributing to the merge.
Thus we will push this into the ans array and speculate.

ans=[[1,6][8,10]]
            j   <----j is moved forward
i is moved forward 
[[1,3],[2,6],[8,10],[15,18]]
                       i
Since ans[j][1]<interval[i][0] thus not contributing to the merge.
ans=[[1,6][8,10][15,18]]
                  j

Thus yielding our final answer.


*/


bool sortcol( const vector<int>& v1, const vector<int>& v2 ) { 
                return v1[0] < v2[0]; 
}



class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        vector<vector<int>> ans;
        if(intervals.size()==0) return ans;
        sort(intervals.begin(), intervals.end(),sortcol);
        ans.push_back(intervals[0]);
        int j=0;
        for(int i=1;i<intervals.size();i++){
            if(ans[j][1]>=intervals[i][0])
                ans[j][1]=max(ans[j][1],intervals[i][1]);
            else{
                j++;
                ans.push_back(intervals[i]);
            }
        }
        
        
        
        
        
        
        return ans;
        
        
    }
};
