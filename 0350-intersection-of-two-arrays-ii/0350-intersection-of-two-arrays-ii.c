 int cmp(const void *a, const void *b)
 {
     return (*(int*)a-*(int*)b);
 }

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){

    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);

    int i=0, j=0, count=0;

    while (i<nums1Size && j<nums2Size)
    {
        if (nums1[i]>nums2[j]) j++;

        else if (nums1[i]<nums2[j]) i++;
        
        else if(nums1[i]==nums2[j])
        {
            nums1[count] = nums1[i];
            count++;
            i++;
            j++;
        }
    }

    *returnSize = count;
    return nums1;
}