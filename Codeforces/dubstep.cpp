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





int main(){
	
		fast
		string s;
		cin>>s;
		int i=0;
		int flag=0;
		string ans="";
		while(i<s.length())
		{
			
			if((s[i]=='W')&&(s[i+1]=='U')&&(s[i+2]=='B'))
			{
				if(flag==1)
				{
					flag=0;
					ans+=" ";
				}
				i+=3;
			}
			else
			{
				ans+=s[i];
				i++;
				flag=1;
			}


		}
		cout<<ans;


	return 0;
}



