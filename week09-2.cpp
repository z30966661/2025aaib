//week09-2.cpp c++ std::sort()
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	vector<int> a(100);
	for(int i=0; i<100; i++){
		cin >> a[i];
	}
	std::sort(a.begin(),a.end());
	for(int i=0; i<100; i++){
		printf("%d ",a[i]);
	}
}
