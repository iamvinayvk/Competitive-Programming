#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			string txt,pat;
			cin>>txt>>pat;
			
			int j=0;
			for(int i=0;i<pat.size();i++)
			{
				txt.erase(txt.begin()+txt.find(pat[i]));
			}
			sort(txt.begin(),txt.end());
			
			if(txt.size()!=0)
			{
			for(int i=0;i<txt.size();i++)
			{   
			   
				if(txt[i]>pat[j]||txt[i]>pat[0])
				{
					txt.insert(i,pat);
					break;
				}
				   if(i==txt.size()-1)
			    {
			        txt.insert(i+1,pat);
			        break;
			    }
				else if(txt[i]==pat[j])
				{
				    j++;
				    i--;
				}
			}
			}
			else{
			    txt=pat;
			}
			

			cout<<txt<<"\n";
			
		}


	return 0;
}



