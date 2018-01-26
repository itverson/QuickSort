int postion(int *array, int left, int right)
{
	int key = left;//要更换当前位置上面的值，所以只能取下标,如果取array[left]的话则left位置的元素无法更换  
	while (left < right)
	{
		while (left<right&&array[key] <= array[right])//这里要取到等号  
		{
			--right;
		}
		while (left<right&&array[key] >= array[left])
		{
			++left;
		}
		if (left<right)//会有相遇的时候这个时候不交换避免重复交换  
			swap(array[left], array[right]);
	}
	swap(array[key], array[left]);
	return left;
}
void QuickSort(int *arr, int left, int right)//这里的right不会变得  
{
	if (left < right)
	{
		int n = postion(arr, left, right);
		QuickSort(arr, left, n - 1);//key之前的分组  
		QuickSort(arr, n + 1, right);//key之后的分组  
	}
}