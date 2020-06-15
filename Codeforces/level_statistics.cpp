#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int n;
			cin>>n;
			vector<pair<int,int>> score(n);
			for(int i=0;i<n;i++)
			{
				cin>>score[i].first;
				cin>>score[i].second;

			}
		
			int ans=1;
			if(n==1&&score[0].first<score[0].second)
			{
				cout<<"NO\n";
				continue;
			}
			for(int i=0;i<n-1;i++)
			{
				if((score[i].first>score[i+1].first||score[i].second>score[i+1].second||((score[i+1].first-score[i].first)<(score[i+1].second-score[i].second)))||(score[i].first<score[i].second||score[i+1].first<score[i].second))
					ans=0;
			}
			

			
			if(ans)
			{
				cout<<"YES\n";
			}
			else
			{
				cout<<"NO\n";
			}
		}


	return 0;
}



