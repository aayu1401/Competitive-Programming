string countAndSay(int n) {
        string a="1",b="";
        int p=1,q;
        if(n==1)
            return a;
        else
        { a="";
            b=countAndSay(n-1);
            for(int i=1;i<b.length();i++)
            { if(b[i]==b[i-1])
                p++;
             else
             {
                 a+=to_string(p);
                 a+=b[i-1];
                 p=1;
             }
            }  a+=to_string(p);
                 a+=b[b.size()-1];  
            
        } return a;
        
    }