//Problem Link: https://leetcode.com/problems/minimum-size-subarray-sum/
//Logic: Standard sliding window, two pointer approach

int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0,sum=0,mn=INT_MAX;
        while(j<nums.size())
        {
            sum+=nums[j];
            if(sum>=target)
            {
               while(sum>=target)
               {
                 mn = min(j-i+1, mn);
                 sum-= nums[i++];
               }
            }
            j++;
        }
        if(mn==0 || mn==INT_MAX)return 0;
        return mn;
    }

    //TC: O(N), SC: O(1)