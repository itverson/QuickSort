int postion(int *array, int left, int right)
{
	int key = array[left];//因为最后是用值来替换所以就记录他的下标就可以了  
	while (left<right)
	{
		while (left<right&&array[right] >= key)
		{
			--right;
		}
		if (left < right)
			array[left] = array[right];
		while (left<right&&array[left] <= key)
		{
			left++;
		}
		if (left < right)
			array[right] = array[left];
	}
	array[left] = key;
	return left;
}
void QuickSort(int *array, int left, int right)
{
	if (left < right)
	{
		int  n = postion(array, left, right);
		QuickSort(array, left, n - 1);
		QuickSort(array, n + 1, right);
	}
}