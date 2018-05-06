//集合 有待考究的话：集合内部是有序的
#include <iostream>
#include <set>

using namespace std;

int main() {
	
	set<int> s = {3,2,1,4,5};
	s.insert(1);
	s.insert(7);

	auto iter = s.find(0); //s.end()这个是边界位置，说明找不到
	iter = s.find(5);
	if (iter != s.end())
	{
		s.erase(iter);//删除位置
	}

	iter = s.begin();
	++ iter;
	-- iter;

	for (auto iter = s.cbegin(); iter != s.cend(); ++ iter) {//auto 自动类型推导
		cout << *iter << endl;//从小到大
	}

	for (auto iter = s.crbegin(); iter != s.crend(); ++iter) {//c 常量，不能改变；r 逆向
		cout << *iter << endl;// 逆向输出，从大到小
	}

	for (const auto&x : s) {//基于范围的for循环
		cout << x;
	}

	return 0;
}