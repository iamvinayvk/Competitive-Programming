/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/1/2020 4:42:06 PM
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
			ll n,x;
			cin>>n>>x;
			vector<int> a(n),b(n);
			for(int i=0;i<n;i++) cin>>a[i];
			for(int i=0;i<n;i++) cin>>b[i];
			int i=0,j=n-1,flag=0; 
			while(i<n)
			{
				if(a[i]+b[j]<=x)
				flag=1;
				else
				{
				flag=0;
				break;	
				}
				i++;
				j--;
			}
			
			if(flag)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}


	return 0;
}



