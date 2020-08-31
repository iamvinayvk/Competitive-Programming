#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll n,k;
		cin>>n>>k;
		if(n%2==1)
		{
			if((n/2)+1<k)
			{
				cout<<2*(k-((n/2)+1));
			}
			else
			{
				cout<<(2*k)-1;
			}
		}
		else{
			if((n/2)<k)
			{
				cout<<2*(k-(n/2));
			}
			else{
				cout<<(2*k)-1;
			}
		}


	return 0;
}



