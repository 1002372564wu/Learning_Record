#include<iostream>
using namespace std;

//������װ

//����CPU��
class CPU
{
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};

//�����Կ���
class VideoCard
{
public:
	//����ļ��㺯��
	virtual void display() = 0;
};

//�����ڴ�����
class Memory
{
public:
	//����ļ��㺯��
	virtual void storage() = 0;
};


//������
class computer
{
public:
	computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//�������������
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//�ṩ�������� �ͷ�3���������
	~computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_mem;
};

//���峧��
//Inter����
class InterCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter��CPU��ʼ������" << endl;
	}

};
class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter���Կ���ʼ������" << endl;
	}

};
class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter���ڴ�����ʼ������" << endl;
	}

};

//Lenovo����
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo��CPU��ʼ������" << endl;
	}

};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo���Կ���ʼ������" << endl;
	}

};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo���ڴ�����ʼ������" << endl;
	}

};

void test()
{
	//��һ̨�������
	CPU* intercpu = new InterCPU;
	VideoCard* intercard = new InterVideoCard;
	Memory* intermemory = new InterMemory;

	//������һ̨����
	computer* computer1 = new computer(intercpu, intercard, intermemory);
	computer1->work();
	delete computer1;

	//�����ڶ�̨����
	computer* computer2 = new computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	//��������̨����
	computer* computer3 = new computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main()
{
	test();
}
