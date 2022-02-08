1. approch
First, we exam whether from the second last position, 
the last position can be reached. If the answer is yes,the initial problem is equal to whether from the first position, 
we can jump to the second last poistion. if the answer is no,
we check whether from the third last position, the last position can be reached.We recusively repeat this process until one of the exit conditions is fullfilled.

  class Solution {
public:
    
    bool can(vector<int>& nums , int current , int last)
    {
        if(nums[current]+current>=last)
        {
            last=current;
            current = current-1;
        }
        else
        {
            current=current-1;
        }
        if(last==0){return true;}
        if(current==-1){return false;}
        
        return can(nums ,current,last);
    }
    
    bool canJump(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1){return true;}
        int current= n-2;
        int last=n-1;
    
        return can(nums ,current,last);
    }
};


2.dp approch o(n)
  
  
class Solution {
public:
    
    
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
            
        dp[0] = nums[0];
        
        for (int i = 1;i<nums.size();i++) {
            if (dp[i-1] == 0) return false;
            dp[i] = max(dp[i-1] - 1, nums[i]);
        }
        return true;
    }
};
