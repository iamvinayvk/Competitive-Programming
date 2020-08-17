#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int n,k;
			cin>>n>>k;
			vector<int> p(n);
			int min=-4,c=0;
			for(int i=0;i<n;i++)
			{
				cin>>p[i];
				if(k%p[i]==0&&p[i]<=k&&min<p[i])
				{
					min=p[i];
					c=1;
				}

			}
			if(c==1)
			{
				cout<<min<<"\n";
			}
			else
			{
				cout<<"-1\n";
			}

		}


	return 0;
}



