void QuickSort(int *array, int  left, int right)
{
	stack<int> s;
	s.push(right);
	s.push(left);
	while (!s.empty())
	{
		int begin = s.top();
		s.pop();
		int end = s.top();
		s.pop();
		int n = postion(array, begin, end);
		if (begin < n - 1)
		{
			s.push(n - 1);
			s.push(begin);
		}
		if (end>n + 1)
		{
			s.push(end);
			s.push(n + 1);
		}
	}
}