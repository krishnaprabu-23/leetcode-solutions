int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) {
    int* arr = (int*)malloc(sizeof(int) * numsSize);
    int temp = k;
    int idx = 0;
    arr[idx++] = nums[0];
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] == nums[i - 1])
            temp--;
        else
            temp = k;

        if(temp > 0)
            arr[idx++] = nums[i];
    }
    *returnSize = idx;
    return arr;
}