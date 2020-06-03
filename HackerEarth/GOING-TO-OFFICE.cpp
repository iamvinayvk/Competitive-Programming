
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		ll d,oc,of,od,cs,cb,cm,cd;
		cin>>d>>oc>>of>>od>>cs>>cb>>cm>>cd;
		ll a=oc+(d-of)*od;
		ll b=cb+(d/cs)*cm+d*cd;
		a<=b?cout<<"Online Taxi":cout<<"Classic Taxi";




	return 0;
}



