//Problem Link: https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1
// Logic: Divide the array elements by k and keep the count of remainders

bool canPair(vector<int> arr, int k) {
        
        unordered_map<int,int> mp; //maps the frequencies of all remainders from array elements are divided by k
        
        int n = arr.size();
        if(n % 2 != 0) return false;
        
        for(int i=0;i<n;i++){
            mp[arr[i] % k]++;  // Count all remainders' frequencies
        }
        
        for(int i=0;i<n;i++){
            
            int rem1 = arr[i] % k;
            
            if(rem1 == 0){
                if(mp[rem1] % 2 != 0) return false;
            }
            else{
                int rem2 = k - rem1;
                if(rem1 == rem2 and mp[rem1] % 2 != 0) return false;
                if(mp.find(rem2) == mp.end()) return false;
                if(mp[rem1] != mp[rem2]) return false;
            }
            
        }
        return true;
    }

    //TC: O(N)