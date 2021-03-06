/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/28/2021 2:48:11 AM
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
		string st;
		cin>>st;
		vector<char> v(n+1);
		int s=n/2,e=(n)/2;
		// cout<<s<<" :s: "<<e<<" :e: \n";
		if(n%2==0)
			s--;
		for(int i=0;i<st.size();i++)
		{
			if(n%2)
			{
				if(i==0)
				{
				v[s]=st[i];

				s--;
				e++;
				}
				else if(i%2)
				{
					v[s]=st[i];
					s--;
				}
				else if(i%2==0)
				{
					v[e]=st[i];
					e++;
				}
				// cout<<v[s]<<" "<<s<<" "<<v[e]<<" "<<e<<"\n";
			}
			else
			{

				if(i%2==0)
				{
					v[s]=st[i];
					s--;
				}
				else if(i%2)
				{
					v[e]=st[i];
					e++;
				}
			}
			

		}
		for(int i=0;i<n;i++)
				cout<<v[i];


	return 0;
}



