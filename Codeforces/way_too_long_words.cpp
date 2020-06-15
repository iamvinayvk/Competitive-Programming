#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			string s;
			cin>>s;

			if(s.size()>10)
			{
				cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
			}
			else
				cout<<s<<"\n";
		}


	return 0;
}



