//link https://leetcode.com/problems/majority-element-ii/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        map<int,int> m;
        
        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }
        
        vector<int> ans;
        
        for(auto it = m.begin(); it!=m.end(); it++)
        {
            int s = it->second;
            int n = it->first;
            
            if(s>(nums.size()/3))
            {
                ans.push_back(n);
            }
        }
        
        return ans;
    }
};
