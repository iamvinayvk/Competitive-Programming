/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/17/2020 1:08:42 AM
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



int main(){
	
		fast
		w(t)
		{
			vector<string> mat(9);
			for(int i=0;i<9;i++)
			{
				
					cin>>mat[i];
					for(int j=0;j<9;j++)
					{
					if(mat[i][j]=='9')
						mat[i][j]='8';
					
					}
				cout<<mat[i];
				cout<<"\n";
			}


		}


	return 0;
}



