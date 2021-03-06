/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/11/2020 12:48:32 AM
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
        int t;
        cin>>t;
        int r=1;
        while(r<=t)
        {
            ll n;
            cin>>n;
            vll a(n);
            for(ll i=0;i<n-1;i++)
                cin>>a[i];
            ll maxo=0;
            ll start_i=1,end_i=1,tmp=1;
            ll sum=0;
            for(int i=0;i<n-1;i++)
            {
               
               sum+=a[i];
               if(sum<0)
               {
                    sum=0;
                    tmp=i+2;
               }
               if(sum>=maxo)
               {
               if(sum>maxo||(sum==maxo&&(i+2-tmp)>(end_i-start_i)))
               {
                start_i=tmp;
                end_i=i+2;
               }
               maxo=sum;
           }
               
               


            }
            if(maxo>0)
            {
            cout<<"The nicest part of route "<<r<<" is between stops "<<start_i<<" and "<<end_i<<"\n";
            }
            else
                cout<<"Route "<<r<<" has no nice parts\n";
            r++;

        }


    return 0;
}



