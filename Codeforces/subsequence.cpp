#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)

// void printSubsequences(vector<int> arr, int index, 
// 					vector<int> subarr,map<int,int>& n) 
// { 



 	
// 	if (index == arr.size()) 
// 	{ 	



// 		int l = subarr.size(); 
// 		if (l != 0) 
// 			{	int max1=0,max=0;
// 				map<int,int> m;
// 				for(int i=0;i<l;i++)
// 				{
// 				// {	cout<<subarr[i]<<",";
// 					m[subarr[i]]++;
// 					if(max1<m[subarr[i]]&&max1!=m[subarr[i]]){
// 						max=subarr[i];
// 						max1=m[subarr[i]];
						

// 					}
// 				}
// 				// cout<<"\n";
// 				n[max]++;
// 			}
// 	} 
// 	else
// 	{ 
		
// 		printSubsequences(arr, index + 1, subarr,n); 

// 		subarr.push_back(arr[index]); 

		
// 		printSubsequences(arr, index + 1, subarr,n); 
// 	} 
// 	return; 
// } 



int main(){
	
		fast
		w(t){
			int n;
			cin>>n;

		vector<int> arr(n);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		} 
	
		map<int,int> k;

		
		for(int i=1;i<pow(2,n);i++)
			{
				int max1=0,max=0;
				map<int,int> m;
				for(int j=0;j<arr.size();j++)
				{
				
					if(i&(1<<j))
					{
						// cout<<arr[j]<<",";
						m[arr[j]]++;
						if(max1<m[arr[j]]&&max1!=m[arr[j]]){
						
						max=arr[j];
						max1=m[arr[j]];
						

					}
				}
				
			}
			// cout<<"\n";
				k[max]++;
		}
		for(int i=1;i<=n;i++)
		{
			cout<<k[i]<<" ";
		}
		cout<<"\n";

	}


	return 0;
}






