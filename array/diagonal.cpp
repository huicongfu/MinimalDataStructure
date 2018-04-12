// 对角线问题
#include <iostream>

using namespace std;

int main() {

	const int n = 640;//常量
	int x = 4;
	int y = 2;

	int M[n][n];

	
	// 方法1:
	for (int i = 0; i < n; ++i)//n*n判断
	{
		for(int j = 0; j < n; ++j) {
			if (i == j)
			{
				M[i][j] = x;
			}else {
				M[i][j] = y;
			}
		}
	}

	
	//方法2:
	for (int i = 0; i < n; ++i)// a*n
	{
		for (int j = 0; j < n; ++j)
		{
			M[i][j] = y;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		M[i][i] = x;
	}

	//方法3：
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < i; ++j) {
			M[i][j] = y;
		}
		M[i][i] = x;

		for(int j = i + 1; j < n; ++j) {
			M[i][j] = y;
		}
	}
	
	//输出
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{	
			cout << M[i][j];
		}
		cout << endl;
	}

	return 0;
}