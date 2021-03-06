/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/5/2021 3:32:45 PM3/5/2021 3:32:46 PM
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
		ll n;
		cin>>n;
		vll a(n);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(all(a));
		ll end1=n-1;
		ll end2=n-2;
		ll end3=n-3;
		while(end3>=0)
		{
			bool con1=(a[end1]+a[end2]>a[end3]);
			bool con2=(a[end3]+a[end1]>a[end2]);
			bool con3=(a[end3]+a[end2]>a[end1]);
			if(con1&&con2&&con3)
			{
				cout<<"YES\n";
				return 0;
			}
			end1--;
			end2--;
			end3--;
		}
		cout<<"NO\n";


	return 0;
}



