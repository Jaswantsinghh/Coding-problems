# Coding-problems
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

## Microsoft
### Level: Medium
1. The tower of Hanoi is a famous puzzle where we have three rods and N disks. The objective of the puzzle is to move the entire stack to another rod. You are given the number of discs N. Initially, these discs are in the rod 1. You need to print all the steps of discs movement so that all the discs reach the 3rd rod. Also, you need to find the total moves.
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

##  Twitter
### Level: Medium
1. Given a list of numbers, create an algorithm that arranges them in order to form the largest possible integer.
   ### Example Test Case: [10, 7, 76, 415], you should return 77641510.
   [Solution](Twitter/Medium/1.cpp)
