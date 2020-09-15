#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			int n;
			cin>>n;
			int mat[n+5][n+5];
			int row=0,col=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cin>>mat[i][j];

					if(mat[i][j]==(j+1)+(n*i))
						mat[i][j]=1;
					else
						mat[i][j]=0;

					// cout<<mat[i][j]<<" ";
					
				}
				// cout<<"\n";
			}
			int count=0;
			while(n>0)
			{
				n--;
				if(mat[n][0]==0)
				{
					// cout<<n<<"--\n";
					count++;
					
						for(int i=1;i<n;i++)
						{
							// cout<<"iwashere\n";

							if(mat[i][0]==0)
								mat[i][0]=1;
							else
								mat[i][0]=0;

						}
						// for(int i=0;i<4;i++)
						// {
						// 	for(int j=0;j<4;j++)
						// 	{
						// 		cout<<mat[i][j]<<" ";
						// 	}
						// 	cout<<"\n";
						// }
					
				}
			}
			cout<<count<<"\n";

		}


	return 0;
}



