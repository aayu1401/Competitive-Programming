bool isPowerofTwo(long long n){
       if(n==0)
       return false;
       else if(n==1)
        return true;
        else if((n&(n-1))==0)
        return true;
        return false;
    }