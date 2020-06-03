
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){

		fast
		w(t)
		{

		    ll n,k;
		    cin>>n>>k;
		    ll need = (k-1)/(n-1);
		    cout<<k+need<<"\n";
		}

	return 0;
}



