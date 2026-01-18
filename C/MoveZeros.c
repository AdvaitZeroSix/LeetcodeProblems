void moveZeroes(int* nums, int numsSize) {
    int i, count = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            count++;
        }
    }

    int write = 0;
    i = 0;
    while (i < numsSize && count > 0) {
        if (nums[i] != 0) {
            nums[write] = nums[i];
            write++;
            count--;
        }
        i++;
    }
    while (write < numsSize) {
        nums[write] = 0;
        write++;
    }
}
