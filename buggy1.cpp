#include<bits/stdc++.h>
using namespace std;

//Graph Data Structure 
unordered_map<int,vector<int>> adjList_Graph1,adjList_Graph2;


int cities_covered = 0;

void FunctionForGraph1(int i,vector<bool>& flag, stack<int>& mystack)
{
  flag[i]=true;
  for(int j: adjList_Graph1[i])
    if(flag[j]==false && i%j!=0)
    {
      FunctionForGraph1(j,flag,mystack);
    }
    
  mystack.push(i);
}

int FunctionForGraph2(int i,vector<bool>& flag)
{
 
  cout<<i<<"\n";
  flag[i] = true;
  cities_covered++;
  for(int j: adjList_Graph2[i])
    if(!flag[j])
    {
      // flag[j]=true;
       
      cout<<j<<"\n";
      FunctionForGraph2(j,flag);
    }
  return cities_covered;
}

int main()
{
  // n = Number of Cities
  // p = Roads which are not Banned
  // city_i --> city_j denotes that there is a path from city_i to city_j
  int n,p,city_i, city_j, max_cities_covered = 0;
  
  // Stack to be used for Algorithm
  stack<int> mystack;
  cin>>n>>p;
  
  //Storing Graph
  for(int i=0;i<p;i++)
  {
      cin>>city_i>>city_j;
      adjList_Graph1[city_i].push_back(city_j); 
  }
  
  //Initializing flag to false for each cities because driver is in warehouse in starting
  vector<bool> flag(n,false);
  
  
  for(int i=0;i<n;++i)
    if(!flag[i])
      FunctionForGraph1(i,flag,mystack);

  
  for(int i=0;i<n;++i)
  {
    for(int j: adjList_Graph1[i])
      adjList_Graph2[i].push_back(j);
  }
  

  for(int i=0;i<n;++i)
  {
        for(int j: adjList_Graph2[i])
        flag[j] = false;
  }
  

  //Main Algorithm to Find the Maximum Cities which can be covered in whole drive
  while(!mystack.empty())
  {     
    int current_max;
    int temp = mystack.top();
    cout<<"temp: "<<temp<<"\n";
    mystack.pop();
    if(flag[temp]==false)
    {
      cities_covered = FunctionForGraph2(temp,flag);
      cout<<"cities_covered: "<<cities_covered<<"\n";
    
      if (max_cities_covered <= current_max)
      { 
        current_max = cities_covered;
        max_cities_covered = current_max;
      }
    }
  }
  /********Max Cities He can cover is********/
  cout<<max_cities_covered;

  return 0;
}