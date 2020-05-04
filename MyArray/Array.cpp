#include "Array.h"


template<class T>
inline Array<T>::Array(int capacity)
{
	this->m_Capacity = capacity;
	this->m_Size = 0;
	this->pAddress = new T[this->m_Capacity];
}

template<class T>
Array<T>::Array(const Array & arr)
{
	this->m_Capacity = arr.m_Capacity;
	this->m_Size = arr.m_Size;
	//���
	this->pAddress = new T[this->m_Capacity];
	for (int i = 0; i < m_Size; i++)
	{
		this->pAddress[i] = arr.pAddress[i];
	}
}

template<class T>
Array<T>::~Array()
{
	if (this->pAddress != NULL)
	{
		delete[] this->pAddress;
		this->pAddress = NULL;
	}
}

template<class T>
T & Array<T>::operator=(const Array & arr)
{
	//ԭ�����������ͷ�
	if (this->pAddress != NULL)
	{
		delete this->pAddress;
		this->pAddress = NULL;
	}


	this->m_Capacity = arr.m_Capacity;
	this->m_Size = arr.m_Size;
	//���
	this->pAddress = new T[this->m_Capacity];
	for (int i = 0; i < m_Size; i++)
	{
		this->pAddress[i] = arr.pAddress[i];
	}
	return this*;
}

template<class T>
T & Array<T>::operator[](int index)
{
	return this->pAddress[index];
}

template<class T>
void Array<T>::pushBack(const T & val)
{
	//���������Ͳ�����
	if (this->m_Capacity == this->m_Size)
	{
		return;
	}
	this->pAddress[this->m_Size] = val;
	this->m_Size++;
}

template<class T>
void Array<T>::popBack()
{
	if (this->m_Size == 0)
		return;
	this->m_Size--;
}

template<class T>
int Array<T>::getSize()
{
	return this->m_Size;
}


