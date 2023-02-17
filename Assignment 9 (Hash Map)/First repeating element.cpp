int Solution::solve(vector<int> &A) {
    /*int n=A.size();
    map<long long int,long long int>mp;
    for(int i:A)
    {
        mp[i]++;
    }
    for(int j:A)
    {
        if(mp[j]>1)
        {
            return j;
        }
    }*/
    set<int>s;
    int ans=-1;
    for(int i=A.size()-1;i>=0;i--)
    {
        if(s.find(A[i])!=s.end())
        ans=A[i];
        else
        s.insert(A[i]);
    }
    return ans;
}
