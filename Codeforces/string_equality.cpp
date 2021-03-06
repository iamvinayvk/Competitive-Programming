/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/22/2020 12:56:51 PM
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
			ll n,k;
			cin>>n>>k;
			string a,b;
			cin>>a>>b;
			map<char,int> mpa;
			map<char,int> mpb;
			char max_a='0', max_b='0';
			for(int i=0;i<n;i++)
			{
				mpa[a[i]]++,mpb[b[i]]++;
				if(a[i]>max_a)
					max_a=a[i];
				if(b[i]>max_b)
					max_b=b[i];
			}
			int flag=0;
			if(max_a>max_b)
				cout<<"No\n";
			else
			{
				for(auto j:mpa)
				{
					if(j.S%k==0)
						flag=1;
					else
					{
						flag=0;
						break;
					}
				}
				if(flag)
					cout<<"Yes\n";
				else
					cout<<"No\n";
			}


		}


	return 0;
}



