//Problem Link: https://practice.geeksforgeeks.org/problems/total-decoding-messages1235/1/
/*  Logic: We deal with essentially 4 types of cases, where numbers are
                   i-1   i
                   0    X
                   X    0
                   0    0
                   X    X
                  where X is a non-zero number            
*/                          
         


int CountWays(string str){
		    int dp[str.size()];
		    dp[0]=1;
		    for(int i=1; i<str.size() ; i++)
		    {
		        if(str[i-1]!='0' && str[i]=='0')
		        dp[i]=(dp[i-1]=='2' || dp[i-1]=='1' ? ( i>=2 ? dp[i-2]: 1) :0);
		    
		        else 
		        if(str[i-1]=='0' && str[i]!='0')
		        dp[i]=dp[i-1];
		        
		        else
		        if(str[i-1]=='0' && str[i]=='0')
		        dp[i]=0;
		        
		        else
		        {
		            if(stoi(str.substr(i-1, i+1))>26)
		            dp[i] = dp[i-1];
		            
		            else 
		            dp[i] = dp[i-1] + ( i>=2 ? dp[i-2] : 1);
		        }
		       // cout<<dp[i]<<"\t";
		        
		    }
		    return dp[str.size()-1];
		}

        //TC: O(N) , SC:O(N)