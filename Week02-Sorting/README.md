# 291A - Spyke Talks
We need to find out how many pairs of secretaries are talking and no conferences of secretaries allowed.
So first we sort the session ids of the secretaries using shell sort.
Shell sort method sorts data by checking the compared elements with gaps.
If the values at higher index is greater, it'll break the loop, if not then it will switch the values.

//gap between index of the element to be compared which is n/2.
for(int i = secretaries/2; i > 0; i = i/2)
{
  for(int j = i; j < secretaries; j++)
	{
		for(int k = j-i; k >= 0; k = k-i)
		{
			//if value at higher index is greater, then break the loop.
			if(id[k+i] >= id[k]) break;
			else //switch the values
			{
				temp = id[k];
				id[k] = id[k+i];
				id[k+i] = temp;
			}
		}
	}
}
  
From that, we get the sorted data which values are from the lowest to highest.
After that by using a loop, we count how many pairs of secretaries are chatting and also check if conferences happens.

//to count how many pairs of chatting secretaries
if(id[i]==id[i+1] && id[i]!=0)
{
  counter++;
}

//to check if conferences happens 
if(id[i]==id[i+2] && id[i]!=0)
{
  counter=-1;
  break;
}

From that, we'll get how many pair of secretaries are chatting, or if conferences happens.

[291A Submission](http://codeforces.com/contest/291/submission/42712438)

# 230A - Dragons
We need to find out if Kirito can defeat all of the dragons or not.
So first we need to help Kirito by sorting the dragons with their bonus strength from the weakest using brick sort.
Brick Sort method sorts data by comparing the values of the odd-indexed elements and the even-indexed elements.
If the values at higher index is smaller than the current index, it will switch the values.
    
//sort the dragon's strength and bonus with brick sort
int temp; //to store temporary number
int sorted = 0; //to define that the array is unsorted

while (sorted==0)
{
    sorted = 1; 

    //perform sort on odd indexed element
    for (int i=1; i<=numDragon-2; i=i+2)
    {
        if (strDragon[i] > strDragon[i+1])
        {
            temp = strDragon[i];
            strDragon[i] = strDragon[i+1];
            strDragon[i+1] = temp;

            temp = bonus[i];
            bonus[i] = bonus[i+1];
            bonus[i+1] = temp;
            sorted = 0;
        }
    }

    //perform sort on even indexed element
    for (int i=0; i<=numDragon-2; i=i+2)
    {
        if (strDragon[i] > strDragon[i+1])
        {
            temp = strDragon[i];
            strDragon[i] = strDragon[i+1];
            strDragon[i+1] = temp;

            temp = bonus[i];
            bonus[i] = bonus[i+1];
            bonus[i+1] = temp;
            sorted = 0;
        }
    }
}
    
From that, we get the sorted data of the dragons which strength are from the weakest to highest with their respective bonuses.
After that, Kirito can beat the dragons one by one from the weakest, but then that doesn't guarantee that he'll win.
So by using a loop, we need to check if Kirito can really beat the dragon or not. 

//to check if Kirito can beat the dragons or not
for(int i=0; i<numDragon;i++)
{
    //if Kirito is stronger than the dragon
    if(strDragon[i]<strKirito)
    {
        strKirito=strKirito+bonus[i];
        if(i==numDragon-1)
        {
            cout<<"YES"<<endl;
        }
    }
    //if Kirito is weaker than the dragon #RIPPlotArmor
    if(strDragon[i]>strKirito)
    {
        cout<<"NO"<<endl;
        break;
    }
}

From that, we can know if Kirito can beat all of the dragons or not.

[230A Submission](http://codeforces.com/contest/230/submission/42712607)
    
# 768A - Oath of the Night's Watch
We need to find out how many stewards will be supported by Jon Snow
So first we need to help Jon Snow by sorting the stewards with their strength from the weakest using cocktail sort.
Cocktail Sort method sorts data in 2 stages:
1. By comparing the values from left to right. If the higher index is smaller than the current index, it will switch the values.

for (int i=0; i<numSteward-1; i++) 
{
    if (steward[i]>steward[i+1]) {
        temp = steward[i];
        steward[i]= steward[i+1];
        steward[i+1] = temp;
        swapped = 1;
    }
}

2. By comparing the values from right to left, starting from the item just before the most recently sorted item.
If the higher index is smaller than the current index, it will switch the values.

for (int i = numSteward-2; i >= 0; i--) {
    if (steward[i]>steward[i+1]) {
        temp = steward[i];
        steward[i]= steward[i+1];
        steward[i+1] = temp;
        swapped = 1;
    }
}
    
From that, we get the sorted data of the stewards which strength are from the weakest to highest.
So now, Jon Snow knows which stewards that he should support by determining their lowest and highest strength.

int lowest=steward[0];
int highest=steward[numSteward-1];

After that, count the stewards between the lowest and highest steward's strength value.
Jon Snow won't support the stewards that has the same strength as the lowest and highest ones.

for(int i=0; i<numSteward; i++)
{
    if(steward[i]!=lowest&&steward[i]!=highest) countSteward++;
}    

From that we can now know how many stewards will Jon Snow supports.

[768A Submission](http://codeforces.com/contest/submission/768/42713644)
