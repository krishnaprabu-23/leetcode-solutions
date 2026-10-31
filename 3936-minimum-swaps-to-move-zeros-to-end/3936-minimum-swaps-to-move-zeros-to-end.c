int minimumSwaps(int* nums, int numsSize) {
    int zeros = 0;
    int x = numsSize - 1;
    int r = 0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == 0) {
            zeros++;
        }
    }
    while(zeros > 0) {
        if(nums[x] != 0){
            r++;
        }
        x--;
        zeros--;
    }
    return r;
}