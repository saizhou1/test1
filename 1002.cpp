// lainxi.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<cstdio>
using namespace std;


int main()
{
	int T;
	char a[1000], b[1000];
	char maxstr[1001], minstr[1000];
	int maxlen=0, minlen=0, flag = 0;
	cin >> T;
	for (int i = 1; i <= T; ++i)
	{
		cin >> a >> b;
		if (strlen(a) > strlen(b))
		{
			strcpy_s(maxstr, a);
			strcpy_s(minstr, b);
		}
		else
		{
			strcpy_s(maxstr, b);
			strcpy_s(minstr, a);

		}
		maxlen = strlen(maxstr);
		minlen = strlen(minstr);

		for (int j = 0; j < maxlen; ++j)
		{
			if (j < minlen)
			{
				maxstr[maxlen - 1 - j] = maxstr[maxlen - 1 - j] + minstr[minlen - 1 - j] - '0';
			}
			if (maxstr[maxlen - 1 - j] > '9')
			{
				maxstr[maxlen - 1 - j] -= 10;
				if (maxlen - 1 - j != 0)
				{
					maxstr[maxlen - 2 - j]++;
				}
				else
				{
					flag = 1;
				}
			}
		}
		std::cout << "Case " << i << ":" << endl;
		if(flag==0)
		{
			cout << a << " + " << b << " = " << maxstr << endl;

		}
		else
		{
			cout << a << " + " << b << " = 1" << maxstr << endl;
		}
		if (i != T)
			cout << endl;
	}
	   return 0;
}



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
