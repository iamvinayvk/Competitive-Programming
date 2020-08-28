#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int n;
		cin>>n;
		int max=0;
		int pass=0;
		for(int i=0;i<n;i++)
		{
			int out,in;
			cin>>out>>in;
			pass-=out;
			pass+=in;
			if(pass>max)
				max=pass;
		}
		cout<<max;


	return 0;
}



