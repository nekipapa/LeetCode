//思路扫描整个数组,遇到不为0的数将其依次往前面放,最后将后面部分全部清0
void moveZeroes(int* nums, int numsSize) {
    int p1, p2;	
	p1 = p2 = 0;
	
	while(p2 < numsSize) {
		if(nums[p2] != 0) 
			nums[p1++] = nums[p2++];
		else
			p2++;
	}
	while(p1 < numsSize)
		nums[p1++] = 0;
}