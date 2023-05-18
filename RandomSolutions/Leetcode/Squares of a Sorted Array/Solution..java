class Solution {
    public int[] sortedSquares(int[] nums) {

        for(int i = 0; i < nums.length; i++){
            int squared = nums[i] * nums[i];
            nums[i] = squared;
        }
        Arrays.sort(nums);
        return nums;
    }
}