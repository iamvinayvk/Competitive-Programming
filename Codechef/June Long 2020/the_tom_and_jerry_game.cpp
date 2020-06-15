#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			long long int ts;
			cin>>ts;
			while(ts%2==0)
			{
				
				ts=ts>>1;
				
			}
			cout<<(ts>>1)<<"\n";


		}


	return 0;
}



