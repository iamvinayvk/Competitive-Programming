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
			ll n;
			cin>>n;
			ll min=INT_MAX,sum=0;
			for(int i=0;i<n;i++)
			{
				int input;
				cin>>input;
				if(input<min)
					min=input;
				sum+=input;
			}
			cout<<sum-(n*min)<<"\n";
		}


	return 0;
}



