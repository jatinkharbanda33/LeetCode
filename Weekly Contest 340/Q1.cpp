class Solution {
public:
    bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)
        return false;
  //suppose n=7 that is prime and its pair are (1,7)
  //so if a no. is prime then it can be check by numbers smaller than square root
  // of the n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            int j=i;
            if(isPrime(nums[i][i])>0 && nums[i][i]>ans){
                ans=nums[i][i];
            }
            if(i!=n-i-1){
                if(isPrime(nums[i][n-i-1])>0 && nums[i][n-i-1]>ans){
                ans=nums[i][n-i-1];
            }
                
            }
            
        }
        return ans;
        
    }
};