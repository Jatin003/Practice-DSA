1. two pointers approch






1. 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    
        sort(nums.begin() , nums.end());
        vector<vector<int>> v;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(i>0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            
            while(k>j)
            {
                int x = nums[i]+nums[j]+nums[k];
                
                if(x == 0)
                {
                    v.emplace_back(vector<int>{nums[i],nums[j],nums[k]});
                    j +=1;
                    while(nums[j] == nums[j-1] && j < k) j += 1;
                }
                else if(x>0){k--;}
                else if(x<0){j++;}
            }
        }
         return v;        
    }
};
