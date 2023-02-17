class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
        for(char i:jewels)
        {
            mp[i]++;
        }
        int num=0;
        for(int j:stones)
        {
            if(mp[j])
            num++;
        }
        return num;
    }
};
