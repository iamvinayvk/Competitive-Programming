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
			ll n,c;
			cin>>n>>c;
			for(int i=0;i<n;i++)
			{
				int input;
				cin>>input;
				c-=input;
			}
			if(c<0)
			{
				cout<<"No\n";
			}
			else
				cout<<"Yes\n";
		}


	return 0;
}



