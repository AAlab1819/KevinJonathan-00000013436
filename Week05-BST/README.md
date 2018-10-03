# 115A - Party 
We need to find the minimum number of groups formed with each employee either has no immediate manager or exactly one immediate manager.
The manager is another employee with a different number.
So we'll input the employees, and we count the numbers of groups by comparing the values of every employee's superiority.

	//to count the group
	for(int i = 1;i <= employee;i++)
	{
		int count = 1;
		int next = manager[i];
        while(next != -1)
        {
					count++;
					next = manager[next];
        }
		group = max(group,count);
	}
	
From that, we'll get the minimum number of groups in the party.

Time Complexity: 
	
	O(n^2)

[115A Submission](http://codeforces.com/contest/115/submission/43734850)

#	4C - Registration System 
We need to make a registration database system in which the system will register every inputed name.
The system will output OK in case of successful registration, or a prompt with a new name, if the requested name is already taken.
We'll input the number of registered name and the name for each member in a for loop

		//to check the data
    for(int i=0;i<request;i++)
    {
        cin>>name;
        //to check if the name isn't registered yet
        if (data[name]==0)
        {
            data[name]=1;
            cout<<"OK"<< endl;
        }
        //to output the same name appended with the numbers
        else
        {
            cout<<name<<data[name]<<endl;
            data[name]+=1;
        }
    }
		
From that, we get the data of successful registration of new members in the database.

Time Complexity:

	O(nlogn)
	
[4C Submission](http://codeforces.com/contest/4/submission/43734855)
    
# 913B - Christmas Spruce 
We need to find out if the tree of data is a spruce by counting the leaves of the tree.

		//to check
    for(int i=1; i<=number; i++)
    {
        if(tree[i].size()==0) continue; //a leaf
        else
        {
            leafCount=0;
            //to count the childrens in the tree
            for(int j=0; j<tree[i].size(); j++)
            {
                if(tree[tree[i][j]].size()==0) leafCount++;
            }
            //to check if the tree is a spruce 
            if(leafCount<3) {
                spruce = 0;
            }
        }
    }
    
    if(spruce==1) cout << "Yes";
    else cout << "No";
	
From that, we'll get to know that if the tree is a spruce or not.

Time Complexity:

	O(n)
	
[913B Submission](http://codeforces.com/contest/913/submission/43734862)
