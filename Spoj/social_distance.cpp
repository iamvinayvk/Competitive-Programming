/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/26/2020 12:10:38 AM
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
			string s;
			cin>>s;
			vector<int> zeroes;
			int f=0,l=0;
			for(int i=0;i<n;i++)
			{
				if(s[i]=='1')
					break;
				f++;
			}
			for(int i=n-1;i>=0;i--)
			{
				if(s[i]=='1')
					break;
				l++;
			}
			int z=0;
			for(int i=f;i<n-l;i++)
			{

				if(s[i]=='1')
				{
					if(z!=0)
						zeroes.push_back(z);
					z=0;
				}
				else
				{
					z++;
				}
			}
			if(z!=0)
				zeroes.push_back(z);
			ll ans=0;
			if(f>k)
			{
				// cout<<"f:"<<f<<"\n";
				if(f==n&&f>(k+1))
					ans+=2;
				if(f==n&&f>(k+1))
				f-=2*k,f-=2;
				else
					f-=k;
				if(f>0)
				ans+=(f+k)/(k+1);
				
				f=0;
			}
		
			else if((f<=k&&f==n))
			{
				ans+=1;
				f=0;
			}
			if(l>k&&l!=n)
			{
				l-=k;
				ans+=(l+k)/(k+1);
				l=0;
			}
		
			for(int i=0;i<zeroes.size();i++)
			{
				zeroes[i]-=2*k;
				
				if(zeroes[i]>0)
					ans+=(zeroes[i]+k)/(k+1);
				
				// cout<<"zeroes[i]"<<zeroes[i];
			}
			cout<<ans<<"\n";
		}


	return 0;
}



