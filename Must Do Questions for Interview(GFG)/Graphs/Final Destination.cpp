int canReach(long long a, long long b, long long x) {
       int s=abs(a)+abs(b);
       if(x<s)
       return 0;
       if((s-x)%2==0)
       return 1;
       return 0;
    }