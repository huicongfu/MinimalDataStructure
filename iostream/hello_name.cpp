// C++ string
#include <iostream>

#include <string>

using namespace std;

int main() 
{
	string name; // name是对象哦
	cin >> name; // 空格
	cout << "hello, " << name << endl;
	cout << name.size() << endl; //()函数
	name = name + name;
	cout << name << endl;
	return 0;
}
