#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){

		fast
		w(t)
		{

		    ll n,k;
		    cin>>n>>k;
		    if(n-(k-1)>0&&(n-(k-1))%2==1)
            {

                cout<<"YES\n";
                for(ll i=0;i<k-1;i++)
                    cout<<"1 ";
                cout<<n-(k-1)<<"\n";
                continue;
            }
            if(n-2*(k-1)>0&&(n-2*(k-1))%2==0)
            {

                cout<<"YES\n";
                for(ll i=0;i<k-1;i++)
                    cout<<"2 ";
                cout<<n-2*(k-1)<<"\n";
                continue;
            }
            else
                cout<<"NO\n";
		}


	return 0;
}



