#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		int value=0;
		while(n--)
		{
			string x;
			cin>>x;
			if(x[0]=='+'||x[2]=='+')
			{
				value++;
				
			}
			else{
				value--;
			}
		}
		cout<<value;


	return 0;
}



