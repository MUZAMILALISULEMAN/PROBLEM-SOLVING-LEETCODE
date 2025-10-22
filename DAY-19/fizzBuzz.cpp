class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i=1;
        vector<string>  k;
        while(i<=n){
            if(i%3 == 0 && i%5 == 0){
                k.push_back("FizzBuzz");
            }else if(i%3 == 0){
                k.push_back("Fizz");
            }else if(i%5 == 0){
                    k.push_back("Buzz");

            }else{
                k.push_back(to_string(i));
            }

            i++;
        }

        return k;



    }
};