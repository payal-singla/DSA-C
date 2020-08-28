/*How To Solve The 2D-Array Hourglass
 You are given a 6*6 2D array. An hourglass in an array is a portion shaped like this:
a b c
  d
e f g
For example, if we create an hourglass using the number 1 within an array full of zeros, it may look like this:
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
Actually there are many hourglasses in the array above. The three leftmost hourglasses are the following:
1 1 1     1 1 0     1 0 0
  1         0         0
1 1 1     1 1 0     1 0 0
The sum of an hourglass is the sum of all the numbers within it. The sum for the hourglasses above are 7, 4, and 2, respectively.
In this problem you have to print the largest sum among all the hourglasses in the array.
Note: If you have already solved the problem Java 2D array in the data structures chapter in the Java domain, you may skip this challenge.
Input Format
There will be exactly 6 lines, each containing 6 integers seperated by spaces. Each integer will be between -9 and 9 inclusive.
Output Format
Print the answer to this problem on a single line.
Sample Input
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
Sample Output
19
Explanation
The hourglass which has the largest sum is:
2 4 4
  2
1 2 4 */
#include <stdio.h>
int main(){
int i,j,arr[10][10];
for(i=0;i<6;i++){
    for(j=0;j<6;j++){
        scanf("%d",&arr[i][j]);
    }
}
int sum=0,maxsum=-2000;
for(i=0;i<6;i++){
    for(j=0;j<6;j++){
        if (i+2<6 && j+2<6){
            sum=arr[i][j] +arr[i][j+1] +arr[i][j+2] + arr[i+1][j+1] +arr[i+2][j] +arr[i+2][j+1] +arr[i+2][j+2] ;
            if(sum > maxsum){
              maxsum = sum;
            }}
    }
}
printf("%d",maxsum);
return 0;
}


