/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/4/2020 5:02:17 PM
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
			ll a,b;
			cin>>a>>b;
			if(a%2==1)
			{
				if(b%2==1)
				{
					a=a/2;
					b=b/2;
					cout<<(a*b)+(b+1)*(a+1)<<"\n";
				}
				else
				{
					a=a/2;
					b=b/2;
					cout<<(a*b)+(a+1)*b<<"\n";
				}
			}
			else
			{
				if(b%2==1)
				{
					a=a/2;
					b=b/2;
					cout<<(a*b)+(b+1)*(a)<<"\n";
				}
				else
				{
					a=a/2;
					b=b/2;
					cout<<(a*b)+(a)*b<<"\n";
				}
				
			}
		}


	return 0;
}



