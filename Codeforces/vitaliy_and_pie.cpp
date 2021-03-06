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
		string s;
		cin>>s;
		map<char,int> m;
		ll buy=0;
		for(int i=0;i<s.size();i++)
		{
				if(i%2==0)
				{
			
				m[s[i]]++;
				}

				if(i%2==1)
				{
					if(m[s[i]+32]>0)
					{
						m[s[i]+32]--;
					}
					else
						
					buy++;
				}
			
		}
		
		// for(int i=1;i<s.size();i+=2)
		// {
		// 	if(m[s[i]+32]>0)
		// 	{
		// 		m[s[i]+32]--;
		// 	}
		// 	else
		// 		buy++;

		// }
		cout<<buy;



	return 0;
}



