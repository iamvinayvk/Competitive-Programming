#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		double a,b,c;
		cin>>a>>b>>c;
		double s1,s2,s3;
		s1=sqrt(a*b/c);
		s2=sqrt(a*c/b);
		s3=sqrt(b*c/a);
		cout<<4*(s1+s2+s3);



	return 0;
}



