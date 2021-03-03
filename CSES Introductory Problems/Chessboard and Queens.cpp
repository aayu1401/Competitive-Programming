#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ll long long int 
#define vi vector<int>
#define vl vector<ll>
#define vvll vector<pair<ll,ll>>
#define fr(i,a,b) for(int i=a;i<b;i++)
#define frr(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fi first
#define se second
#define lb(a,b) lower_bound(a.begin(),a.end(),b)
#define ub(a,b) upper_bound(a.begin(),a.end(),b)
#define st(a) sort(a.begin(),a.end());
#define s(a) a.size()
#define o_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
 
using namespace __gnu_pbds;
using namespace std;
string a[8];
bool b[8][8];
vector<int>p;
bool check(int i,int j)
{
    fr(k,0,8)
    {
        if(k!=i && b[k][j]==true) 
        return false;
        
    }
    fr(k,0,8)
    {
        if(k!=j && b[i][k]==true )
        return false;
    }
    for(int k=i-1,l=j-1;k>=0 && l>=0;k--,l-- )
    { if(b[k][l]==true)
        return false;
        
    }
    for(int k=i+1,l=j+1;k<8 && l<8;k++,l++ )
    { if(b[k][l]==true)
        return false;
        
    }
    for(int k=i-1,l=j+1;k>=0 && l<8;k--,l++ )
    { if(b[k][l]==true)
        return false;
        
    }
    for(int k=i+1,l=j-1;k<8 && l>=0;k++,l-- )
    { if(b[k][l]==true)
        return false;
        
    } return true;
}

void func(int row)
{  if(row==0)
  {p.pb(1);
  
  return;}
    fr(i,0,8)
    { if(a[row-1][i]=='.' && check(row-1,i)==true){
        b[row-1][i]=true;
        func(row-1);}
        b[row-1][i]=false;
    }
}

int main()
{
   fr(i,0,8)
   cin>>a[i];
   fr(i,0,8)
{
    fr(j,0,8)
    b[i][j]=false;
} p.clear();
   func(8);
   cout<<p.size()<<endl;
   
}