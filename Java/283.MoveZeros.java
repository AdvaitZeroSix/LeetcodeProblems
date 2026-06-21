class Solution {
    public void moveZeroes(int[] nums) {
        int zeros=0;
        int nonzero=0;
        for(int i = 0; i<nums.length;i++){
            if(nums[i]==0){
                zeros++;
            }
            else{
                nums[nonzero++]=nums[i];
            }
        }
        while(zeros>0){
            nums[nums.length-zeros]=0;
            zeros--;
        }
    }
}
