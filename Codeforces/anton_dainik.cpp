#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
	    string s;
	    cin>>s;
	    int a=0,d=0;
	    for(int i=0;i<s.size();i++)
	    {
	    	s[i]=='A'?a++:d++;
	    }
	    if(a==d)
	    {
	    	cout<<"Friendship";
	    }
	    else if(a>d)
	    {
	    	cout<<"Anton";
	    }
	    else {
	    	cout<<"Danik";
	    }


	return 0;
}



