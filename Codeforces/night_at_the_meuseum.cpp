#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string s;
		cin>>s;
		int counter=0;
		char previous='a';
		char base='a';
		for(int i=0;i<s.size();i++)
		{
			
				counter+=min(abs((previous-base)-(s[i]-base)),(26-abs(((previous-base)-(s[i]-base)))));
			
			
			previous=s[i];
		}
		cout<<counter;


	return 0;
}



