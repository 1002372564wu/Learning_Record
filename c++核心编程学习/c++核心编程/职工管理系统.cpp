#include<iostream>
using namespace std;
#include "workerManager.h"
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

int main()
{
	//���Դ��룺
	/*Worker* worker = NULL;
	worker = new Employee(1, "�⻪��", 1);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "����ɭ", 2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "�Ʊ�", 3);
	worker->showInfo();
	delete worker;*/

	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0;//�洢�û���ѡ��
	while (true)
	{
		//����չʾ�˵���Ա����
		wm.show_menu();

		cout << "���������ѡ��" << endl;
		cin >> choice;//�����û���ѡ��

		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1://����ְ��
			wm.Add_Emp();
			break;
		case 2://��ʾְ��
			wm.show_Emp();
			break;
		case 3://ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4://�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5://����ְ��
			wm.find_Emp();
			break;
		case 6://����ְ��
			wm.sort_Emp();
			break;
		case 7://����ĵ�
			wm.clean_file();
			break;
		default:
			system("cls");
			break;
		}
	}




	system("pause");
	return 0;
}