#include"boss.h"

//���캯��
Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\t��λ:" << this->getDeptName()
		<< "\t��λְ�𣺹���˾��������" << endl;
}

//��ȡ��λ����
string Boss::getDeptName()
{
	return string("�ϰ�");
}