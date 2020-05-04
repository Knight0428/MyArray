#pragma once

#include <iostream>
#include <string>

using namespace std;

template<class T>
class Array
{
public:
	//�вι���
	explicit Array(int capacity);
	//��������
	Array(const Array& arr);
	//����
	~Array();

	//=��ֵ����
	T& operator=(const Array& arr);
	//[]���������
	T& operator[](int index);
	//β�巨
	void pushBack(const T& val);
	//βɾ��
	void popBack();
	//�����С
	int getSize();

private:
	//���ٶ�����ָ��
	T* pAddress;
	//��������
	int m_Capacity;
	//�����С
	int m_Size;

};
