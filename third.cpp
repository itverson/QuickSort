int postion(int *array, int left, int right)
{
	Keydata(array, left, right);
	int fast = left;//先走  
	int slow = left - 1;//后走  
	while (fast<right)
	{
		if (array[fast] < array[right])
		{
			++slow;
			if (slow != fast)
				swap(array[slow], array[fast]);
		}
		fast++;
	}
	++slow;
	swap(array[slow], array[right]);
	return slow;
}
void QuickSort(int *arr, int left, int right)
{

	if (left < right)
	{
		int n = postion(arr, left, right);
		QuickSort(arr, left, n - 1);
		QuickSort(arr, n + 1, right);
	}
}