int countBitsFlip(int a, int b){
       int c=0;
       for(int i=0;i<30;i++)
       {
           if((a&(1<<i))!=0 && (b&(1<<i))!=0)
           continue;
           else if((a&(1<<i))==0 && (b&(1<<i))==0)
           continue;
           else
           c++;
       } return c;
    }