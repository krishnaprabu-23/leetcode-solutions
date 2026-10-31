void moveZeroes(int* nums, int numsSize) {
    int k;
    int i;

    k = 0;
    i = 0;
    while (i < numsSize)
    {
        if (nums[i] != 0)
        {
            nums[k] = nums[i];
            k++;
        }
        i++;
    }
    while (k < numsSize)
    {
        nums[k] = 0;
        k++;
    }
}