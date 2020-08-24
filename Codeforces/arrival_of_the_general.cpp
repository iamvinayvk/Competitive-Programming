#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		pair<int,int> m[2];
		m[0].first=0;
		m[1].first=999;
		for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			if(k>m[0].first){
				m[0].first=k;
				m[0].second=i;
			}
			if(k<=m[1].first){
				m[1].first=k;
				m[1].second=i;
			}
		}
		if(m[1].second>m[0].second)
		{
			cout<<(n-m[1].second)+(m[0].second)-1;

		}
		else
			cout<<(n-m[1].second)+(m[0].second)-2;


	return 0;
}



