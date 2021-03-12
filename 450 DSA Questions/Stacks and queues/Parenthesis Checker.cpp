bool ispar(string x)
    {
       vector<char>a,b,c;
       for(int i=0;i<x.length();i++)
       {
           if(x[i]=='{')
           a.push_back('{');
           else if(x[i]=='(')
           b.push_back('(');
           else if(x[i]=='[')
           c.push_back('[');
           else if(x[i]=='}' && a.size()>0)
           a.pop_back();
           else if(x[i]==')' && b.size()>0)
           b.pop_back();
           else if(x[i]==']'&& c.size()>0)
           c.pop_back();
           else
           return false;
       }
       if(a.size()==0 && b.size()==0 && c.size()==0)
       return true;
       else
       return false;
    }