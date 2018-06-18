// 15-以集合描述算法

#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main() 
{
	//差集
	set<int> A = {3, 2, 1, 4, 7, 9, 11};
	set<int> B = {6, 2, 9};
	vector<int> C;
	//为了时间效率，初始内存大小
	C.reserve(A.size());

	for (auto iter = A.begin(); iter != A.end(); ++iter) {
		if (B.find(*iter) == B.end())//B.end()是不存在的，找不到就插入集合
		{
			C.push_back(*iter);//在vector类中作用为在vector尾部加入一个数据
		}
	}

	for (const auto& x : C) {
		cout << x << " ";
	}
	cout << endl;

	//转存 空间小，时间效率差点
	set<int> D = {3, 5, 1, 7, 2, 8, 0};
	set<int> E;
	while(!D.empty())
	{
		if (*D.begin() % 2 == 0)//
		{
			E.insert(*D.begin());
		}
		D.erase(D.begin());
	}

	for (const auto& x : E) {
		cout << x << " ";
	}
	cout << endl;

	//动态变化
	set<string> F = {"English", "Ability", "Algorithm", "Faith"};
	while(F.size() > 1) {
		auto first = *F.begin();
		F.erase(F.begin());
		auto second = *F.begin();
		F.erase(F.begin());
		F.insert(first + second);
	}

	if (F.size() > 0)
	{
		cout << * F.begin() << endl;
	}

	return 0;
}