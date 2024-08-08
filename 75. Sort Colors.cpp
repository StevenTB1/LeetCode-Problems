class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0;
        int two = nums.size() - 1;

        for(int i = 0; i <= two; i++){
            while(nums[i] == 2 && i <= two){
                swap(nums[i] , nums[two--]);
            }
            if(nums[i] == 0){
                swap(nums[i], nums[zero++]);
            }
        }
    }
};
