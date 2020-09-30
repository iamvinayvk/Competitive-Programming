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
		int times=0;
		for(int i=1;i<=n;i++)
		{
			times+=(((n-1)/i));

		}
		cout<<times;


	return 0;
}



