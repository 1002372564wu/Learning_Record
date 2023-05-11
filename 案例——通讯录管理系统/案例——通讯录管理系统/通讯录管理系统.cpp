#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person
{
	string my_name;//���� 
	int my_sex;//�Ա� 1.�� 2.Ů
	int my_age;//����
	string my_phone;//�绰
	string my_addr;//סַ
};

//���ͨѶ¼�ṹ��
struct Addressbooks
{
	Person personArray[MAX];//ͨѶ¼�б������ϵ������
	int my_size;//ͨѶ¼�е�ǰ��¼��ϵ�˸���
};

//1�������ϵ��
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�������������˾Ͳ�����ӡ�
	if (abs->my_size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
	}
	else
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[abs->my_size].my_name = name;

		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1������" << endl;
		cout << "2����Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->my_size].my_sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}

		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->my_size].my_age = age;

		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->my_size].my_phone = phone;

		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->my_size].my_addr = address;

		//����ͨѶ¼����
		abs->my_size++;

		cout << "��ӳɹ�" << endl;

		system("pause");//�밴���������
		system("cls");//��������
	}

}

//2����ʾ������ϵ��
void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ0����Ϊ0����ʾ��¼Ϊ�գ�����Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->my_size == 0)
	{
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abs->my_size; i++)
		{
			cout << "������" << abs->personArray[i].my_name << "\t";
			cout << "�Ա�" << (abs->personArray[i].my_sex==1?"��":"Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].my_age << "\t";
			cout << "�绰��" << abs->personArray[i].my_phone << "\t";
			cout << "סַ��" << abs->personArray[i].my_addr << endl;
		}
	}

	system("pause");
	system("cls");
}

//�����ϵ���Ƿ���ڣ������򷵻����������е�λ�ã��������򷵻�-1��
int isExist(Addressbooks* abs, string name)
{
	for (int i = 0; i < abs->my_size; i++)
	{
		if(abs->personArray[i].my_name==name)
		{
			return i;
		}
	}
	return -1;
}

//3��ɾ��ָ����ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "��������Ҫɾ������ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	if (ret != -1)
	{
		for (int i = ret; i < abs->my_size; i++)
		{
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->my_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//4������ָ����ϵ����Ϣ
void findPerson(Addressbooks* abs)
{
	cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;
	
	//�ж���ϵ���Ƿ���ͨѶ¼��
	int ret = isExist(abs, name);
	if (ret != -1)
	{
		cout << "������" << abs->personArray[ret].my_name << "\t";
		cout << "�Ա�" << abs->personArray[ret].my_sex << "\t";
		cout << "���䣺" << abs->personArray[ret].my_age << "\t";
		cout << "�绰��" << abs->personArray[ret].my_phone << "\t";
		cout << "סַ��" << abs->personArray[ret].my_addr << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//5���޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks* abs)
{
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//����
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->personArray[ret].my_name = name;
		//�Ա�
		cout << "�������Ա�" << endl;
		cout << "1����" << endl;
		cout << "2��Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].my_sex = sex;
				break;
			}
			cout << "������������������" << endl;
		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].my_age = age;
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].my_phone = phone;
		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].my_addr = address;

		cout << "�޸ĳɹ�" << endl;
	}
	else
	{
		cout << "���޴��ˣ�" << endl;
	}
	system("pause");
	system("cls");
}

//6�����������ϵ��
void cleanPerson(Addressbooks* abs)
{
	abs->my_size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}



// �˵�����
void showMenu()
{
	cout << "1�������ϵ��" << endl;
	cout << "2����ʾ��ϵ��" << endl;
	cout << "3��ɾ����ϵ��" << endl;
	cout << "4��������ϵ��" << endl;
	cout << "5���޸���ϵ��" << endl;
	cout << "6�������ϵ��" << endl;
	cout << "0���˳�ͨѶ¼" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.my_size = 0;

	int select = 0;
    //�˵�����
	while(true)
	{
		showMenu();  
		cin >> select;
		switch (select)
		{
		case 1://1�������ϵ��
			addPerson(&abs);//���õ�ַ���ݣ������޸�ʵ�Ρ�
			break;
		case 2://2����ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3��ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4://4��������ϵ��
			findPerson(&abs);
			break;
		case 5://5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://6�������ϵ��
			cleanPerson(&abs);
			break;
		case 0://0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			//system("pause");
			return 0;
			break; 
		}
	}
}