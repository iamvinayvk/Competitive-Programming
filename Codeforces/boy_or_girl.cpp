#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		set<char> s;
		string str;
		cin>>str;
		for(int i=0;i<str.size();i++)
		{
			s.insert(str[i]);
		}

		
		if(s.size()%2==0)
			{
				cout<<"CHAT WITH HER!";
			}
		else{
			cout<<"IGNORE HIM!";
		}



	return 0;
}



