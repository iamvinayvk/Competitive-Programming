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
		string s;
		cin>>s;
		string hello="hello";
		int j=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]==hello[j])
			{
				// cout<<s[i]<<" "<<hello[j]<<"\n";
				j++;
			
			}
		}
		// cout<<j<<"\n";
		if(j==5)
		{
			cout<<"YES";
		}
		else
			cout<<"NO";


	return 0;
}



