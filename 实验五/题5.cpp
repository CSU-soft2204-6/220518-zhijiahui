#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Myprint(int val)
{
	cout<<val<<" ";
}

int main()
{	
    int t;
    
	vector<int> v1;
	cout<<"Input the first vector"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>t;
		v1.push_back(t);
	}
	
	vector<int> v2;
	cout<<"Input the second vector"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>t;
		v2.push_back(t);
	}
	
	vector<int> v3;
	v3.resize(min(v1.size(),v2.size()));
	
	vector<int>::iterator last = set_intersection(v1.begin(),v1.end(),
	v2.begin(),v2.end(),v3.begin());
	
	for_each(v3.begin(),last,Myprint);
	
	system("pause");
	return 0;
}







