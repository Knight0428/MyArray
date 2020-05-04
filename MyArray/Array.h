#pragma once

#include <iostream>
#include <string>

using namespace std;

template<class T>
class Array
{
public:
	//有参构造
	explicit Array(int capacity);
	//拷贝构造
	Array(const Array& arr);
	//析构
	~Array();

	//=赋值重载
	T& operator=(const Array& arr);
	//[]运算符重载
	T& operator[](int index);
	//尾插法
	void pushBack(const T& val);
	//尾删法
	void popBack();
	//数组大小
	int getSize();

private:
	//开辟堆区的指针
	T* pAddress;
	//数组容量
	int m_Capacity;
	//数组大小
	int m_Size;

};
