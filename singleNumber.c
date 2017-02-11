#include <stdio.h>
int singleNumber(int* nums, int numsSize);
int main(int argc, char ** argv)
{
    int nums[] = { 2, 3, 4, 2, 3, 4, 5 };
    printf("number = %d \n", singleNumber(nums, sizeof(nums)/sizeof(int)));
    return 0;
}
int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i<numsSize; i++)
    {
        result ^=nums[i];
    }
    return result;
}
