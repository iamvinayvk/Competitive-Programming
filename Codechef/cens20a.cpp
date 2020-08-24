#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		ll n,m;
		cin>>n>>m;
		string a[n+5];
		for(int i=0;i<n;i++){
			
				string s;
				cin>>s;
				a[i]=s;
		}
		int d[n+5][m+5];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				d[i][j]=0;
		}
		ll q;
		cin>>q;
		while(q)
		{
			ll x1,y1,x2,y2;
			cin>>x1>>y1>>x2>>y2;
			d[x1-1][y1-1]++;
			if(x2<n&&y2<m)
				d[x2][y2]++;
			if(x2<n)
				d[x2][y1-1]--;
			if(y2<m)
				d[x1-1][y2]--;
			q--;
		}
		for(int i=0;i<m;i++)
		{
			for(int j=1;j<n;j++)
			{
				d[j][i]+=d[j-1][i];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=1;j<m;j++)
			{
				d[i][j]+=d[i][j-1];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{	
				// cout<<d[i][j]<<" ";
				if(d[i][j]%2)
				{
					if(a[i][j]=='0')
						cout<<"1";
					else
						cout<<"0";
				}
				else
					cout<<a[i][j];
			}
			cout<<"\n";
		}


	return 0;
}



