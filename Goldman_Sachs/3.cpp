// Problem Link: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/

//Logic:Standard Two-pointer sliding window approach


int countSubArrayProductLessThanK(const vector<int>&a, int n, long long k) {
       long long int e=0,b=0,p=1,c=0;
       // b=beginning, e=end, p=product, c=count
       
       while( e<n )
       {
           p*=a[e];       //calculate product
           while( p>=k  ) 
           {
               p/=a[b];  //remove the value pointed by beginning pointer from product
               b++;      //increase beginning pointer by 1
           }
           if(p<k)
           {
               c+=e-b+1; //store the count of subarrays
               e++;
           }
       }
       return c;
    }

    //TC: O(N)
    //SC: O(1)