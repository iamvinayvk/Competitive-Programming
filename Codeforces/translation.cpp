#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()



int main(){
	
		fast
		string s,t;
		cin>>s>>t;
		reverse(all(s));
		s==t?cout<<"YES":cout<<"NO";


	return 0;
}



