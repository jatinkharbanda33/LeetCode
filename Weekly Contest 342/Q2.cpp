class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int> check (n+1,false);
        for(int i=1;i<=n;i++){
            if(i%3==0){
                check[i]=true;
            }
            else if(i%5==0){
                check[i]=true;
            }
            else if(i%7==0){
                check[i]=true;
            }
        }
        int sum=0;
        for(int i=1;i<=n;i++){
            if(check[i]==true){
                sum+=i;
            }
        }
        return sum;
        
    }
};