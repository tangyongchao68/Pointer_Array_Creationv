// Pointer_Array_Creationv02.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

using namespace std;
int main()
{
	int num;
	cout << "����һ������" << "\n";
	cin >> num;
	int *arrays = new int[num];
	for (int i = 0; i < num; i++)
	{
		arrays[i] = i + 1;
	}
	for (int i = 0; i < num; i++)
	{
		cout << arrays[i] << "\t";
	}
	cout << "\n";
	delete[]arrays;
    return 0;
}

