#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string s,t;
		cin>>s>>t;
		int pos=1;
		for(int i=0;i<t.size();i++)
		{
			if(t[i]==s[pos-1])
			{
				pos++;
			}
		}
		cout<<pos;



	return 0;
}



