#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007

int reverse(int a)
{
	int reversed=0;
	while(a>0)
	{
		reversed*=10;
		reversed+=a%10;
		a=a/10;
	}
	return reversed;
}

int main(){
	
		fast
		w(t)
		{
			int a,b;
			cin>>a>>b;
			a=reverse(a);
			b=reverse(b);
			cout<<reverse(a+b)<<"\n";
		}


	return 0;
}



