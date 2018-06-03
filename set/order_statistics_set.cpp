// 次序统计量，找到第k个元素
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	set<int> s = {3, 2, 1, 4, 5};
	int k;
	cin >> k;
	if (k <= 0 || k > s.size()) {
		cout << "超出范围" << endl;
	}else {
		//第一种方法：优先使用
		auto iter = s.begin();
		for(int i = 0; i < k-1; ++i) {
			++iter;//下一元素
		}
		cout << *iter << endl;
/*
		//第二种方法，效率不高
		vector<int> v;
		// 预留k - 1个元素空间.
		v.reserve(k-1);
		// 删除S中的前k - 1个元素并暂存到V中.
		for(int i = 0; i < k - 1; ++i) {
			v.push_back(*s.begin());//保存要删除的元素
			s.erase(s.begin());//删除位置
		}
		cout << *iter << endl;
		// 将前k - 1个元素放回S中.
		for(size_t i = 0; i < v.size(); ++i) {
			s.insert(v[i])
		}
		*/
	}

	return 0;
}