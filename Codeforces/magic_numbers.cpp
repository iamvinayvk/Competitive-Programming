#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll n;
		cin>>n;
		int c=1;
		while(n>0)
		{
			if(n%10==1)
			{
				n=n/10;
			}
			else if(n%100==14)
				n=n/100;
			else if(n%1000==144)
				n=n/1000;
			else {
				c=0;
				break;
			}
		}
		if(c)
			cout<<"YES";
		else 
			cout<<"NO";

	return 0;
}



