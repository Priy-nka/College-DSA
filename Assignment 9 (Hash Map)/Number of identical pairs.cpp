class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        int pair=0;
        for(auto x:mp)
        {
            if(x.second>1)
            pair+=((x.second-1)*(x.second))/2;
        }
        return pair;
    }
};
