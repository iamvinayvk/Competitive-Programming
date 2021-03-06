/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/27/2021 8:04:30 PM
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
			map<char,int> m;
			for(int i=0;i<s.size();i++)
			{
				m[s[i]]++;
			}
			int one=0;
			int even=0,odd=0;
			if(s.size()==1)
				cout<<"NO\n";
			else
			{
			for(auto x:m)
			{
				// cout<<x.first<<" chal "<<x.second<<"\n";
				if(x.second==1)
					one++;
				else if(x.second%2==0)
					even++;
				else
					odd++;
				
			}
			for(auto x:m)
			{
				// cout<<x.first<<" chal "<<x.second<<"\n";
				
				if(x.second%2==0)
					{
						one-=(x.second/2);
					}
				else
					{
						if(x.second%2&&(x.second/2>1))
						{
							one-=((x.second/2)-1);
						}
					}
				
			}
			// cout<<one<<" "<<even<<"\n";
			// even=even/2;
			// int oddpair=odd/2;
			if(one<=0)
				cout<<"YES\n";
			else
			{
				// one-=even;
				// if(one<=oddpair-1)
				// 	cout<<"YES\n";
				
				cout<<"NO\n";
			}
		}
		}


	return 0;
}



