int postion(int *array, int left, int right)
{
	int key = left;//Ҫ������ǰλ�������ֵ������ֻ��ȡ�±�,���ȡarray[left]�Ļ���leftλ�õ�Ԫ���޷�����  
	while (left < right)
	{
		while (left<right&&array[key] <= array[right])//����Ҫȡ���Ⱥ�  
		{
			--right;
		}
		while (left<right&&array[key] >= array[left])
		{
			++left;
		}
		if (left<right)//����������ʱ�����ʱ�򲻽��������ظ�����  
			swap(array[left], array[right]);
	}
	swap(array[key], array[left]);
	return left;
}
void QuickSort(int *arr, int left, int right)//�����right������  
{
	if (left < right)
	{
		int n = postion(arr, left, right);
		QuickSort(arr, left, n - 1);//key֮ǰ�ķ���  
		QuickSort(arr, n + 1, right);//key֮��ķ���  
	}
}