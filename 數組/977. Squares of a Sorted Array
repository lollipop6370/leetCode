class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size() - 1;
        vector<int> sol(nums.size() , 0);
        for(int i = 0, j = n; i <= j;){
            if(nums[i] * nums[i] > nums[j] * nums[j]){
                sol[n] = nums[i] * nums[i];
                n--;
                i++;
            }
            else{
                sol[n] = nums[j] * nums[j];
                n--;
                j--;
            }
            
        }
        return sol;
    }
};
