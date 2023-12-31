/*
Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix  is shown below:

1 2 3
4 5 6
9 8 9  
The left-to-right diagonal = . The right to left diagonal = . Their absolute difference is .

Function description

Complete the  function in the editor below.

diagonalDifference takes the following parameter:

int arr[n][m]: an array of integers
Return

int: the absolute diagonal difference
Input Format

The first line contains a single integer, , the number of rows and columns in the square matrix .
Each of the next  lines describes a row, , and consists of  space-separated integers .

Constraints

Output Format

Return the absolute difference between the sums of the matrix's two diagonals as a single integer.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15
Explanation

The primary diagonal is:

11
   5
     -12
Sum across the primary diagonal: 11 + 5 - 12 = 4

The secondary diagonal is:

     4
   5
10
Sum across the secondary diagonal: 4 + 5 + 10 = 19
Difference: |4 - 19| = 15

Note: |x| is the absolute value of x  
*/
//Code

int diagonalDifference(vector<vector<int>> arr) {
 int primary_diagonal_sum = 0;
  int secondary_diagonal_sum = 0;
  for (int i = 0; i < arr.size(); i++) {
    primary_diagonal_sum += arr[i][i];
    secondary_diagonal_sum += arr[i][arr.size() - i - 1];
  }
  return abs(primary_diagonal_sum - secondary_diagonal_sum);
}


//or

int a=0;
    int b=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        a += arr[i][i];
        b += arr[i][n-i-1];
    } return abs(a-b);
}
