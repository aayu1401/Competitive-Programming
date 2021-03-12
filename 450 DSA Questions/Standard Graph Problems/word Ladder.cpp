 int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
      int n=wordList.size()+1,m=beginWord.size();
        vector<int>a[n];
       wordList.push_back(beginWord);
       
        multiset<pair<int,int>>q;
        bool b[n];
        for(int i=0;i<n;i++)
            b[i]=false;
        q.insert(make_pair(1,n-1));
        b[n-1]=true;
        while(!q.empty())
        { int s=(*q.begin()).second;
         int l=(*q.begin()).first;
         q.erase(*q.begin());
         if(wordList[s]==endWord)
             return l;
         
         for(int i=0;i<n;i++)
         { if(b[i]==false && i!=s)
         { int y=0;
          for(int j=0;j<m;j++)
          { if(wordList[s][j]!=wordList[i][j])
              y++;
} if(y==1)
          {q.insert(make_pair(l+1,i)); b[i]=true;}       
}
}
} return 0;
    }
};