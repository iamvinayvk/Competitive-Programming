#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string s;
		getline(cin,s);
		set<char> s1;

		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{	
				
				s1.insert(s[i]);
			}
		}
		cout<<s1.size();


	return 0;
}



