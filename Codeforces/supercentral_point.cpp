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
		pair<int,int> p[n];
		vector<int> u(n),l(n),d(n),r(n);
		for(int i=0;i<n;i++)
			cin>>p[i].first>>p[i].second;
		for(int i=0;i<n;i++)

		{
			for(int j=0;j<n;j++)
			{
				if(p[i].first>p[j].first&&p[i].second==p[j].second)
					l[i]=1;
				else if(p[i].first<p[j].first&&p[i].second==p[j].second)
					r[i]=1;
				else if(p[i].first==p[j].first&&p[i].second<p[j].second)
					d[i]=1;
				else if(p[i].first==p[j].first&&p[i].second>p[j].second)
					u[i]=1;


			}


		}
		int sp=0;
		for(int i=0;i<n;i++)

		{
			if(u[i]&&l[i]&&r[i]&&d[i])
				sp++;
		}
		cout<<sp;


	return 0;
}



