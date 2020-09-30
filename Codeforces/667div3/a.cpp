#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			ll a,b;
			cin>>a>>b;
			ll diff=abs(a-b);
			ll count=diff/10;
			if(diff%10==0)
				cout<<count<<"\n";
			else
				cout<<count+1<<"\n";
		}


	return 0;
}



