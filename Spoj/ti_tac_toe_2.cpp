/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/5/2021 6:26:06 PM
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
char mat[3][3];
bool checkR(char X)
{
	for(int i=0;i<3;i++)
	{
		if((mat[i][0]==X)&&(mat[i][1]==X)&&(mat[i][2]==X))
			return true;
	}
	return false;
}
bool checkC(char X)
{
	for(int i=0;i<3;i++)
	{
		if((mat[0][i]==X)&&(mat[1][i]==X)&&(mat[2][i]==X))
			return true;
	}
	return false;
}
bool checkD(char X)
{
	
		if((mat[0][0]==X)&&(mat[1][1]==X)&&(mat[2][2]==X))
			return true;
		if((mat[0][2]==X)&&(mat[1][1]==X)&&(mat[2][0]==X))
			return true;
		return false;
	
}


int main(){
	
		fast
		string s;
		cin>>s;
		while(s!="end")
		{
			ll x=0,o=0,k=0;
			for(ll i=0;i<3;i++)
			{
				for(ll j=0;j<3;j++)
				{
					mat[i][j]=s[k];
					k++;
					if(mat[i][j]=='X')
						x++;
					if(mat[i][j]=='O')
						o++;

				}
			}
			bool xwins=false;
			bool owins=false;
			// cout<<"cRx: "<<checkR('X');
			// cout<<"cDx: "<<checkD('X');
			// cout<<"cCx: "<<checkC('X');
			// cout<<"cRx: "<<checkR('O');
			// cout<<"cDx: "<<checkD('O');
			// cout<<"cCx: "<<checkC('O');
			xwins=(checkR('X')||checkD('X')||checkC('X'));
			owins=(checkR('O')||checkD('O')||checkC('O'));
			// cout<<xwins<<" "<<owins<<"\n";
			bool possible=true;
			if(xwins)
			{
				if(x==o+1)
					possible=true;
				else
					possible=false;
			}
			if(owins)
			{
				if(x==o)
					possible=true;
				else
					possible=false;
			}
			if(xwins&&owins)
				possible=false;
			if((!xwins)&&(!owins))
			{
				if(x==o+1||x==o)
					possible=true;
				else
					possible=false;

			}
			if(possible)
				cout<<"valid\n";
			else
				cout<<"invalid\n";
			cin>>s;
		}


	return 0;
}



