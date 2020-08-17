#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string s;
		cin>>s;
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='-'&&s[i+1]=='.')
			{	

				cout<<1;
				i++;
				
			}
			else if(s[i]=='.')
			{
				cout<<0;
				
			}
			else if(s[i]=='-'&&s[i+1]=='-'){
				cout<<2;
				i++;

			}
		}

	return 0;
}



