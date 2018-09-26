# 598D - Igor In the Museum
We need to help Igor to see as many pictures possible in his standing position in the museum.
So we'll input the museum layout and the number of position testcase,
then we'll use floodfill algorithm to check Igor's surrounding from his position so he can visits the pictures.
We'll use it in a loop to count the amount of pictures visited.

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
	
From that, we'll get the pictures visited by Igor

Time Complexity: 
	
	O(nm)

[598D Submission](http://codeforces.com/contest/598/submission/43454698)

# 268B - Buttons
We need to help Manao open the lock in a worst-case scenario.
The lock's pattern uses fibonacci + total of button - iteration * iteration index.

From that, we get the worst-case that Manao needs to do to open the lock.

Time Complexity:

	O(n)
	
[268B Submission](http://http://codeforces.com/problemset/submission/268/43454708)
    
