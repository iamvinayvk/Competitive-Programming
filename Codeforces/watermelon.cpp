#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
		
	#ifndef ONLINE_JUDGE
		freopen(“input.txt”, “r”, stdin);
		freopen(“output.txt”, “w”, stdout);
	#endif
		fast
		int w;
		cin>>w;
		if(w%2==0&&w!=2)
			cout<<"YES";
		else
			cout<<"NO";


	return 0;
}



