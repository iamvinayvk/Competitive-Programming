#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n,k;
		cin>>n>>k;
		vector<int> players(n);
		for(int i=0;i<n;i++)
		{
			cin>>players[i];
		}
		int val=players[k-1];
		reverse(players.begin(),players.end());
		auto lower=lower_bound(players.begin(),players.end(),val);
	
		
		if(val==0)
		{	int count=0;
			for(int i=0;i<n;i++)
			{
				if(players[i]>val)
				{
					count++;
				}
			}
			cout<<count;
		}

		else
		cout<<players.end()-lower;



	return 0;
}



