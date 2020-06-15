#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			long long int a,b;
			cin>>a>>b;
			if(a==0||b==0)
			{
				cout<<"0\n";
			
			}
			else if(a/2>b||b/2>a){
				cout<<(a<b?a:b)<<"\n";
			}
			else{
				cout<<(a+b)/3<<"\n";
			}
		}


	return 0;
}



