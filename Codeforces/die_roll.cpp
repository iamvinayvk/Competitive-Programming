#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int y,w;
		cin>>y>>w;
		int ans;
		if(y>w)
		{
			 ans=6-(y-1);

		}
		else{
			ans=6-(w-1);
		}
		if(ans==1)
		{
			cout<<"1/6";
		}
		else if(ans==2)
		{
			cout<<"1/3";
		}
		else if(ans==3)
		{
			cout<<"1/2";
		}
		else if(ans==4)
		{
			cout<<"2/3";
		}
		else if(ans==5)
		{
			cout<<"5/6";
		}
		else if(ans==6)
		{
			cout<<"1/1";
		}


	return 0;
}



