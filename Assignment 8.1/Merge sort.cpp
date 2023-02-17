vector<int> mergeSort(vector<int>& a, vector<int>& b)
    {
        vector<int> sort;
        int i=0, j=0;
        while (i<a.size() && j<b.size())
        {
            if (a[i] < b[j])
            {
                sort.push_back(a[i]);
                i++;
            }
            else
            {
                sort.push_back(b[j]);
                j++;
            }
        }
        while (i < a.size())
        {
            sort.push_back(a[i]);
            i++;
        }
        while (j < b.size())
        {
            sort.push_back(b[j]);
            j++;
        }
        return sort;
    }
