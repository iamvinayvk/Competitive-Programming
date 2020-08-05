#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		int sum1=0,sum2=0,sum3=0;
		for(int i=0;i<n;i++)
		{
			int one,two,three;
			cin>>one>>two>>three;
			sum1+=one;
			sum2+=two;
			sum3+=three;

		}
		if(sum1==0&&sum2==0&&sum3==0)
		{
			cout<<"YES";
		}
		else
			cout<<"NO";


	return 0;
}



