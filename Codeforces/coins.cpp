/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/26/2021 2:28:22 AM
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
		map<char,int> m;
		for(int i=0;i<3;i++)
		{
			string s;
			cin>>s;
			if(s[1]=='>')
				m[s[0]-'A']++;
			else
				m[s[2]-'A']++;
		}
		if(m[0]==m[1]||m[0]==m[2]||m[1]==m[2])
			cout<<"Impossible";
		else
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					if(m[j]==i)
						cout<<(char)('A'+j);
				}
			}
		}


	return 0;
}



