#pragma once
#include<iostream>
using namespace std;
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>

#define FILENAME "file.txt"

class WorkerManager
{
public:

	//构造函数
	WorkerManager();

	//展示菜单
	void show_menu();

	//退出系统
	void ExitSystem();

	//记录职工人数
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//添加职工
	void Add_Emp();

	//保存文件
	void save();

	//判断文件是否为空的标志
	bool m_FileIsEmpty;

	//统计文件中人数
	int get_Empnum();

	//初始化员工
	void init_Emp();

	//显示职工
	void show_Emp();

	//删除职工
	void Del_Emp();

	//判断职工是否存在 如果存在返回职工所在数组的位置，不存在返回-1
	int IsExist(int id);

	//修改职工
	void Mod_Emp();

	//查找职工
	void find_Emp();

	//按照编号排序
	void sort_Emp();

	//清空文件
	void clean_file();

	//析构函数
	~WorkerManager();
};