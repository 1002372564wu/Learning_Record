#pragma once
#include<iostream>
using namespace std;

template<class T>
class MyArray
{
public:
	//�вι���
	MyArray(int capacity)
	{
		//cout << "�вι���ĵ���" << endl;
		this->m_Capcity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capcity];
	}

	//��������
	MyArray(const MyArray& arr)
	{
		//cout << "��������ĵ���" << endl;
		this->m_Capcity = arr.m_Capcity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress; ǳ�������⣺�ᵼ�¶����ڴ��ظ��ͷ�

		//���
		this->pAddress = new T[arr.m_Capcity];
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr)
	{
		//cout << "operator=�ĵ���" << endl;
		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capcity = 0;
			this->m_Size = 0;
		}
		//���
		this->m_Capcity = arr.m_Capcity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T(arr.m_Capcity);
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨
	void push_back(const T& val)
	{
		//�ж������Ƿ���ڴ�С��
		if (this->m_Capcity == this->m_Size)
		{
			return;
		}
		this->pAddress[this->m_Size] = val;//������ĩβ��������
		this->m_Size++;//���������С
	}

	//βɾ��
	void pop_back()
	{
		//���û����ʲ������һ��Ԫ�أ���Ϊβɾ���߼�ɾ��
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//ͨ���±귽ʽ���������е�Ԫ��
	T& operator[](int index) //���Ҫ������ֵ��Ϊ��ֵ(��ֵ)����Ҫ��������
	{
		return this->pAddress[index];
	}

	//������������
	int getcapacity()
	{
		return this->m_Capcity;
	}

	//���������С
	int getsize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			//cout << "�����ĵ���" << endl;
			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress;//ָ��ָ��������ٵ���ʵ����

	int m_Capcity;//��������

	int m_Size;//�����С
};