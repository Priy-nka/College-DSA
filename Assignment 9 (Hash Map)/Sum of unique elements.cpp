class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int s=nums.size(),sum=0;
        map<int,int>m;
        for(int i=0;i<s;i++)
        {
            m[nums[i]]++;
        }
        for(auto x:m)
        {
            if(x.second==1)
            sum+=x.first;
        }
        return sum;
    }
};
