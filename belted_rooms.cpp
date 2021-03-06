/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/23/2020 9:23:57 PM
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
			ll n;
			cin>>n;
			string s;
			cin>>s;
			int all_rooms_left=0;
			int all_rooms_right=0;
			int off_rooms=0;
			int flag=0;
			for(int i=0;i<n;i++)
				{
					if(s[i]=='>')
					{
						all_rooms_left++;
						flag=0;
					}
					if(s[i]=='<')
					{
						all_rooms_right++;
						flag=0;
					}
					if(s[i]=='-')
					{
						all_rooms_left++;
						all_rooms_right++;
						if(flag==1)
						off_rooms++;
						if(flag==0)
							off_rooms+=2;
						flag=1;
					}
				}
				if(s[0]=='-'&&s[n-1]=='-')
				{
					off_rooms--;
				}
				if(all_rooms_right==n||all_rooms_left==n)
					cout<<n<<"\n";
				else
					cout<<off_rooms<<"\n";

			
			

		}
	return 0;
}



