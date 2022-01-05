//Problem Link: https://practice.geeksforgeeks.org/problems/squares-in-nn-chessboard1801/1
//Logic: Using a recursive approach to calulate the number of squares:
// If side of 1*1 square is n, then the side of 2*2 square becomes n-1. Thus number of squares will be (n-1)*(n-1)

long long squaresInChessBoard(long long n) {
       if(n==1) return 1;
       return n*n + squaresInChessBoard(n-1); //creating a recursive call for n-1
    }
//TC: O(N)
// For O(1) time complexity: n(2n+1)(n+1)/6 can be used to calculate total number of squares