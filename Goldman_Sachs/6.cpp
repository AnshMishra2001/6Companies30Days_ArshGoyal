//Problem Link: https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/

//Ugly numbers have 2,3,5 as the only prime factors

class Solution{
public:	
	ull getNthUglyNo(int n) {
	  vector<ull>dp(n+1); //to store ugly numbers from 1 to N
	  dp[1]=1; //1 is the first ugly number, by convention
	  ull p2=1, p3=1, p5=1, n2, n3, n5, i=2, mn;
      
	  while(i<=n)
	  {
	      n2 = 2*dp[p2]; //n2 stores multiples of 2
	      n3 = 3*dp[p3]; //similarly n3
	      n5 = 5*dp[p5]; //similarly n5
	      mn = min(n2,min(n3,n5)); //mn selects minimum from n2,n3,n5
	      dp[i++]=mn; //mn is stored
	      if(mn==n2)p2++; //pointer for 2, p2 increased if n2 is the minimum value
	      if(mn==n3)p3++; // likewise for p3
	      if(mn==n5)p5++; //likewise for p5
	  }
	  return dp[n]; //last element of the vector returned
	  
	}
};

//TC: O(N), SC:O(N)