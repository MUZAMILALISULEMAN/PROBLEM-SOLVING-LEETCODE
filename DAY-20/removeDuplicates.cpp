class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> newNums;
        int count = 0;
        bool flag = true; 
        for(int i=0;i<nums.size() - 1;i++){

            if(nums[i] != nums[i+1]){
                newNums.push_back(nums[i]);
                count++;
                flag = false;
            }

        }
    if(flag){
        
        count = 1;

    }else{
        count++;
    }
    newNums.push_back(nums[nums.size() - 1]);
    nums = newNums;
    return count;
    }
};