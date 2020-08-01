#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int l,b;
		cin>>l>>b;
		int y=0;
		while(l<=b)
		{
			y+=1;
			l=l*3;
			b=b*2;
		}
		cout<<y;


	return 0;
}



