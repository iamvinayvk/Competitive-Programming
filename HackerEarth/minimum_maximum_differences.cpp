/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/22/2020 7:21:03 PM
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
		vector<int> mini(n),maxi,a;
		for(int i=0;i<n;i++)
			a.push_back(i+1);

		int mino=0,maxo=0;
		for(int i=0;i<n-1;i++)
		{
			swap(a[i],a[i+1]);
			maxo+=(abs(a[i]-(i+1)));
			maxi.push_back(a[i]);
		}
		maxo+=(abs(a[n-1]-n));
		maxi.push_back(a[n-1]);
		sort(all(a));
		for(int i=n-1;i>0;i--)
		{
			swap(a[i],a[i-1]);
			mini[i]=(a[i]);
			mino+=(abs(a[i]-(i+1)));
		}
		mini[0]=(a[0]);
		mino+=(abs(a[0]-1));
		if((mino>maxo)||n==1)
			cout<<"-1";
		else
		{
			cout<<mino<<"\n";
			for(int i=0;i<n;i++)
				cout<<mini[i]<<" ";
			cout<<"\n";
			cout<<maxo<<"\n";
			for(int i=0;i<n;i++)
				cout<<maxi[i]<<" ";
			cout<<"\n";
		}


	return 0;
}



