#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string str;
		cin>>str;
		int u=0,l=0;
		for(int i=0;i<str.size();i++)
		{
			if(isupper(str[i]))
				u++;
			else
				l++;
		}
		if(u>l)
		{
			transform(str.begin(),str.end(),str.begin(),::toupper);
			cout<<str;
		}
		else
		{
			transform(str.begin(),str.end(),str.begin(),::tolower);
			cout<<str;
		}

	return 0;
}



