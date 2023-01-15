#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>	//使用set_intersection算法

int main() {
	//合并的两个源容器必须有序，且顺序一致，否则程序运行时崩溃
	vector<int> src1;
	for (int i = 0; i < 5; i++) {
		src1.push_back(i);		//0 1 2 3 4
	}

	vector<int> src2;
	for (int i = 3; i < 8; i++) {
		src2.push_back(i);		//3 4 5 6 7
	}

	//合并前，需为目标容器提前分配内存空间
	vector<int> dest;
	//交集元素个数至多为两容器大小的较小值
	dest.resize(min(src1.size(), src2.size()));

	//求两容器元素的交集，返回交集最后1个元素的迭代器位置last
	vector<int>::iterator last = set_intersection(src1.begin(), src1.end(), src2.begin(), src2.end(), dest.begin());
	
	//遍历新容器时，迭代器结束位置需使用【交集】的最后1个元素的迭代器位置last
	for_each(dest.begin(), last, [](int val) {cout << val << " "; });			//3 4
	
	//不能使用新容器的结束迭代器dest.end()，否则可能出现多余的填充值0
	//dest容器大小为5个，交集元素共2个，多余3个填充0值
	//for_each(dest.begin(), dest.end(), [](int val) {cout << val << " "; });	//3 4 0 0 0 

	return 0;
}

