string reverseWords(string S) 
    {  vector<string>a;
        string b="";
        for(int i=0;i<S.length();i++)
        { 
            if(S[i]=='.')
            {  a.push_back(b);
            b="";
            }
            else
            b+=S[i];
        } a.push_back(b);b="";
        for(int i=a.size()-1;i>=0;i--)
        {b.append(a[i]);b+='.';}
        b.pop_back();
        return b;
        
        
    } 