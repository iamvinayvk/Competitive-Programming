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
			vector<int> score(n);
			for(int i=0;i<n;i++)
			{
				cin>>score[i];
			}
			sort(score.begin(),score.end());
			int min_diff=INT_MAX;
			for(int i=0;i<n-1;i++)
			{
				if(min_diff>(score[i+1]-score[i]))
					min_diff=(score[i+1]-score[i]);
			}
			cout<<min_diff<<"\n";
		}


	return 0;
}



