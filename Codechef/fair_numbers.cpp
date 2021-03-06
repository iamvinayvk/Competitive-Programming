/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/20/2020 9:26:27 PM
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
			char s[20];
			cin>>s;
			for(int i=0;i<s.size();i++)
			{
				if(strtoull(s,*s,10)%(s[i]-'0')==0)
					continue;
				else
					s=to_string((strtoull(s,*s,10)%(s[i]-'0')+strtoull(s,*s,10)));

			}
			cout<<"\n";

		}


	return 0;
}



