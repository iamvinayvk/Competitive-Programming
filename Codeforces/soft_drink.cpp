#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int n,k,l,c,d,p,nl,np;
		cin>>n>>k>>l>>c>>d>>p>>nl>>np;
		cout<<min(min((k*l)/nl,c*d),p/np)/n;


	return 0;
}



