//第五讲 数组和向量的排序

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	const int N = 5;
	int a[N] = {2, 5, 3, 1, 4};

	sort(a, a+N);//排序，[a, a+n)左闭右开区间 a[0],a[1]···,a[N-1] 
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	// 使用函数对象greater<int>()进行从大到小排序.
	sort(a, a+N, greater<int>()); //逆序排序 5，4，3，2，1

	string b[N] = {"www", "algorithm", "racer", "text", "wait"};
	sort(b, b+N);
	sort(b, b+N, greater<string>());
	
	//向量的排序
	vector<string> v = {"www", "algorithm", "racer", "text", "wait"};
	sort(v.begin(), v.end());// 同上，也是左闭右开区间
	sort(v.begin(), v.end(), greater<string>());//逆序

	// 使用迭代器打印v中所有元素.
	for(auto iter = v.begin(); iter != v.end(); ++iter) {
		cout << *iter << endl;
	}

	// 使用逆向迭代器进行从大到小排序. rend()跟v.end()一样不存在的
	sort(v.rbegin(), v.rend());
	for(size_t i = 0; i < v.size(); ++i) cout << v[i] << " ";
	cout << endl;

	//使用基于范围的for循环打印v中所有元素.
	for(const string& x : v) {
		cout << x << endl;//正向返回
	}

	return 0;

}