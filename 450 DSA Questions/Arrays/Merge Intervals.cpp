vector<vector<int>> merge(vector<vector<int>>& itv) {
      vector<pair<int,int>>a;
        vector<int>b;
     vector<vector<int>> d;
      for(int i=0;i<itv.size();i++)
          a.push_back(make_pair(itv[i][0],itv[i][1]));
        sort(a.begin(),a.end());
       for(int i=0;i<a.size();i++)
       { 
        if(i>0 && a[i].first<=b[b.size()-1])
         b[b.size()-1]=max(b[b.size()-1],a[i].second);
          
         else
         { b.push_back(a[i].first);
         b.push_back(a[i].second);   }

       }
        for(int i=0;i<b.size();i+=2)
        {
vector<int>c;
        c.push_back(b[i]);
        c.push_back(b[i+1]);
        d.push_back(c);}
        return d;
    }