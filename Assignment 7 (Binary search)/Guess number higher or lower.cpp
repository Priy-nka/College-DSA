class Solution {
public:
    int guessNumber(int n)
    {
        int l = 1, r = n, mid = l + (r-l)/2;
        while(l<=r)
        {
            if(guess(mid) == 0) 
                return mid;
            if(guess(mid) == -1) 
                r = mid-1;
            else 
                l = mid+1;
            
            mid = l + (r-l)/2;
        }
        
        return -1;
    }
};
