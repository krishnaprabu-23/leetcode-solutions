#include <stdlib.h>
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *ans = (int*)malloc(nums1Size * sizeof(int));
    *returnSize = nums1Size;
    for (int i = 0; i < nums1Size; i++) {
        ans[i] = -1;
        int j;
        for (j = 0; j < nums2Size; j++) {
            if (nums2[j] == nums1[i])
                break;
        } 
        for (j = j + 1; j < nums2Size; j++) {
            if (nums2[j] > nums1[i]) {
                ans[i] = nums2[j];
                break;
            }
        }
    }
    return ans;
}