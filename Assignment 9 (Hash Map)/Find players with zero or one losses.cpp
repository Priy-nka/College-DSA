class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>win;
        map<int,int>los;
        for(vector<int> i:matches)
        {
            win[i[0]]++;
            los[i[1]]++;
        }
        vector<int>ans0,ans1;
        vector<vector<int>>ans;
        for(auto x:win)
        {
            if(!los[x.first])
            ans0.push_back(x.first);
        }
        for(auto y:los)
        {
            if(y.second==1)
            ans1.push_back(y.first);
        }
        sort(ans0.begin(),ans0.end());
        sort(ans1.begin(),ans1.end());
        ans.push_back(ans0);
        ans.push_back(ans1);
        return ans;
    }
};
