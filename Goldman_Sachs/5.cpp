//Problem Link: https://leetcode.com/problems/greatest-common-divisor-of-strings/

//Logic: Two strings can only have a GCD, if on adding them the resultant string is equal

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return str1+str2==str2+str1 ? str1.substr(0, gcd(str1.length(), str2.length())) : "";
        //check if both strings on addition yield same string
        // Yes: Return the substring, whose length is the gcd of length of two strings
        // No: Return Null
    }
};


// TC=O(N+M)   N and M are the lengths of two strings
// SC=O(1)