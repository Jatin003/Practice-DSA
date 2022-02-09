1. brute force
2. unordered map
3. two pointer (first sort the v )


<2.>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> map;
        
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            int x = target - nums[i];
            
            if(map.find(x) != map.end() )
            {
                return {map[x],i};
            }
            
            map[nums[i]] = i;
        }
        
        return{};
    }
};


<3.>vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        
        while(i < j)
        {
            int val = nums[i] + nums[j];
            
            if(val == target) return vector<int> {i+1,j+1};
            else if(val > target) j--;
            else if(val < target) i++;
        }
        
        return vector<int> {};
    }
