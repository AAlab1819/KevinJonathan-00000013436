# Roy and Trending Topics
We need to help Roy develop a widget that shows Trending Topics which has their own z-scores.
The z-score change everyday according to the following rules:

    When a topic is mentioned in a 'Post', its z-score is increased by 50.
    A 'Like' on such a Post, increases the z-score by 5.
    A 'Comment' increases z-score by 10.
    A 'Share' causes an increment of 20.

So we'll input the number of topics and current z-score which is stored as a vector pair and mapped to each other,
and then the number of posts, likes, comments, and shares.
After that, we sort the topics using the "make_heap" STL.
The STL points the datas to the highest or lowest element and making its access in O(1) time.
From that, we'll get the top 5 trending topics.

Time Complexity: 
	
	O(1)

#	Find the Running Median
We need to find the median from the given input stream of integers, and we must perform the following task for each integer:

    Add the integer to a running list of integers.
    Find the median of the updated list (i.e., for the first element through the element).
    Print the list's updated median on a new line. The printed value must be a double-precision number scaled to decimal place

So we'll input the number of inputs, and store the numbers in a "priority_queue" STL.
The priority queue is a type of container adapters which stores elements and sort it in non decreasing order.
We split the stored elements into 2 halves, a lower and greater queue which are both priority queues,
and then compare the queues to find the median values.
From that, we get the data of medians for every value added to the queue.

Time Complexity:

	O(n)
