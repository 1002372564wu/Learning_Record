#include<iostream>
using namespace std;

//电脑组装

//抽象CPU类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};

//抽象显卡类
class VideoCard
{
public:
	//抽象的计算函数
	virtual void display() = 0;
};

//抽象内存条类
class Memory
{
public:
	//抽象的计算函数
	virtual void storage() = 0;
};


//电脑类
class computer
{
public:
	computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//让零件工作起来
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供析构函数 释放3个电脑零件
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

//具体厂商
//Inter厂商
class InterCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Inter的CPU开始计算了" << endl;
	}

};
class InterVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Inter的显卡开始工作了" << endl;
	}

};
class InterMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Inter的内存条开始工作了" << endl;
	}

};

//Lenovo厂商
class LenovoCPU :public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;
	}

};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始工作了" << endl;
	}

};
class LenovoMemory :public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始工作了" << endl;
	}

};

void test()
{
	//第一台电脑零件
	CPU* intercpu = new InterCPU;
	VideoCard* intercard = new InterVideoCard;
	Memory* intermemory = new InterMemory;

	//创建第一台电脑
	computer* computer1 = new computer(intercpu, intercard, intermemory);
	computer1->work();
	delete computer1;

	//创建第二台电脑
	computer* computer2 = new computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;

	//创建第三台电脑
	computer* computer3 = new computer(new LenovoCPU, new InterVideoCard, new LenovoMemory);
	computer3->work();
	delete computer3;
}

int main()
{
	test();
}
