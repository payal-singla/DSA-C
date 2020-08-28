/*An array is a type of data structure that stores elements of the same type in a contiguous block of memory. In an array, , of size , each memory location has some unique index,  (where ), that can be referenced as  (you may also see it written as ).

Given an array, , of  integers, print each element in reverse order as a single line of space-separated integers.

Note: If you've already solved our C++ domain's Arrays Introduction challenge, you may want to skip this.

Input Format

The first line contains an integer,  (the number of integers in ).
The second line contains  space-separated integers describing .

Constraints

Output Format

Print all  integers in  in reverse order as a single line of space-separated integers.

Sample Input 1

CopyDownload
Array: arr
1
4
3
2

 
4
1 4 3 2
Sample Output 1

2 3 4 1 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
int n,i,j;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for (j=n-1;j>=0;j--)
{
    printf("%d ",arr[j]);
}
return 0;
}
