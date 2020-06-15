#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			long long int x,y,a,b,money1=0,money2=0;
			cin>>x>>y>>a>>b;
			money2=a*(x+y);
			
			money1=x<=y?((b*x)+(a*(y-x))):((b*y)+(a*(x-y)));
			cout<<((money1<=money2)?money1:money2)<<"\n"; 
		}


	return 0;
}



