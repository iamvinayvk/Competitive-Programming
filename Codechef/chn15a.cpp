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
			ll n,k;
			cin>>n>>k;
			int count=0;
			for(int i=0;i<n;i++)
			{
				int input;
				cin>>input;
				input+=k;
				if(input%7==0)
					count++;
			}
			cout<<count<<"\n";

		}


	return 0;
}



