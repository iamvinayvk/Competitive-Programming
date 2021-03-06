/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/23/2020 8:45:57 PM
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
		ll n,m;
		cin>>n>>m;
		vector<string> s(n);
		for(int i=0;i<n;i++)
			cin>>s[i];
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<s[i].size();j++)
			{
				if(s[i][j]=='.')
				{
					if((i+j)%2)
					cout<<"W";
					else
						cout<<"B";
					
				}
				
				else if(s[i][j]=='-')
				{
					cout<<"-";
					
				}
			}
			

			cout<<"\n";
		}



	return 0;
}



