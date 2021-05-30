
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
#define ook(k) order_of_key(k)
#define foo(k) find_by_order(k)

 
using namespace __gnu_pbds;
using namespace std;
string longestPalin (string S) {
    string b;
    int l=1,a=0,j;
    for(int k=0;k<S.length();k++)
    {
         j=S.length()-1;
       
         while(j>k)
         { if(S[k]==S[j])
         { int y=0;
            for(int i=0;i<=(j-k+1)/2;i++)
            {
                if(S[k+i]!=S[j-i])
                {
                    y=1;break;
                }
            } if(y==0)
            {
                if(l<(j-k+1))
                {
                    l=j-k+1;a=k;
                  
                }break;
            }
         }
         j--;}
         
    }
    b=S.substr(a,l);
    return b;
    }
int main()
{string a;
cin>>a;
cout<<longestPalin(a)<<endl;
}