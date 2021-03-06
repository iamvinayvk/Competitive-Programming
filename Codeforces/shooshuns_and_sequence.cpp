/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/1/2020 11:13:44 PM
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
		ll n,k;
		cin>>n>>k;
		vll a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		ll flag=0;
		int val=a[k-1];
		map<int,int> m;
		for(int i=0;i<k;i++)
		{
			if(a[i]!=val)
				m[a[i]]=i;
		}
		for(int i=k-1;i<n;i++)
		{
			if(val!=a[i])
				{
					flag=1;
					break;
				}
		}
		if(flag)
			cout<<"-1";
		else if(m.size()==0)
			cout<<"0";
		else
		{
			int max=0;
			for(auto x:m)
			{
				if(max<x.S)
					max=x.S;
			}
			cout<<max+1<<"\n";
		}


	return 0;
}



