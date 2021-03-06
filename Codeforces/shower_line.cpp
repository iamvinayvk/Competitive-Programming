/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/1/2020 7:49:27 PM
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
		
			ll g[6][6];
			for(int i=1;i<=5;i++)
			{
				for(int j=1;j<=5;j++)
					cin>>g[i][j];
			}
			string s="12345";
			ll ans=0;
			do
			{
				ll local_ans=(g[s[0]-'0'][s[1]-'0']+g[s[1]-'0'][s[0]-'0']+g[s[2]-'0'][s[3]-'0']+g[s[3]-'0'][s[2]-'0']);
				local_ans+=(g[s[1]-'0'][s[2]-'0']+g[s[2]-'0'][s[1]-'0']+g[s[3]-'0'][s[4]-'0']+g[s[4]-'0'][s[3]-'0']);
				local_ans+=(g[s[2]-'0'][s[3]-'0']+g[s[3]-'0'][s[2]-'0']);
				local_ans+=(g[s[4]-'0'][s[3]-'0']+g[s[3]-'0'][s[4]-'0']);
				ans=max(ans,local_ans);

			} while(next_permutation(all(s)));
			cout<<ans;

		


	return 0;
}



