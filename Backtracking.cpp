#include<bits/stdc++.h>
using namespace std;

bool isSafe(int m[N][N], int x, int y)
{
    if(x>=0 && x<N && y>=0 && y<N && m[x][y]==1)
    {
        return true;
    }
    return false;
}

bool solveMazeUtil(int m[N][N], int x, int y, int sol[N][N])
{
    if(x==N-1 && y==N-1 && maze[x][y]==1)
    {
        sol[x][y]=1;
        return true;
    }
    //Check if maze[x][y] is valid
    if(isSafe(m,x,y)==true)
    {
        sol[x][y]=1;
        /*Move forward in x direction*/
        if(solveMazeUtil(m,x+1,y,sol)==true)
        {
            return true;
        }
        if(solveMazeUtil(m,x,y+1,sol)==true)
        {
            return true;
        }
        sol[x][y]=0;
        return false;
    }
    return false;
}
vector<string> findPath(int m[MAX][MAX], int n) {
    int sol[MAX][MAX]={0};
    if(solveMazeUtil(m, 0, 0, sol)==false)
    {
        cout<<-1<<endl;
    }
    else
    {
        vector<string> st;
        for(int i=0;i<MAX;i++)
        {
            for(int j=0;j<MAX;j++)
            {
                if(sol[i][j]==1 an)
            }
        }

    }
    
}