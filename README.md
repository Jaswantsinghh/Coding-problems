# Coding-problems
## Amazon
### Level: Easy
1. Minimum Cost of ropes  
There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.     
Example 1:  
``
Input:   
``    
``
n = 4
``   
``   
arr[] = {4, 3, 2, 6}
``   
``   
Output:
``   
``   
29
``    
Explanation:  
For example if we are given 4
ropes of lengths 4, 3, 2 and 6. We can
connect the ropes in following ways.  
1) First connect ropes of lengths 2 and 3.
Now we have three ropes of lengths 4, 6
and 5.  
2) Now connect ropes of lengths 4 and 5.
Now we have two ropes of lengths 6 and 9.  
3) Finally connect the two ropes and all
ropes have connected.  
Total cost for connecting all ropes is 5 + 9 + 15 = 29. This is the optimized cost
for connecting ropes. Other ways of
connecting ropes would always have same
or more cost. For example, if we connect
4 and 6 first (we get three strings of 3,
2 and 10), then connect 10 and 3 (we get
two strings of 13 and 2). Finally we
connect 13 and 2. Total cost in this way
is 10 + 13 + 15 = 38.   
Example 2:   
``
Input:
``  
``  
n = 5
``   
``    
arr[] = {4, 2, 7, 6, 9}
``   
``     
Output:
``  
``   
62 
``   
Explanation:
First, connect ropes 4 and 2, which makes
the array {6,7,6,9}. Next, add ropes 6 and
6, which results in {12,7,9}. Then, add 7
and 9, which makes the array {12,16}. And
finally add these two which gives {28}.
Hence, the total cost is 6 + 12 + 16 + 
28 = 62.
- #### TAGS - Heap, queue
   [Solution](Amazon/Easy/1.cpp)

### Level: Hard
1. Burning Tree
   Given a binary tree and a leaf node called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. It is known that in 1 second all nodes connected to a given node get burned. That is, its left child, right child and parent.  
Example 1:     
Input :      
          1  
        /   \  
      2      3  
    /  \      \  
   4    5      6  
       / \      \  
      7   8      9  
                   \  
                   10  
Target Node = 8  
Output: 7   
Explanation: If leaf with the value 
8 is set on fire.   
After 1 sec: 5 is set on fire.  
After 2 sec: 2, 7 are set to fire.  
After 3 sec: 4, 1 are set to fire.  
After 4 sec: 3 is set to fire.  
After 5 sec: 6 is set to fire.  
After 6 sec: 9 is set to fire.  
After 7 sec: 10 is set to fire.  
It takes 7s to burn the complete tree.  
Example 2:  
Input :        
          1  
        /   \  
      2      3  
    /  \      \  
   4    5      7  
  /    /   
 8    10  
Target Node = 10  
Output: 5  
- #### Tags - Tree
  [Solution](Amazon/Hard/1.cpp)

## Apple
### Level: Easy
1. Implement the function fib(n), which returns the nth number in the Fibonacci sequence, using only O(1) space.   
   [Solution](Apple/Easy/1.cpp)

## Flipkart
### Level: Medium
1. [Snakes and Ladders](https://en.wikipedia.org/wiki/Snakes_and_ladders) is a game played on a 10 x 10 board, the goal of which is get from square 1 to square 100. On each turn players will roll a six-sided die and move forward a number of spaces equal to the result. If they land on a square that represents a snake or ladder, they will be transported ahead or behind, respectively, to a new square.  
Find the smallest number of turns it takes to play snakes and ladders.
For convenience, here are the squares representing snakes and ladders, and their outcomes:  
``
snakes = {16: 6, 48: 26, 49: 11, 56: 53, 62: 19, 64: 60, 87: 24, 93: 73, 95: 75, 98: 78}
ladders = {1: 38, 4: 14, 9: 31, 21: 42, 28: 84, 36: 44, 51: 67, 71: 91, 80: 100}
``  
[Solution](Flipkart/Medium/1.cpp)

### Level: Hard
1. Burning Tree
   Given a binary tree and a leaf node called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. It is known that in 1 second all nodes connected to a given node get burned. That is, its left child, right child and parent.  
Example 1:     
Input :      
          1  
        /   \  
      2      3  
    /  \      \  
   4    5      6  
       / \      \  
      7   8      9  
                   \  
                   10  
Target Node = 8  
Output: 7   
Explanation: If leaf with the value 
8 is set on fire.   
After 1 sec: 5 is set on fire.  
After 2 sec: 2, 7 are set to fire.  
After 3 sec: 4, 1 are set to fire.  
After 4 sec: 3 is set to fire.  
After 5 sec: 6 is set to fire.  
After 6 sec: 9 is set to fire.  
After 7 sec: 10 is set to fire.  
It takes 7s to burn the complete tree.  
Example 2:  
Input :        
          1  
        /   \  
      2      3  
    /  \      \  
   4    5      7  
  /    /   
 8    10  
Target Node = 10  
Output: 5  
- #### Tags - Tree
  [Solution](Amazon/Hard/1.cpp)

## Google
### Easy
1. Implement a PrefixMapSum class with the following methods:  
   - insert(key: str, value: int): Set a given key's value in the map. If the key already exists, overwrite the value.
   - sum(prefix: str): Return the sum of all values of keys that begin with a given prefix.
   For example, you should be able to run the following code:     
``   
mapsum.insert("columnar", 3)
``   
``  
assert mapsum.sum("col") == 3 
``  
``  
mapsum.insert("column", 2)
``  
``  
assert mapsum.sum("col") == 5  
``  
    [Solution](Google/Easy/1.cpp)
## Goldman Sachs
### Level: Easy
1. Minimum Cost of ropes  
There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.     
Example 1:  
``
Input:   
``    
``
n = 4
``   
``   
arr[] = {4, 3, 2, 6}
``   
``   
Output:
``   
``   
29
``    
Explanation:  
For example if we are given 4
ropes of lengths 4, 3, 2 and 6. We can
connect the ropes in following ways.  
1) First connect ropes of lengths 2 and 3.
Now we have three ropes of lengths 4, 6
and 5.  
2) Now connect ropes of lengths 4 and 5.
Now we have two ropes of lengths 6 and 9.  
3) Finally connect the two ropes and all
ropes have connected.  
Total cost for connecting all ropes is 5 + 9 + 15 = 29. This is the optimized cost
for connecting ropes. Other ways of
connecting ropes would always have same
or more cost. For example, if we connect
4 and 6 first (we get three strings of 3,
2 and 10), then connect 10 and 3 (we get
two strings of 13 and 2). Finally we
connect 13 and 2. Total cost in this way
is 10 + 13 + 15 = 38.   
Example 2:   
``
Input:
``  
``  
n = 5
``   
``    
arr[] = {4, 2, 7, 6, 9}
``   
``     
Output:
``  
``   
62 
``   
Explanation:
First, connect ropes 4 and 2, which makes
the array {6,7,6,9}. Next, add ropes 6 and
6, which results in {12,7,9}. Then, add 7
and 9, which makes the array {12,16}. And
finally add these two which gives {28}.
Hence, the total cost is 6 + 12 + 16 + 
28 = 62.
- #### TAGS - Heap, queue
   [Solution](Amazon/Easy/1.cpp)
### Level: Medium
1. You are given N identical eggs and access to a building with k floors. Your task is to find the lowest floor that will cause an egg to break, if dropped from that floor. Once an egg breaks, it cannot be dropped again. If an egg breaks when dropped from the xth floor, you can assume it will also break when dropped from any floor greater than x.  
Write an algorithm that finds the minimum number of trial drops it will take, in the worst case, to identify this floor.
For example, if N = 1 and k = 5, we will need to try dropping the egg at every floor, beginning with the first, until we reach the fifth floor, so our solution will be 5.   
[Solution](Goldman-Sachs/Medium/1.cpp)

## IBM
### Level: Easy
1. Given a string with repeated characters, rearrange the string so that no two adjacent characters are the same. If this is not possible, return None.
For example, given "aaabbc", you could return "ababac". Given "aaab", return None.  
[Solution](IBM/Easy/1.cpp)

## Microsoft
### Level: Easy
1. Minimum Cost of ropes  
There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.     
Example 1:  
``
Input:   
``    
``
n = 4
``   
``   
arr[] = {4, 3, 2, 6}
``   
``   
Output:
``   
``   
29
``    
Explanation:  
For example if we are given 4
ropes of lengths 4, 3, 2 and 6. We can
connect the ropes in following ways.  
1) First connect ropes of lengths 2 and 3.
Now we have three ropes of lengths 4, 6
and 5.  
2) Now connect ropes of lengths 4 and 5.
Now we have two ropes of lengths 6 and 9.  
3) Finally connect the two ropes and all
ropes have connected.  
Total cost for connecting all ropes is 5 + 9 + 15 = 29. This is the optimized cost
for connecting ropes. Other ways of
connecting ropes would always have same
or more cost. For example, if we connect
4 and 6 first (we get three strings of 3,
2 and 10), then connect 10 and 3 (we get
two strings of 13 and 2). Finally we
connect 13 and 2. Total cost in this way
is 10 + 13 + 15 = 38.   
Example 2:   
``
Input:
``  
``  
n = 5
``   
``    
arr[] = {4, 2, 7, 6, 9}
``   
``     
Output:
``  
``   
62 
``   
Explanation:
First, connect ropes 4 and 2, which makes
the array {6,7,6,9}. Next, add ropes 6 and
6, which results in {12,7,9}. Then, add 7
and 9, which makes the array {12,16}. And
finally add these two which gives {28}.
Hence, the total cost is 6 + 12 + 16 + 
28 = 62.
- #### TAGS - Heap, queue
   [Solution](Amazon/Easy/1.cpp)
### Level: Medium
1. The [tower of Hanoi](https://en.wikipedia.org/wiki/Tower_of_Hanoi) is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
Note: The discs are arranged such that the top disc is numbered 1 and the bottom-most disc is numbered N. Also, all the discs have different sizes and a bigger disc cannot be put on the top of a smaller disc. Refer the provided link to get a better clarity about the puzzle.   
Example:  
Input:    
N = 2  
- Output:  
move disk 1 from rod 1 to rod 2  
move disk 2 from rod 1 to rod 3  
move disk 1 from rod 2 to rod 3  
3  
Explanation: For N=2 , steps will be  
as follows in the example and total  
3 steps will be taken.  
- Input:  
N = 3  
Output:  
move disk 1 from rod 1 to rod 3
move disk 2 from rod 1 to rod 2
move disk 1 from rod 3 to rod 2
move disk 3 from rod 1 to rod 3
move disk 1 from rod 2 to rod 1
move disk 2 from rod 2 to rod 3
move disk 1 from rod 1 to rod 3
7
Explanation: For N=3 , steps will be
as follows in the example and total 
7 steps will be taken.
-  #### TAGS:- Recursion, basic mathematics.  
   [Solution](Microsoft/Medium/1.cpp)

2. Given a non-negative integer S represented as a string, remove K digits from the number so that the new number is the smallest possible.  
Note : The given num does not contain any leading zero.     
  Example 1:    
``
Input: 
``   
``   
S = "149811", K = 3
``   
``    
Output: 111
``   
``   
Explanation: Remove the three digits 
4, 9, and 8 to form the new number 
111 which is the smallest.
``        
  Example 2:     
``
Input:    
S = "1002991", K = 3
Output: 21
Explanation: Remove the three digits
1(leading one), 9, and 9 to form the 
new number 21(Note that the output 
must not contain leading zeroes) 
which is the smallest.
``     
- ####   TAGS - Stack
    [Solution](Microsoft/Medium/2.cpp)
    

### Level: Hard
1. Burning Tree
   Given a binary tree and a leaf node called target. Find the minimum time required to burn the complete binary tree if the target is set on fire. It is known that in 1 second all nodes connected to a given node get burned. That is, its left child, right child and parent.  
Example 1:     
Input :      
          1  
        /   \  
      2      3  
    /  \      \  
   4    5      6  
       / \      \  
      7   8      9  
                   \  
                   10  
Target Node = 8  
Output: 7   
Explanation: If leaf with the value 
8 is set on fire.   
After 1 sec: 5 is set on fire.  
After 2 sec: 2, 7 are set to fire.  
After 3 sec: 4, 1 are set to fire.  
After 4 sec: 3 is set to fire.  
After 5 sec: 6 is set to fire.  
After 6 sec: 9 is set to fire.  
After 7 sec: 10 is set to fire.  
It takes 7s to burn the complete tree.  
Example 2:  
Input :        
          1  
        /   \  
      2      3  
    /  \      \  
   4    5      7  
  /    /   
 8    10  
Target Node = 10  
Output: 5  
- #### Tags - Tree
  [Solution](Amazon/Hard/1.cpp)

2. Recall that the minimum spanning tree is the subset of edges of a tree that connect all its vertices with the smallest possible total edge weight. Given an undirected graph with weighted edges, compute the maximum weight spanning tree.    
  [Solution](Microsoft/Hard/1.cpp)

## OYO Rooms
### Level: Easy
1. Minimum Cost of ropes  
There are given N ropes of different lengths, we need to connect these ropes into one rope. The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.     
Example 1:  
``
Input:   
``    
``
n = 4
``   
``   
arr[] = {4, 3, 2, 6}
``   
``   
Output:
``   
``   
29
``    
Explanation:  
For example if we are given 4
ropes of lengths 4, 3, 2 and 6. We can
connect the ropes in following ways.  
1) First connect ropes of lengths 2 and 3.
Now we have three ropes of lengths 4, 6
and 5.  
2) Now connect ropes of lengths 4 and 5.
Now we have two ropes of lengths 6 and 9.  
3) Finally connect the two ropes and all
ropes have connected.  
Total cost for connecting all ropes is 5 + 9 + 15 = 29. This is the optimized cost
for connecting ropes. Other ways of
connecting ropes would always have same
or more cost. For example, if we connect
4 and 6 first (we get three strings of 3,
2 and 10), then connect 10 and 3 (we get
two strings of 13 and 2). Finally we
connect 13 and 2. Total cost in this way
is 10 + 13 + 15 = 38.   
Example 2:   
``
Input:
``  
``  
n = 5
``   
``    
arr[] = {4, 2, 7, 6, 9}
``   
``     
Output:
``  
``   
62 
``   
Explanation:
First, connect ropes 4 and 2, which makes
the array {6,7,6,9}. Next, add ropes 6 and
6, which results in {12,7,9}. Then, add 7
and 9, which makes the array {12,16}. And
finally add these two which gives {28}.
Hence, the total cost is 6 + 12 + 16 + 
28 = 62.
- #### TAGS - Heap, queue
   [Solution](Amazon/Easy/1.cpp)
##  Twitter
### Level: Medium
1. Given a list of numbers, create an algorithm that arranges them in order to form the largest possible integer.
   ### Example Test Case: [10, 7, 76, 415], you should return 77641510.
   [Solution](Twitter/Medium/1.cpp)
