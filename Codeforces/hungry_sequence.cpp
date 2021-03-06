/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/22/2020 11:49:52 PM
  *
  */

#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define vi vector<int> 
#define vll vector<long long>
#define FOR(start,end,increment) for(ll i=start;i<end;i+=increment)

ll gcd(ll a, ll b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}

bool prime[2000005];
void go(){
   for(int i=0;i<=2e6;i++) prime[i] = 1;
   prime[0] = prime[1] = 0;
   for(int i=2;i*i<=2e6;i++){
       if(prime[i]){
           for(int j=i*i;j<=2e6;j+=i){
               prime[j] = 0;
           }
       }
   }
}

int main(){
	
		fast
		ll n;
		cin>>n;
		go();
		for(int i=1;i<=2e6;i++){
        if(prime[i]) 
        {
        	cout<<i<<" ";
        	n--;
        }
        if(n == 0) break;
    }



	return 0;
}



