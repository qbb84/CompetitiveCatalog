class Solution {
    public int singleNonDuplicate(int[] nums) {
        if(nums.length == 1) return nums[0];
        int num = 0;

        for(int i = 0; i <= nums.length - 1; i++){
              if(i == nums.length-1 ) return nums[nums.length - 1];
                if(nums[i] == nums[i+1]){
                       i+=1;
                }else{
                    num = nums[i]; break;
                }


        }
        return num;
    }
}