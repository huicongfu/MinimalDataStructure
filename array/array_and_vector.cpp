// 数组和向量
#include <iostream>
#include <vector>  //向量头文件

using namespace std;

int main()
{
	const int n = 42; //const 常量
	const int c = 1;

	int A1[n];
	vector<int> V1(n);//vector<int> 当做一个整体

	// 初始化.
	for (int i = 0; i < n; ++i)
	{
		A1[i] = c;
	}
	vector<int> V2(n,c);//初始化n个元素，赋值为c

	// 列表初始化.
	vector<int> V3 = {1, 2, 3, 4, 5}; //初始化方法2 
	for(size_t i = 0; i < V3.size(); ++i) {
		cout << V3[i] << " ";
	}
	cout << endl;

	//动态变化
	V3.push_back(6);
	cout << V3.size() << endl;
	cout << V3.front() << " " << V3.back() << endl;
	V3.pop_back();
	cout << V3.size() << endl;
	cout << V3.front() << " " << V3.back() << endl;

	//迭代器
	for(auto iter = V3.begin(); iter != V3.end(); ++iter) {//++iter 性能较好
		cout << *iter << " ";//*iter 取值，跟指针类似
	}
	cout << endl;

	return 0;
}