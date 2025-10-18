class Solution {
public:
    int sq(int n){
        int ans = 0;
        while(n!=0){
            ans+=(n%10)*(n%10);
            n/=10;
        }
        return ans;

    }
    bool isHappy(int n) {

        
        while(true){
        n = sq(n);

        if(n==1){
            return true;
        }
        if(n!=1 && n < 10){
            return false;
        }




        


        }


return false;


    }
};