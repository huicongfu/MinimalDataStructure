//3n+1 问题
#include <iostream>
#include <vector>

using namespace std;

//迭代方法 iterative(迭代的，重复的)
size_t iterative_Collatz(size_t n) {

	if (n < 1)
	{
		return 0;
	}

	size_t L = 1;

	while(n != 1) {
		// if (n % 2 == 0)
		// {
		// 	n = n / 2;
		// }else {
		// 	n = 3 * n + 1;
		// }

		//method 2
		n = (n % 2 == 0) ? n/2 : n*3+1;

		++L;
	}

	return L;
}

// 备忘录方法
size_t memoized_Collatz(vector<size_t>& v, size_t n) {
	// 前提 n > 0   每次计算的结果存在v[n]

	// 防止n溢出,所以先把n降下来
	size_t L = 1;
	while (n >= v.size()) {
		n = (n%2 == 0) ? n/2 : 3*n + 1;
		++L;
	}

	if (v[n] == 0)
	{
		v[n] = memoized_Collatz(v, (n%2 == 0) ? n/2 : 3*n + 1) + L;
	}

	return v[n];

}

int main() {
	size_t n;
	cin >> n;
	//利用迭代直接求解
	cout << iterative_Collatz(n) << endl;
	//利用备忘录保存已算出的值，适合多次求解
	const size_t m = 10000;
	vector<size_t> v(m, 0);
	v[1] = 1;// 如果不设置这个值就没办法跳出循环 进一步优化,对小于v.size() 的2次幂进行赋值 v[2] v[4] v[8]
	if(n < 1) {
		cout << 0 << endl;
	}else {
		cout << memoized_Collatz(v, n) << endl;
	}

	return 0;

}

