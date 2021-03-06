/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/4/2020 9:32:57 PM
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
			ll n,k;
			cin>>n>>k;
			vll a(n+1);
			// ll sum=0;
			for(int i=1;i<=n;i++)
			{
				if((n-i)==k-1)
				{
					a[i]=i;
					k--;
				}
				else if(k>0&&(i%2==1))
				{
					a[i]=i;
					k--;
				}
				else
				{
					a[i]=-i;
					
				}
			}
			for(ll i=1;i<=n;i++)
				cout<<a[i]<<" ";
			cout<<"\n";
		}


	return 0;
}



