/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/2/2020 1:58:22 PM
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
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		map<char,ll> m1,m2;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]!=' ')
				m1[s1[i]]++;
		}
		for(int i=0;i<s2.size();i++)
		{
			if(s2[i]!=' ')
				m2[s2[i]]++;
		}
		int flag=0;
		for(auto x:m2)
		{
			if(x.S>m1[x.F])
			{
				flag=1;
				break;
			}
		}
		if(flag)
			cout<<"NO";
		else
			cout<<"YES";



	return 0;
}



