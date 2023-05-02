class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int n=player1.size();
        int prev1=-1;
        int prev2=-1;
        int i=0;
        int sum1=0;
        while(i<n){
            if(prev1==10 || prev2==10){
                sum1+=2*player1[i];
            }
            else{
                sum1+=player1[i];
                
            }
            prev1=player1[i];
            if(i-1>=0){
                prev2=player1[i-1];
            }
            i++;
        }
        int sum2=0;
        prev1=-1;
        prev2=-1;
        i=0;
         while(i<n){
            if(prev1==10 || prev2==10){
                sum2+=2*player2[i];
            }
            else{
                sum2+=player2[i];
                
            }
            prev1=player2[i];
            if(i-1>=0){
                prev2=player2[i-1];
            }
            i++;
        }
        if(sum1>sum2) return 1;
        if(sum2>sum1) return 2;
        return 0;
        
    }
};