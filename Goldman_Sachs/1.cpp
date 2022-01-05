//Problem Link: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& str) {
       vector<vector<string>>v; //to store anagrams
       map<string, vector<string>>m; // string : anagram(s) 
       for(string &i:str)
       {
           string s = i;
           sort(s.begin() , s.end()); //sort all anagrams lexicographically
           m[s].push_back(i); //store all anagrams together
       }
       for(auto it:m)
       {
           v.push_back(it.second); //push the anagrams into the vector
       }
       return v;
    }
};

//TC = N*M*logM
//SC= O(N)

