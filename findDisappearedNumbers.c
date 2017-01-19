int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *array = malloc((numsSize+1)*sizeof(int));

    for (int i = 0; i <= numsSize; i++) {
        *(array+i) = 0;
    }
    
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (*(nums+i) <= numsSize) {
            *(array+*(nums+i)) = 1;
            count++;
        }
    }
    
    returnSize = malloc(count*sizeof(int));
    int index = 0;
    for (int i = 1; i <= numsSize; i++) {
        if (*(array+i) == 0) {
            *(returnSize+index) = i;
            index++;
        }
    }
    free(array);
    return returnSize;
}
