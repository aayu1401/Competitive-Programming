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

int main()
{ set<int>c;
c.insert(0);c.insert(2);c.insert(1);c.insert(5);c.insert(8);
map<int,int>d;
d[0]=0;d[1]=1;d[2]=5;d[5]=2;d[8]=8;
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,a,b;
        cin>>h>>m;
        string s;
        cin>>s;
        a=(s[3]-'0')*10+s[4]-'0';
        b=(s[0]-'0')*10+s[1]-'0';
while(a<=m)
{ if(a==m)
{ a=0;b++;break;
}
else if(c.find(a/10)!=c.end() && c.find(a%10)!=c.end() && a<m && (d[a%10]*10+d[a/10])<h)
break;
else
a++;
            
 }
while(b<=h)
        { if(b==h)
           {
               b=0;break;
           }
else if(c.find(b/10)!=c.end() && c.find(b%10)!=c.end() && b<h && (d[b%10]*10+d[b/10])<m)
break;
else
{b++;a=0;}
            
        }
        cout<<b/10<<b%10<<":"<<a/10<<a%10<<endl;
    }
}