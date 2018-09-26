#include <bits/stdc++.h>
using namespace std;

char museum[1000][1000];
int counter[1000000]={0};
int visit[1000][1000]={0};
int visited=0;
int cntr=0;
int rowNum,colNum,position,locationX,locationY;

//floodfill algorithm function
void floodFill(int row, int col, int rowNum, int colNum) 
{
	if(row<0||col<0||row>=rowNum||col>=colNum) return;
	if(visit[row][col]!=0) return;
	if(museum[row][col]=='*')
	{
	    visited++;
	    return;
	}
		
	visit[row][col]=cntr;
	floodFill(row-1,col,rowNum,colNum);
	floodFill(row+1,col,rowNum,colNum);
	floodFill(row,col-1,rowNum,colNum);
	floodFill(row,col+1,rowNum,colNum);
	return;
}

int main() 
{
	cin>>rowNum>>colNum>>position;

    //to input the museum layout
	for(int i=0; i<rowNum; i++) 
	{
		for(int j=0; j<colNum; j++) 
		{
			cin>>museum[i][j];
		}
	}

    //to count the visited pictures
	for(int i=0; i<rowNum; i++) 
	{
		for(int j=0; j<colNum; j++) 
		{
			if(museum[i][j]=='.'&&visit[i][j]==0)
			{
			    cntr++;
			    visited=0;
			    floodFill(i,j,rowNum,colNum);
			    counter[cntr]=visited;
		    }
		}
	}
	
    //to print the amount of visited pictures
	for(int i=0; i<position; i++) 
	{ 
		cin>>locationX>>locationY;
		
		cout<<counter[visit[locationX-1][locationY-1]]<<endl;
	}
	return 0;
}