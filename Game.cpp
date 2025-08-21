#include <iostream>
using namespace std;

int main()
{
	int arr[4]{ 60,60,30,30 };
	int HP = 5;
	int MP = 5;

	cout << "현재 HP : 60, MP : 60" << endl;
	cout << "HP,MP포션 5개씩 지급되었습니다." << endl;
	
	while (arr[1] != 0)
	{
		char input;
		cout << "번호를 입력해주세요 : ";
		cin >> input;

		if (input == '1')
		{
			if (HP > 0)
			{
				int i = 0;
				HP = HP - 1;
				arr[i] = arr[i] + 20;
				cout << "HP 포션이 사용되었습니다" << endl;
				cout << "남은 포션 :" << HP << endl;
				cout << "현재 HP :" << arr[i] << endl;
			}
			else
			{
				cout << "HP포션이 없습니다." << endl;
			}
		}

		if (input == '2')
		{
			if (MP > 0)
			{
				int i = 1;
				MP = MP - 1;
				arr[i] = arr[i] + 20;
				cout << "MP 포션이 사용되었습니다" << endl;
				cout << "남은 포션 :" << MP << endl;
				cout << "현재 MP :" << arr[i] << endl;
			}
			else
			{
				cout << "MP포션이 없습니다." << endl;
			}
		}

		if (input == '3')
		{
			int i = 0;
			arr[i] = arr[i] * 2;
			cout << "HP가 2배 증가하였습니다." << endl;
			cout << "현재 HP :" << arr[i] << endl;
		}

		if (input == '4')
		{
			int i = 1;
			arr[i] = arr[i] * 2;
			cout << "MP가 2배 증가하였습니다." << endl;
			cout << "현재 MP :" << arr[i] << endl;
		}

		if (input == '5')
		{
			if (arr[1] >= 50)
			{
				int i = 1;
				arr[i] = arr[i] - 50;
				cout << "스킬을 소모하여 mp가 50 소모되었습니다." << endl;
				cout << "현재 MP :" << arr[i] << endl;
			}
			else
			{
				cout << "MP가 부족합니다." << endl;
			}
		}
		if (input == '6')
		{
			if (arr[1] >= 2)
			{
				int i = 1;
				arr[i] = arr[i] / 2;
				cout << "스킬을 소모하여 mp가 50% 소모되었습니다." << endl;
				cout << "현재 MP :" << arr[i] << endl;
			}
			else
			{
				cout << "MP가 부족합니다." << endl;
			}
		}
		if (input == '7')
		{
			cout << "게임이 종료되었습니다." << endl;
			break;
		}
	}
	
}