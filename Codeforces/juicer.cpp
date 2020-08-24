#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		ll n,b,d;
		cin>>n>>b>>d;
		ll empty=0,total=0;
		for(ll i=0;i<n;i++)
		{
			ll k;
			cin>>k;
			total+=k;
			
			if(k>b)
			{
				total-=k;
			}
			else if(total>d)
			{
				empty++;
				total=0;
			}


		}
		cout<<empty;


	return 0;
}



