//Problem Link: Https://www.geeksforgeeks.org/distributing-m-items-circle-size-n-starting-k-th-position/

//Logic: We use m%n to skip rounds after 1 complete cyle 

class Solution {
  public:
    int findPosition(int n , int m , int k) {
        k = k-1; 
        if(n==1)return 1;
        return (m%n + k)==n ? m%n + k : (m%n + k)%n;
}
};
//TC = O(1)