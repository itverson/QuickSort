int postion(int *array, int left, int right)
{
	int key = array[left];//��Ϊ�������ֵ���滻���Ծͼ�¼�����±�Ϳ�����  
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