#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		vector<int> num(n);
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}
		int i=0,j=num.size()-1,sereja=0,dima=0,c=0;
			while(i<=j)
			{
				if(c==0)
				{
					if(num[i]>=num[j])
					{
						sereja+=num[i];
						i++;
					}
					else{
						sereja+=num[j];
						j--;
					}
					c=1;
				}
				else{
					if(num[i]>=num[j])
					{
						dima+=num[i];
						i++;
					}
					else{
						dima+=num[j];
						j--;
					}
					c=0;

				}
			}
			cout<<sereja<<" "<<dima;


	return 0;
}



