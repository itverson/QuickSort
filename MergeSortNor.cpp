void MergeNor(int *arr, int left, int right, int *temp)
{
	int gap = 1;
	while (gap <= right)//控制总的组数  
	{
		for (int i = 0; i <right; i += 2 * gap)
		{
			int begin = i;
			int mid = i + gap - 1;
			int end = mid + gap;
			if (end>right)
			{
				end = right;
			}
			MergeSort(arr, begin, mid, end, temp);
		}
		gap = 2 * gap;
	}
}