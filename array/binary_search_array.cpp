//数组二分查找

#include <iostream>
using namespace std;

template <typename T> 
int binary_search_array(const T& key, const T data[], int N) {
	if (N < 0) {
		return -1;
	}

	int low = 0;
	int high = N - 1;//真实存在的索引
	while (low <= high) {
		int mid = low + (high - low) / 2;//防止low和high很大的时候溢出
		if (key < data[mid]) { // 小则去前半部分继续查找.
			high = mid - 1;
		}else if(data[mid] < key) { // 大则去后半部分继续查找.
			low = mid + 1;
		}else {
			return mid;
		}
	}
	return -1;
} 

int main() {
	int a[5] = {1,2,3,4,5};
	cout << binary_search_array(2, a, 5) << endl;

	cout << binary_search_array(0, a, 5) << endl;

	cout << binary_search_array(2, a + 2, 3) << endl;//查找2 在下标为2的位置，查找3个元素

	cout << binary_search_array(0, a, 0) << endl;

	return 0;
}