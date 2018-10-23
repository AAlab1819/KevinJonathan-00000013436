# 946A - Partition 
We need to find the maximum values of sequence B substracted with sequence C.
So we'll input the A sequence's values, and if the value is higher than or equals 0, it'll be stored in sequence B.
The values lower than 0 is stored inside sequence C, and then substract the stored value inside sequence B with sequence C.
From that, we'll get the maximum values of the substracted sequences.

Time Complexity: 
	
	O(n)

[946A Submission](http://codeforces.com/contest/946/submission/44744923)

# 978B - File Name 
We need to help Polycarp to determine the number of characters in a filename needed to be remove, so itcould be sent into the social network "Codehorses".
So, we'll input the filename and check it if "xxx" exist in the filename, and erase the middle character.
After that, we count the characters of the filename by substracting the original length with the current filename. 
From that, we get the number of removed characters in the filename.

Time Complexity:

	O(n)
	
[978B Submission](http://codeforces.com/contest/978/submission/44744925)
    
# 731B - Coupons and Discounts
We need to help Sereja find out if there is a way to order pizzas using only coupons and discounts and do not buy any extra pizzas on any of the days. It's also prohibited to have any active coupons after the end of the last day.
So we need to input all the pizzas needed to be ordered.
If the pizzas needed for the current day is an odd number, then we will subtract tommorow's order by one (using the coupon we have from today's order). Then, we will continue to do so until if the next day's pizzas order is none or if it's the last day and the number of pizzas are odd number, there will be leftovers which means it's not possible to use coupons.
From that, we'll get to know that if the way to order pizzas using only coupons and discounts exists.

Time Complexity:

	O(n)
	
[731B Submission](http://codeforces.com/contest/731/submission/44744929)
