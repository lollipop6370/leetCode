class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pointB = 0;
        int size = nums.size();
        for(int pointA = 0; pointA < nums.size(); pointA++){
            nums[pointB] = nums[pointA];
            if(nums[pointA] == val){
                size--;
            }
            else
                pointB++;
        }
        return size;
    }
};
