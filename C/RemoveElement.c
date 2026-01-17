int removeElement(int* nums, int numsSize, int val) {
    int i,j;
    while (i<numsSize){
        if(nums[i]==val){
            for(j=i+1;j<numsSize;j++){
                nums[j-1]=nums[j];
            }
            numsSize--;
        }
        else{
            i++;
        }
    }
    return numsSize;
}
