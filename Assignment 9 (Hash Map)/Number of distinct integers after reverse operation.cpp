class Solution {

public:

    int reverse(int n)

    {

        int i=n,len=0,rev=0;

        while(i>0)

        {

            len++;

            i=i/10;

        }

        for(int j=n;j>0;j=j/10)

        {

            rev+=(j%10)*pow(10,len-1);

            len--;

        }

        return rev;

}

    int countDitinctIntegers(vector<int>& nums) {

        map<int,int>mp;

        for(int i:nums)

        {

            mp[i]++;

            mp[reverse(i)]++;

        }

        int dis=0;

        for(auto x:mp)

        {

            dis++;

        }

        return dis;

    }

};
