#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int n;
		cin>>n;
		int t1=0,t2=0,t3=0;
		vector<int> v1,v2,v3;
		for(int i=0;i<n;i++)
		{
			int input;
			cin>>input;
			if(input==1)
			{
				t1++;
				v1.push_back(i+1);
			}
			else if(input==2)
			{
				t2++;
				v2.push_back(i+1);
			}
			else
			{
				t3++;
				v3.push_back(i+1);
			}

		}
		int minimum=min(min(t1,t2),t3);
		if(minimum==0)
			cout<<0;
		else
		{
			cout<<minimum<<"\n";
			for(int i=0;i<minimum;i++)
			{
				cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";
			}
		}



	return 0;
}



