#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string num1,num2;
		cin>>num1>>num2;
		for(int i=0;i<num1.size();i++)
		{
			if(num1[i]==num2[i])
				cout<<"0";
			else
				cout<<"1";
		}


	return 0;
}



