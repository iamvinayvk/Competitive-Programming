#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			long long int a,b,c,d;
			cin>>a>>b>>c>>d;
			if(b>=a)
			{
				cout<<b<<"\n";
			}
			else if(c-d<=0)
			{
				cout<<"-1\n";
			}
			else {
				unsigned long long int multiplier=ceil((double)(a-b)/(c-d));
				cout<<b+(multiplier*c)<<"\n";
			}
		}


	return 0;
}



