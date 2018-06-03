//向量二分查找 size_t 无符号整数 向量的是左闭右开的区间

#include <iostream>
#include <vector>

using namespace std;

template <typename T>

bool binary_search_vector (const T& key, typename vector<T>::const_iterator data, size_t N) {// data可以看作是指针，但是不能改变原来的值
	size_t low = 0;
	size_t high = N;//[0,N)

	while(low < high) {
		size_t mid = low + (high - low)/2;
		if (key < * (data + mid))// *(p + mid)
		{
			high = mid;	
		}else if (*(data + mid) < key) {
			low = mid + 1;
		}else {
			return true;
		}
	}

	return false;

}

int main() {

	vector<int> v = {1, 2, 3, 4, 5};
	cout << binary_search_vector(2, v.cbegin(), 5) << endl; //cbegin 跟begin一样，但是只能看不能改变
	cout << binary_search_vector(0, v.cbegin(), 5) << endl;
	cout << binary_search_vector(2, v.cbegin() + 2, 3) << endl;
	cout << binary_search_vector(0, v.cbegin(), 0) << endl;
	return 0;
}
