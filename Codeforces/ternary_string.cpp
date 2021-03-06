/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/29/2020 8:29:14 PM
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
			string s;
			cin>>s;
			unordered_map<char,int> st;
			int i=0,j=0;
			int ans=INT_MAX;
			for(j=0;j<s.size();j++)
			{
				st[s[j]]++;
				while(st.size()==3)
				{
					ans=min(ans,(j-i)+1);
					st[s[i]]--;
					if(st[s[i]]==0)
						st.erase(s[i]);
					i++;

				}
			}
			if(ans!=INT_MAX)
			cout<<ans<<"\n";
			else
				cout<<"0\n";

		}


	return 0;
}



