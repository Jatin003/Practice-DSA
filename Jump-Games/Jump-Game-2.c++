
class Solution { 
public:
    long long solve(vector<int>& nums, int idx, vector<int> &dp) {
        
        if(idx >= nums.size()-1) return 0;
        if(dp[idx] != -1) return dp[idx];
        
        int jumps = nums[idx];
        
        long long ans = INT_MAX;
        
        for(int i=1; i<=jumps; i++) 
        {
        
            ans = min(ans, 1 + solve(nums, i+idx, dp));    
        }
        
        return dp[idx] = ans;
    }
    
    
    
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
    
};
