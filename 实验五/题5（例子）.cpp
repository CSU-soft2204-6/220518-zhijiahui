#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>	//ʹ��set_intersection�㷨

int main() {
	//�ϲ�������Դ��������������˳��һ�£������������ʱ����
	vector<int> src1;
	for (int i = 0; i < 5; i++) {
		src1.push_back(i);		//0 1 2 3 4
	}

	vector<int> src2;
	for (int i = 3; i < 8; i++) {
		src2.push_back(i);		//3 4 5 6 7
	}

	//�ϲ�ǰ����ΪĿ��������ǰ�����ڴ�ռ�
	vector<int> dest;
	//����Ԫ�ظ�������Ϊ��������С�Ľ�Сֵ
	dest.resize(min(src1.size(), src2.size()));

	//��������Ԫ�صĽ��������ؽ������1��Ԫ�صĵ�����λ��last
	vector<int>::iterator last = set_intersection(src1.begin(), src1.end(), src2.begin(), src2.end(), dest.begin());
	
	//����������ʱ������������λ����ʹ�á������������1��Ԫ�صĵ�����λ��last
	for_each(dest.begin(), last, [](int val) {cout << val << " "; });			//3 4
	
	//����ʹ���������Ľ���������dest.end()��������ܳ��ֶ�������ֵ0
	//dest������СΪ5��������Ԫ�ع�2��������3�����0ֵ
	//for_each(dest.begin(), dest.end(), [](int val) {cout << val << " "; });	//3 4 0 0 0 

	return 0;
}

