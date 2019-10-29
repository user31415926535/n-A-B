#include<stdio.h>
int main()
{
	int t[100],n, a, b, m;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &a, &b);
		m = a + b;
	}
	for(int i=0;i<n;i++)
	{ 
		printf("%d\n", t[m]);
	}
	return 0;
}