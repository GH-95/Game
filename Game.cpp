#include <iostream>
using namespace std;

int main()
{
	int arr[4]{ 60,60,30,30 };
	int HP = 5;
	int MP = 5;

	cout << "���� HP : 60, MP : 60" << endl;
	cout << "HP,MP���� 5���� ���޵Ǿ����ϴ�." << endl;
	
	while (arr[1] != 0)
	{
		char input;
		cout << "��ȣ�� �Է����ּ��� : ";
		cin >> input;

		if (input == '1')
		{
			if (HP > 0)
			{
				int i = 0;
				HP = HP - 1;
				arr[i] = arr[i] + 20;
				cout << "HP ������ ���Ǿ����ϴ�" << endl;
				cout << "���� ���� :" << HP << endl;
				cout << "���� HP :" << arr[i] << endl;
			}
			else
			{
				cout << "HP������ �����ϴ�." << endl;
			}
		}

		if (input == '2')
		{
			if (MP > 0)
			{
				int i = 1;
				MP = MP - 1;
				arr[i] = arr[i] + 20;
				cout << "MP ������ ���Ǿ����ϴ�" << endl;
				cout << "���� ���� :" << MP << endl;
				cout << "���� MP :" << arr[i] << endl;
			}
			else
			{
				cout << "MP������ �����ϴ�." << endl;
			}
		}

		if (input == '3')
		{
			int i = 0;
			arr[i] = arr[i] * 2;
			cout << "HP�� 2�� �����Ͽ����ϴ�." << endl;
			cout << "���� HP :" << arr[i] << endl;
		}

		if (input == '4')
		{
			int i = 1;
			arr[i] = arr[i] * 2;
			cout << "MP�� 2�� �����Ͽ����ϴ�." << endl;
			cout << "���� MP :" << arr[i] << endl;
		}

		if (input == '5')
		{
			if (arr[1] >= 50)
			{
				int i = 1;
				arr[i] = arr[i] - 50;
				cout << "��ų�� �Ҹ��Ͽ� mp�� 50 �Ҹ�Ǿ����ϴ�." << endl;
				cout << "���� MP :" << arr[i] << endl;
			}
			else
			{
				cout << "MP�� �����մϴ�." << endl;
			}
		}
		if (input == '6')
		{
			if (arr[1] >= 2)
			{
				int i = 1;
				arr[i] = arr[i] / 2;
				cout << "��ų�� �Ҹ��Ͽ� mp�� 50% �Ҹ�Ǿ����ϴ�." << endl;
				cout << "���� MP :" << arr[i] << endl;
			}
			else
			{
				cout << "MP�� �����մϴ�." << endl;
			}
		}
		if (input == '7')
		{
			cout << "������ ����Ǿ����ϴ�." << endl;
			break;
		}
	}
	
}