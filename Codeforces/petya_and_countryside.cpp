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
		vector<int> a(n+5);
		for(int i=0;i<n;i++)
			cin>>a[i];
		int max_element=0;
	
		for(int i=0;i<n;i++)
		{
			int left=0;
			int right=0;
			int previous=a[i];
			
			for(int j=i;j>=0;j--)
			{
				if(previous<a[j])
					break;
				left++;
				previous=a[j];
			}
			previous=a[i];
			for(int j=i+1;j<n;j++)
			{
				if(previous<a[j])
					break;
				right++;
				previous=a[j];
			}
			max_element=max(max_element,left+right);
			// cout<<"("<<i<<")"<<" max: "<<max_element<<" below_max: "<<below_max<<"\n";
		
		}
		cout<<max_element;


	return 0;
}



