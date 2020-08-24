#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		if(n%2)
			cout<<"-1";
		else{
			for(int i=1;i<=n/2;i++)
				cout<<2*i<<" "<<2*i-1<<" ";
		}


	return 0;
}



