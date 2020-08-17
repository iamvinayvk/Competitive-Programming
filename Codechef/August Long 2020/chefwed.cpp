#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)

// int totalConflict(map<int,int>f,int tables)
// {
// 	int total=0;
// 	for(auto x:f)
// 	{
// 	// {	cout<<x.first<<" "<<x.second<<"\n";
// 		if(x.second>1&&(x.second-(tables-1))>1)
// 		{	
// 			total+=(x.second-(tables-1));
// 		}
// 	}
// 	total>=0?total=total:total=0;
// 	// cout<<total<<"---\n";
// 	return total;
// }

int main(){
	
		fast
		w(t)
		{
			int n,k;
			cin>>n>>k;
			vector<int> f(n);
			for(int i=0;i<n;i++)
			{	
				
				cin>>f[i];
				
			}
			
		
		int dp[n+5][n+5]={0};
		for(int i=1;i<=n;i++)
		{
			dp[i][0]=k*(i);
		}
		map<int,int> cont;
		for(int i=0;i<n;i++)
		{
			cont[f[i]]++;
		}
		for(int i=1;i<=n;i++)
		{
			map<int,int> rept;
			
			for(int j=1;j<=n;j++)
			{	
				rept[f[j-1]]++;
				
				if(rept[f[j-1]]<=i)
				{
					dp[i][j]=dp[i][j-1];

				}
				else if(rept[f[j-1]]<=(2*i)){
					dp[i][j]=2+dp[i][j-1];
					

				}
				else{
					dp[i][j]=1+dp[i][j-1];
				}
				
			}
							
		}
		
		
		
		
		// for(int i=0;i<=n;i++)
		// {
		// 	for(int j=0;j<=n;j++)
		// 	{
		// 		cout<<dp[i][j]<<" ";
		// 	}
		// 	cout<<"\n";
		// }
		int ifficiency=9999999;
		for(int i=1;i<=n;i++)
		{
			if(dp[i][n]<ifficiency)
			{
				ifficiency=dp[i][n];
			}
		}
		cout<<ifficiency<<"\n";
	}

	return 0;
}



