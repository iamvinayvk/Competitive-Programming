#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int y;
		cin>>y;
		
		while(y++)
		{
			int d1=y/1000;
			int d2=(y/100)%10;
			int d3=(y/10)%10;
			int d4=y%10;
			if(d1!=d2&&d1!=d3&&d1!=d4&&d2!=d3&&d2!=d4&&d3!=d4)
			{
				cout<<y;
				break;
			}
		}


	return 0;
}



