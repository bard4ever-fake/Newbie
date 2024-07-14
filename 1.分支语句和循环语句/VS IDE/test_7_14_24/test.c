#include <stdio.h>

//int main()
//{
//	while (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			break;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		i++;
		if (5 == i)
		{
			continue;
		}
		printf("%d ", i);
	}
	return 0;
}