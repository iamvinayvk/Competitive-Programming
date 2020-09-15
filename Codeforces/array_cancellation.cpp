#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			ll pos_sum=0;
			ll neg_sum=0;
			for(ll i=0;i<n;i++)
			{
				ll input;
				cin>>input;
				if(input>0)
				{
					pos_sum+=abs(input);
				}
				else 
				{
					if(pos_sum>0)
					{
						pos_sum+=input;
						if(pos_sum<0)
						{
							neg_sum+=abs(pos_sum);
							pos_sum=0;
						}

					}
					else
					{
						neg_sum+=abs(input);
					}
				}
			}
			cout<<neg_sum<<"\n";
		}


	return 0;
}



