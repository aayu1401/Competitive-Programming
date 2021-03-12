int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        int a[n+1];
        for(int i=0;i<n+1;i++)
            a[i]=0;
        for(int i=0;i<n+1;i++)
         a[nums[i]]++;
        for(int i=0;i<n+1;i++)
            if(a[i]>1)
                return i;
        return 0;
    }
};