#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		string s;
		cin>>s;
		int c=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
				c=1;
		}
		if(c)
			cout<<"YES";
		else
			cout<<"NO";



	return 0;
}



