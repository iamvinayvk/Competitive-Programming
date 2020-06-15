#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int a,b;
			cin>>a>>b;

			if(a>b)
			{
				if(b*2>a)
				{
					cout<<(b*2)*(b*2)<<"\n";
				}
				else
				{
					cout<<a*a<<"\n";
				}
			}
			else{
				if(a*2>b)
				{
					cout<<(a*2)*(a*2)<<"\n";
				}
				else
				{
					cout<<b*b<<"\n";
				}
			}
		}


	return 0;
}



