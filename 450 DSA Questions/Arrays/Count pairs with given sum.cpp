  int getPairsCount(int a[], int n, int k) {
        map<int,int>b;
        vector<pair<int,int>>c;
        for(int i=0;i<n;i++)
        b[a[i]]++;
        for(auto i:b)
        c.push_back(i);
        sort(c.begin(),c.end());
        int p=0,i=0,j=c.size()-1;
        while(i<j)
        {
            if(c[i].first+c[j].first==k)
            { p+=c[i].second*c[j].second;
            i++;j--;
            }
            else if((c[i].first+c[j].first)<k)
            i++;
            else
            j--;
        } 
        for(int i=0;i<c.size();i++)
        {
            if(2*c[i].first==k)
            {
                p+=((c[i].second-1)*(c[i].second))/2;
            }
        }
        return p;
        }