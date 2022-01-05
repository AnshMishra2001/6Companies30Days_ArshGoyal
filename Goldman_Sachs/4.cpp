//PROBLEM LINK: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/

string encode(string s)
{ 
    string ans="";
    int i=0,j=0;
    while( j<s.size())
    {
        while(s[i] == s[j]) //count the length of same contiguous characters
        j++;
        
        ans+=s[i] + to_string(j-i); 
        i=j; 
    }
    return ans;
} 

//TC: O(N) , SC = O(1)