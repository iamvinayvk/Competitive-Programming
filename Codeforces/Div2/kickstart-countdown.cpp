#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int tc=0;
    while(t--)
    {
        int  n,k;
        cin>>n>>k;
        int count=0;
       
        int j=k; 
        for(int i=0;i<n;i++)
        {   int num;
            cin>>num;
                  if(j==num)
            {
                
                j--;
                if(j==0)
                {
                    count++;
                    j=k;
                }

            }
            
             
            else
            {
               
                j=k;
            }


            
        }
    
    


        cout<<"Case #"<<++tc<<": "<<count<<"\n";
        }
        return 0;
        }