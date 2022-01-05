//Problem Link: https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/

/* Logic: Two rectangles can only overlap, if they have a point/side in common.
          Check if the other rectangle is either to the left,right,top,bottom wrt to first rectangle
*/ 

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        if (L1[0]>R2[0] || L2[0] > R1[0]) return false; //left-right
        if (R1[1]>L2[1] || R2[1] > L1[1]) return false; //top-bottom
        return true;
    }
};

// TC : O(1) , SC: O(1)