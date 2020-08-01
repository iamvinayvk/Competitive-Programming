#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n,h;
		cin>>n>>h;
		int width=0;
		for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			if(k>h)
			{
				width+=2;
			}
			else
			{
				width+=1;
			}
		}
		cout<<width;


	return 0;
}



