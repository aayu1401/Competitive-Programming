int findPosition(int n) {
        int y=0,x=0;
        for(int i=0;i<=log2(n);i++)
        {
            if((n&(1<<i))!=0)
            {
                y=i;x++;
            }
        }
        if(x==1)
        return y+1;
        return -1;
    }