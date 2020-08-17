#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int d,h;
			cin>>d>>h;
			if(h>=ceil((float)d/2))
			{
				cout<<1<<"\n";
			}
			else
				cout<<0<<"\n";
		}


	return 0;
}



