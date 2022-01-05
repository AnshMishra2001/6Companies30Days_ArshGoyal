//Problem Link: https://practice.geeksforgeeks.org/problems/number-following-a-pattern3126/1
/* Logic: Stacks are used to store the numbers.
          For 'D': elements are pushed into the stack and popped later
          For 'I': elemnts are pushed and simultaneously popped from the stack
*/          

string printMinNumberForPattern(string S){
       stack<int>st;
       int num=1;
       string s="";
       
       for(char &it: S)
       {
           if(it=='D')
           {
               st.push(num);
               num++;
           }
           else
           {
               st.push(num);
               num++;
               while(!st.empty())
               {
                   s+=to_string(st.top());
                   st.pop();
               }
           }
       }
       st.push(num);
       while(!st.empty())
       {
           s+=to_string(st.top());
           st.pop();
       }
       return s;
       
    }
};


// TC = O(N), SC = O(1)