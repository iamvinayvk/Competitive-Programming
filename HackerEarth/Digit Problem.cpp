#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int 



int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
		string s;
		ll y;
		cin>>s>>y;
		if(y==0)
		{
			cout<<s;
			return 0;
		}
		for(int i=0;i<y;i++)
		{	if(s[i]=='9')
	{
		y++;
		continue;
	}
			s[i]='9';
		}
		cout<<s;
	return 0;
}



