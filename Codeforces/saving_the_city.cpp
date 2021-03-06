/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/2/2020 9:00:55 PM
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
			ll a,b;
			cin>>a>>b;
			string s;
			cin>>s;
			int flag=0;
			ll k=0;
			ll count1=0,count0=0,res=0;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='1'&&flag==0)
				{
					count1++;
					flag=1;
					k=1;
					res+=(min(a,count0>0?count0*b:INT_MAX));
					count0=0;
					
				
				
				}
				if(s[i]=='0'&&k)
				{
					count0++;
					flag=0;


				}
				
				
			}
			
			
			for(int i=s.size()-1;i>=0;i--)
			{
				if(s[i]=='0')
				{
					count0--;
					
				}
				if(s[i]=='1')
				{
					break;
				}
			}
			if(count0<0)
			{
				count0=INT_MAX;
			}
			// cout<<"count0: "<<count0<<"count1: "<<count1<<"\n";
			// res=min(count1*a,(count0*b)+a);
			cout<<res<<"\n";
		}


	return 0;
}



