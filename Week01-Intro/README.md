# 912A - Tricky Alchemy
We need to find out how many crystals we need to produce the required number of balls.
So, we calculate the total of required crystals to the balls.

	if(yellowCrystal<2*yellowBall+greenBall) crystal+=2*yellowBall+greenBall-yellowCrystal;
	if(blueCrystal<3*blueBall+greenBall) crystal+=3*blueBall+greenBall-blueCrystal;

From that, we get the sum of the amount of those Crystals needed.

[912A Submission](http://codeforces.com/contest/912/submission/42447010)

# 854A - Fraction
We need to determine maximum possible proper irreducible fraction,
so we make a for loop which divide the sum by 2, decreases the numerator's value by 1 and increases the denominator value by 1
until the irreducible fraction is found.
We also need to find the value of the numerator and denominator,
so we need a condition that defines the numerator and the denominator which both are coprime.

	for(int i=number/2;i>0;i--)
	{
		if(gcd(i,number-i)==1)	//if the greatest common divisor is irreducible
		{
			numerator=i;
			denominator=number-i;
			break;
		}
	}
    
From that, we get the maximum possible proper irreducible fraction.

[854A Submission](http://codeforces.com/contest/854/submission/42447023)
    
# 988A - Diverse Team
We need to form a team consisting of students with different ratings for each of the members.
So, we need to first store the rating of the students in an array 
Then we need to loop the array until all of the students are checked and the team member is formed.

	for(int i=0;i<numStudent;i++)
	{
		cin>>array[i];  
	}

After that, compare the values in that array by using a nested loop
and mark the ones with the same value as the previous one as -1.

	for(int i=0; i<numStudent-1; i++)
	{
		for(int j=i+1; j<numStudent; j++)
		{
			if (a[i]==a[j]) a[j]=-1;
		}
	}

Then, we count the total of possible team member which rating's aren't mark in the array by making another loop

	for(int i=0;i<numStudent;i++)
	{
		if(a[i]!=-1) count++;
	}
    
After that, check if it is possible to form the team by checking the count value.
If the count value reaches the team members required, 
then it will print YES and the indices of students in the team we form, the indices printed will be the non-marked ones
and the indices printed should be the same as the amount of the team members.
else it will print NO.

	if(count>=teamStudent) 
	{
		cout<<"YES"<<endl;
		for(int i=0;i<numStudent;i++)
		{
			if(array[i]!=-1&&(teamStudent>0))
			{
				teamStudent--;
				cout<<i+1<<" ";
			}
		}
	}
	else
	{
		cout<<"NO"<<endl;
	}
    
From that we can now know if it is possible to form a team consisting of students 
with different ratings for each of the members.

[988A Submission](http://codeforces.com/contest/988/submission/42447030)
