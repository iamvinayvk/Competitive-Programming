/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/26/2020 10:53:26 PM
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
// ll coin=0;
// void combinationUtil(string arr, int n, int r, 
//                      int index, char data[], int i); 
  
// // The main function that prints all combinations of  
// // size r in arr[] of size n. This function mainly 
// // uses combinationUtil() 
// void printCombination(string arr, int n, int r) 
// { 
//     // A temporary array to store all combination 
//     // one by one 
//     char data[r]; 
  
//     // Print all combination using temprary array 'data[]' 
//     combinationUtil(arr, n, r, 0, data, 0); 
// } 
  
//  arr[]  ---> Input Array 
//    n      ---> Size of input array 
//    r      ---> Size of a combination to be printed 
//    index  ---> Current index in data[] 
//    data[] ---> Temporary array to store current combination 
//    i      ---> index of current element in arr[]     
// void combinationUtil(string arr, int n, int r, int index, 
//                      char data[], int i) 
// { 
//     // Current cobination is ready, print it 
//     if (index == r) { 
//         if(data[0]==data[r-1])
//         {
//         	cout<<data[0]<<" "<<data[1]<<" "<<data[2]<<"\n";
//         	coin++;
//         }
//         return; 
//     } 
  
//     // When no more elements are there to put in data[] 
//     if (i >= n) 
//         return; 
  
//     // current is included, put next at next location 
//     data[index] = arr[i]; 
//     combinationUtil(arr, n, r, index + 1, data, i + 1); 
  
//     // current is excluded, replace it with next 
//     // (Note that i+1 is passed, but index is not 
//     // changed) 
//     combinationUtil(arr, n, r, index, data, i + 1); 
// } 

int main(){
	
		fast
		w(t)
		{
			string s;
			cin>>s;
			map<char,ll> m;
			ll coin=0;
			for(int i=0;i<s.size();i++)
			{
				m[s[i]]++;
			}
			ll e=0,o=0;
			for(auto x:m)
			{
				if(x.S%2==0)
				{
					e+=x.S;
				}
				else
				{
					o+=x.S;
				}
			}
			while(e>2||o>2)
			{
				if(o>0)
				{
					o-=1;
					coin++;
					e-=2;

				}
				else if(e>2)
				{
					coin++;
					e-=3;
				}

			}
			cout<<coin<<"\n";
		}


	return 0;
}



