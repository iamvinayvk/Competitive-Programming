/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/22/2020 3:33:42 PM
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

int digi(int a)
{
	int sum=0;
	while(a>0)
	{
		sum+=(a%10);
		a/=10;
	}
	return sum;
}

int main(){
	
		fast
		ll n,q;
		cin>>n>>q;
		vector<int> a(n);
		vector<pair<int,int>> dig;
		for(int i=0;i<n;i++) 
		{
			cin>>a[i];
			int digsum=digi(a[i]);
			dig.push_back(make_pair(digsum,i));

		}
		// sort(all(dig));
		// reverse(all(dig));
		while(q--)
		{
			ll ind;
			cin>>ind;
			int curr=a[ind-1];
			int flag=0;
			int j=0;
			for(j=ind;j<n;j++)
			{
				// cout<<a[j]<<" -\n";
				if((a[ind-1]<a[j])&&(dig[ind-1].F>dig[j].F))
				{
					flag=1;
					break;
				}
			}
			if(flag)
				cout<<j+1<<"\n";
			else
				cout<<"-1\n";
		}



	return 0;
}



