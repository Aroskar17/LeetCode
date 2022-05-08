/*

15. 3Sum
Medium

Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     set<vector<int>> res;
        int i,j,k;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(i=0;i<n-2;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
            int sum=nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int>tmp(3);
                    tmp[0]=nums[i];
                    tmp[1]=nums[j];
                    tmp[2]=nums[k];
                    res.insert(tmp);
                    j++,k--;
                    
                }
                else if(sum<0)
                    j++;
                else if(sum>0)
                    k--;
                
                
                
            }
        }
    vector<vector<int>>  v(res.begin(),res.end());
        return v;
    
    }
};
