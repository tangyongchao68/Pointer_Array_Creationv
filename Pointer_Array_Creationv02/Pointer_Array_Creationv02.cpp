// Pointer_Array_Creationv02.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>                 //这个头文件是输入输出的，input and output stream.

using namespace std;
int main()
{
	int num;
	cout << "输入一个数：" << "\n";
	cin >> num;
	int *arrays = new int[num];        //new运算符根据输入值计算要分配的内存空间大小
	for (int i = 0; i < num; i++)
	{
		arrays[i] = i + 1;
	}
	for (int i = 0; i < num; i++)
	{
		cout << arrays[i] << "\t";
	}
	cout << "\n";
	delete[]arrays;                  //delete运算符后面有一个括号，说明要删除的是一个数组
    return 0;
}

