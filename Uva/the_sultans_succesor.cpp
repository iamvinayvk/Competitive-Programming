/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/13/2020 12:42:51 AM
  *
  */

#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define vi vector<int> 
#define vll vector<long long>
#define FOR(start,end,increment) for(ll i=start;i<end;i+=increment)

ll gcd(ll a, ll b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}
int boards[8][8];
int scores[8][8];
bool canBePlaced(int boards[8][8],int i,int j,int n)
{
	for(int row=0;row<i;row++)
	{
		if(boards[row][j]==1)
			return false;
	}
	int x=i;
	int y=j;
	while(x>=0&&y>=0)
	{
		if(boards[x][y]==1)
			return false;
		x--;
		y--;
	}
	x=i;
	y=j;
	while(x>=0&&y<n)
	{
		if(boards[x][y]==1)
			return false;
		x--;
		y++;
	}
	return true;
}

bool solve8queen(int boards[8][8] , int scores[8][8],int i,int n,int &high,int sum)
{
	if(i==8)
	{
		// for(int k=0;k<8;k++)
		// 	{
		// 		for(int z=0;z<8;z++)
		// 			cout<<boards[k][z];
		// 		cout<<"\n";
		// 	}

		high=max(high,sum);
		return false;
	}
	for(int j=0;j<8;j++)
	{
			
		if(canBePlaced(boards,i,j,n)==true)
		{
			boards[i][j]=1;
			sum+=scores[i][j];
			// for(int k=0;k<8;k++)
			// {
			// 	for(int z=0;z<8;z++)
			// 		cout<<boards[k][z];
			// 	cout<<"\n";
			// }
			// cout<<"i: "<<i<<" j : "<<j<<'\n';
			// cout<<"sum: "<<sum<<"\n";
			bool solvable=solve8queen(boards,scores,i+1,n,high,sum);
			if(solvable==true)
			{
				// cout<<"i: "<<i<<" j : "<<j<<'\n';
				return true;
			}
			boards[i][j]=0;
			// cout<<"i: "<<i<<" j : "<<j<<'\n';
			sum-=scores[i][j];
		}
		
		
			
		

	}
	return false;

}

int main(){
	
		fast
		w(t)
		{
			// int boards[8][8];
			// int scores[8][8];
			// int s=1;
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<8;j++)
				{
					boards[i][j]=0;
					cin>>scores[i][j];
					// s++;
				}
			}
			int high=0;

			bool solved=solve8queen(boards,scores,0,8,high,0);
			
			printf("%5d\n",high);

		}


	return 0;
}



