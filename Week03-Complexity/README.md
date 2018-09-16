# 492B - Vanya and Lanterns
We need to help Vanya find out the minimum light radius should the lanterns have to light the whole street.
So first we sort the lanterns position and compare the first lantern with the edge of the street to the last lantern.

	//to sort the lanterns with their respective points
	sort(lanternPoint, lanternPoint+numLantern);

	//to set the starting point and the end point of the lanterns
	startPoint=lanternPoint[0];
	endPoint=length-lanternPoint[numLantern-1];

	//to set the current radius of light
	radius=max(startPoint,endPoint);

After that we compare the the largest gap between lanterns and then print the output.

	//to find the gap to lighten up the whole street
	for (int i=1; i<numLantern; i++)
	{
		//to compare the current radius with the next lantern and returns the largest values
		radius=max(radius,lanternPoint[i]-lanternPoint[i-1]);
	}

	//to set the output's relative error doesn't exceed 10^-9 
	//divide to get the radius between 2 lantern by 2
	cout<<setprecision(10)<<fixed<<radius/2.0<<endl;

From that, we'll get the minimum light radius the lanterns have to light the whole street.

Time Complexity:

	Worst Case: O(nlogn)
	Average Case: θ(nlogn)
	Best Case: Ω(nlogn)

[492B Submission](http://codeforces.com/contest/492/submission/42956723)

# 148A - Insomnia Cure
We need to find out how many dragons are hurt because of the sadistic princess' dream.
So first, we enter the number of dragon in which every n-th dragon it will be damaged by the princess' evil plot. 
Then we enter the total of dragons in the dream.

If in any of the first four input is 1, then all dragons will be damaged by either of the methods that has 1.
It's because of the fact that any number can be divided by 1 with no remainder.

Besides that, we'll do a for loop to check if the number is divisible by one of the four number given.
If the condition meets, then we add the damaged dragon. 

	if(panned==1||oofed==1||trampled==1||threatened==1) damaged=dragon;
	else
	{
			for(int i=1;i<=dragon;i++)
			{
					if(i%panned==0||i%oofed==0||i%trampled==0||i%threatened==0) damaged++;
			}
	}
    
From that, we get the number of the dragons which are hurt.

Time Complexity:

	Worst Case: O(n)
	Average Case: θ(n)
	Best Case: Ω(1) - because it is possible if any of the inputs is 1.

[148A Submission](http://codeforces.com/contest/148/submission/42956729)
    
# 469A - I Wanna Be the Guy
We need to find out the game can be passed by Little X and Little Y.
So first we declare an array of the levels with 0 which means it haven't been passed.
Then we input the number of level and the levels that Little X and Little Y passed then we change the value with 1 which means it have been passed.

	//to set the levels passable by Little X
	cin>>levelX;
	for(int i=0;i<levelX;i++)
	{
			cin>>pass;
			levelArray[pass-1]=1; //set the level to passed
	}

	//to set the levels passable by Little Y
	cin>>levelY;
	for(int i=0;i<levelY;i++)
	{
			cin>>pass;
			levelArray[pass-1]=1; //set the level to passed
	}

After that we run a for loop to count the levels that are passed

	//to check if there's a level that aren't passed yet
	for(int i=0;i<level;i++) 
	{
			if(levelArray[i]==1) count++;
	}

From that we can now know if Little X and Little Y passed the whole level or not.

Time Complexity:

	Worst Case: O(n)
	Average Case: θ(n)
	Best Case: Ω(n)

[469A Submission](http://codeforces.com/contest/469/submission/42956844)

