class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        while(true)
        {
            if(!mp[original])
            break;
            else
            original*=2;
        }
        return original;
    }
};
