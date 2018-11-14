# 20C - Dijkstra?
We need to find the shortest path between the vertex 1 and the vertex n.
So, we'll use Djikstra's Algorithm which generate a shortest path tree with given source as root, and it maintains two sets, in which one set contains vertices included in the shortest path tree, while the other set contains vertices which aren't included yet. 
In every step, we compare both sets and find the one which has the minimum distance from the source.
From that, we can find the shortest path in the opposite case.

Time Complexity: 
	
	O(nlogn)

[20C Submission](http://codeforces.com/contest/20/submission/45711947)

# 601A - The Two Routes
We need to determine the minimum number of hours needed for the train and bus to reach the town.
So, we'll input the number of towns and the connected railways between them.
After that, we can find the shortest path by using the Breadth First Search(BFS) Algorithm which enqueues each level of a tree sequentially as the root of any subtree when encountered.
From that, we can find out the shortest path and the minimum number of hours needed for both vehicle to arrive.

Time Complexity:

	O(n^2)
	
[601A Submission](http://codeforces.com/contest/601/submission/45711949)
