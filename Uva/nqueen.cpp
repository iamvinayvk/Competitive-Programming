#include <bits/stdc++.h>

using namespace std;
bool issafe(int board[][10],int i,int j,int n)
{
  //chech column
  for(int row=0;row<i;row++)
  {
      if(board[row][j]==1)
        return false;
  }
  // checek left digonal
  int x=i;
  int y=j;
  while(x>=0&&y>=0)
  {
      if(board[x][y]==1)
        return false ;
      x--;
      y--;
  }
  x=i;
  y=j;
  while(x>=0&&y<n)
  {
      if(board[x][y]==1)
        return false ;
      x--;
      y++;
  }
  return true;
}
bool solvenqueen(int board[][10],int i,int n)
{
    if(i==n)
    {   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if(board[i][j]==1)
            {
                cout<<"Q ";
            }
            else cout<<"_ ";
        }
        cout<<endl;
        }
        return true;
    }
    //recursive case
    for(int j=0;j<n;j++)
    {
        if(issafe(board,i,j,n))
           {
               //palce the queen assuming that i,j is the right position
               board[i][j]=1;
               bool nextqueenrakhpaye=solvenqueen(board,i+1,n);
               if(nextqueenrakhpaye)
                {
                    return true;
                }
                //means i,j is not the right pos
                board[i][j]=0;
           }
    }
    //you have tried all pos in current row but not able to place in the queen
    return false;
}

int main()
{
    int n;
    cin>>n;
    int board[10][10]={0};
    solvenqueen(board,0,n);
    return 0;
}