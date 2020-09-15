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
		ll m=0;
		ll k=10*n;

		if(n>=2){
		m=(10*(n-2))%mod;
		m*=64;

		m+=2;




	}
		
		cout<<m%mod;


	return 0;
}



