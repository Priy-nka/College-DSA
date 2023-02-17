

    vector<int> InsertionSort(vector<int>& nums)
    {
        for (int i=0;i<nums.size()-1;i++)
        {
        if (nums[i]>nums[i+1])
        {
            swap(nums[i],nums[i+1]);
            int temp=i;
            for (int j=i-1;j>=0;j--)
            {
                if (nums[temp]<nums[j])
                {
                    swap(nums[temp],nums[j]);
                    temp--;
                }
            }
        }
        }
        return nums;
    }
};
