int* twoSum(int* nums, int numsSize, int target) {
    int *result = malloc(sizeof(int)*2);
    for (int i = 0; i < numsSize; i++) {
        result[0] = i;
        for (int j = i+1; j < numsSize; j++) {
            int tmp = nums[i] + *(nums+j);
            if (tmp == target) {
                result[1] = j;
                return result;
            }
        }
    }
    return result;
}
