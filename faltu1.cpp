/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/7/2020 2:45:44 PM
  *
  */

#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define vi vector<int> 
#define vll vector<long long>
#define FOR(start,end,increment) for(ll i=start;i<end;i+=increment)

ll gcd(ll a, ll b)
{
  if(a==0)
    return b;
  return gcd(b%a,a);
}



int main(){
  
    fast
    w(t)
    {
      int tot=1<<4;
      int a[4];
      int f=0;
      cin>>a[0]>>a[1]>>a[2]>>a[3];
      for(int mask=1;mask<tot;mask++)
      {
        int sum=0;
        for(int i=0;i<4;i++)
        {
          int p=1<<i;
          // cout<<"i&mask: "<<(i&mask)<<"\n";
          if((p&mask))
          {
            // cout<<a[i]<<" ";
            sum+=a[i];
          }
        }
        if(sum==0)
          f=1;
        // cout<<"\n";
      }
      if(f)
        cout<<"Yes\n";
      else
        cout<<"No\n";
    }


  return 0;
}



