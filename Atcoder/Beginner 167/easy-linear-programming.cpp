#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		ll max=0;
		if(a+b+c>=d)
		{
			
				if(a>d&&d>0)
				{
					cout<<a;
					return 0;
				}
				else if(a<d&&d>0)
				{
					max+=a;
					
					d=d-a;
					
				}
					if(d>0)
				{
					d=d-b;
				}
				if(d>0)
				{	
					max=max+d*(-1);
				}
				cout<<max;

			
		}


	return 0;
}



