class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       // 1 -> Brute Force
       
        // int size = nums.size();
        // vector<int> temp;
        // for(int i = 0; i<size; i++){
        //     if(nums[i] != 0){
        //         temp.push_back(nums[i]);
        //     }
        // }
        // int nz = temp.size();
        // for(int i = 0; i<nz; i++){
        //     nums[i] = temp[i];
        // }
        // for(int i = nz; i< size; i++){
        //     nums[i] = 0;
        // }
        // // return nums;

    // 2 -> Better Approach

        // int j = 0;
        // for(int i = 0; i< nums.size(); i++){
        //     if(nums[i] != 0){
        //         swap(nums[i], nums[j]);
        //         j++;
        //     }
        // }

    // 3-> Optimal

        int size = nums.size();
        int j = -1;
        for(int i = 0; i<size; i++){
            if(nums[i] == 0){
                j = i;
                break;
            }
        }
        if(j == -1) return;
        for(int i = j+1; i< size; i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};