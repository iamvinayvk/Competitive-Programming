#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		int recruited=0;
		int untreated=0;
		for(int i=0;i<n;i++)
		{
			int j;
			cin>>j;
			if(j==-1)
			{
				if(recruited<=0)
				{
					untreated++;
				}
				else{
					recruited--;
				}
			}
			else{
				recruited+=j;
			}
		}
		cout<<untreated;

	return 0;
}



