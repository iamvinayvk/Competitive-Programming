#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string s;
		cin>>s;
		transform(s.begin(),s.end(),s.begin(),::tolower);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
			{
				continue;
			}
			else{
				cout<<"."<<s[i];
			}
		}



	return 0;
}



