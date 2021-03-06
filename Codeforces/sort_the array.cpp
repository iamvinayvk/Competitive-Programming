/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/11/2020 1:33:33 AM
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
		ll n;
		cin>>n;
		vll a(n+1);
		for( ll i=0;i<n;i++)
			cin>>a[i];
		a[n]=INT_MAX;
		ll st=1,end=0,tmp=1,flag=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>a[i+1]&&flag==0)
			{
				st=i+1;
				flag=1;
			}
			if(a[i]<a[i+1]&&flag==1)
			{
				end=i+1;
				break;
			}


		}
		// cout<<st<<" "<<end<<"\n";
		reverse(a.begin()+st-1,a.begin()+(end));
		// for(int i=0;i<n;i++)
		// 	cout<<a[i]<<" ";
		if(end==0&&flag==0)
			end=1;
		if(!is_sorted(all(a)))
			cout<<"no\n";
		// if(end==0&&flag==0)
		// 	end=n;
		else
		{
			cout<<"yes\n";
			cout<<st<<" "<<end<<"\n";
		}

		


	return 0;
}



