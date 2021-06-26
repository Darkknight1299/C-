#include<bits/stdc++.h>
using namespace std;

bool isSafe(int board[][10],int i,int j,int n){
  //Check for col
  for(int row=0;row<i;row++){
    if(board[row][j]==1){
      return false;
    }
  }

  //Check for left diagonal
  int x=i;
  int y=j;
  while(x>=0 and y>=0){
    if(board[x][y]==1){
      return false;
    }
    x--;
    y--;
  }

  //Check for right diagonal
  x=i;
  y=j;
  while(x>=0 and y<n){
    if(board[x][y]==1){
      return false;
    }
    x--;
    y++;
  }

  return true;
}

bool NqueenSolver(int board[][10],int i,int n){
  //Base Case
  if(i==n){
    //Print the board
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(board[i][j]==1){
          cout<<"Q ";
        }
        else{
          cout<<"_ ";
        }
      }
      cout<<endl;
    }

    //cout<<endl<<endl;
    return true;//Make this false and comment out the above cout to get all possible config(cause false makes it to continue to search for the correct config again and again)
  }

  //Recursive Case
  for(int j=0;j<n;j++){
    if(isSafe(board,i,j,n)){
      board[i][j]=1;//Assuming i,j is correct position(Placing the queen here)

      bool NextQueen=NqueenSolver(board,i+1,n);
      if(NextQueen){
        return true;
      }
      board[i][j]=0;//BackTracking-i,j is not the right position assumption is wrong
    }
  }
  return false;//Cant place queen in the current row;
}

int main()
{  
   #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif
  //  code starts

  int board[10][10];
  int n;
  cin>>n;
  NqueenSolver(board,0,n);
}