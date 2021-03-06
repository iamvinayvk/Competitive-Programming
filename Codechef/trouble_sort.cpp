/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/21/2020 1:38:50 AM
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
			ll n;
			cin>>n;
			vector<pair<ll,ll>> a(n);
			for(int i=0;i<n;i++)
				cin>>a[i].F;
			ll s=0;
			for(int i=0;i<n;i++)
			{
				cin>>a[i].S;
				s+=a[i].S;
			}
			int flag=1;
			// for(int i=0;i<n;i++)
			// {
			// 	for(int j=i+1;j<n;j++)
			// 	{
			// 		if(a[i].F>a[j].F&&(a[i].S==a[j].S))
			// 		{
			// 			continue;
						
			// 		}
			// 		else if(a[i].F>a[j].F&&(a[i].S!=a[j].S))
			// 		{
			// 			swap(a[i],a[j]);
			// 			i--;
			// 			break;
			// 		}
			// 	}
			// }
			// for(int i=0;i<n;i++)
			// {
			// 	cout<<a[i].F<<" "<<a[i].S<<" ";
			// }
			if((s&&s!=n)||n==1||is_sorted(all(a)))
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}


	return 0;
}



