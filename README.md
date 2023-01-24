this repository is made for showcase how to sort data in stacks. I this project we have to implement stacks and exactly the way the real stacks
are and how they are manupilated (by using linked list of course).

We had to develop a set of instruction in order to manupilate our stacks, the instruction are described as followed.
<img width="594" alt="Screen Shot 2023-01-24 at 4 12 00 PM" src="https://user-images.githubusercontent.com/91577008/214332051-734b2650-efaf-4b01-af71-114bfee59b5f.png">
  
	in the case of 3 you just have to hard code it, int the case of four numbers you push the smallest 
	index to the temporary stack use the function that sorts three number then push the number in stack b to stack a.
	the same thing goes applies for sorting five numbers, you push the two smallest indexes
	sort the three left numbers, and push back the numbers in stack b.
	
  now that our instructions are explained, we can move on to the algorithm i used to get the least amount of instructions to get a perfect score 
  in the assignement.
  
  first of all we index all our nodes according to their position in the numeric order , for example our represented like this 5 8 4 3 -1 0, their indexes will be be like this : 
		5 it's index 4
		8 it's index 5
		4 it's index 3
		3 it's index 2
		-1 it's index 0
		0 it's index 1
	now that we have a clear idea how we will index our list we move on to sending our nodes to the temporary stack
	first we have to find an optimal range to use, for me i used the range of 15 in the case of my stack having 100 number in it.
	i take the index of. the element at the top of the stack and compare it to the range i specified, if the index is less or equal to the specified range
	i push it to the temporary stack, after i push it to the temporary stack i increment an iterator the is equal to the number of elements pushed to the temporary stack
	which i will use later to check if the index i have at the top doesn't meet the first condition i will use my range and the iterator add them and use them
	to compare if the index at the top of the stack is is greater than the  range icheck if the index is les or equal to the range plus the iterator, if its true than i push 
	to the temporary stack and rotate it so i'll have the big numbers at the top and bottom of the stack and the small number in the middle . if it is greater than the range plus the iterator
	i rotate the stack a.
	now after we have emptied stack a into the temporary stack, i will start pushing the numbers with the biggest index back to a by finding the positision
	of the index in the stack, we check if the position of the index is less than the (size of the stack / 2) than we just rotate until it gets to the top
	of the temporary stack then we push it to a. if it is greater than (size / 2) than we reverse rotate it until it gets to the top of the stack than
	we push it. and using this method we have sorted a stack using the least amout of instruction
