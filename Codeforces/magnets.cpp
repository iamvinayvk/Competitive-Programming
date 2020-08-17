#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		int changes=0;
		string previous="filled";
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			if(previous!=s&&i>0)
			{
				changes++;
			}
			previous=s;
		}
		cout<<changes+1;



	return 0;
}



