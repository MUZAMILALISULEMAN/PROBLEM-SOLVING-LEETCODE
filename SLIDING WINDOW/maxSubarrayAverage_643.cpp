class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        double window = 0;
        int left = 0;
        int right = k;
        for(int i=0;i<right;i++){
            window+=nums[i];
        }
    
        double temp = window;
        for(int i=right;i<nums.size();i++){
            window -= nums[left++];
            window+=nums[i];
            if(window/k > temp/k){
                temp = window;
            }
    }

    return temp/k;











        
    }
};