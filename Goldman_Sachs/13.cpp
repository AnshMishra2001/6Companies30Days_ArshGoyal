//Problem Link: https://practice.geeksforgeeks.org/problems/decode-the-string2444/1
//Logic: We scan through the entire string and whenever we encounter a digit,
//       We store it as k and the substring within backets is called recursively and appended k times 

string decodedString(string&s, int&i)
   {   string res;
       while(i<s.size() && s[i]!=']')
       {
           if(isdigit(s[i]))
           {  int k = 0;
              while(isdigit(s[i]) && i<s.size())
               {
                   k = k*10 + ( s[i++] -'0');
               }
               i++;
               string r = decodedString(s,i);
               
               while(k-- )
                res+=r;
                   
                i++;
           }
           
           else{
               res+=s[i++];
           }
       }
       return res;
   }
       

    string decodedString(string s){
        int i=0;
        return decodedString(s,i);
    }


    //TC: O(N), SC: O(N)