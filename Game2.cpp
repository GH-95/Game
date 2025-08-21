#include <iostream>
using namespace std;

void setPotion(int count, int* p_HPPotion, int* p_MPPotion) 
{
    *p_HPPotion = count;
    *p_MPPotion = count;
}

int main()
{
    const int SIZE = 4;
    int stat[SIZE] = { 0 };

    while (1) 
    {
        printf("HP와 MP를 입력해주세요 : ");
        cin >> stat[0] >> stat[1];

        if (stat[0] > 50 && stat[1] > 50)
        {
            break;
        }
        printf("HP나 MP의 값이 너무 작습니다. 다시 입력해주세요.\n");
    }

    while (1)
    {
        printf("공격력과 방어력을 입력해주세요: ");
        cin >> stat[2] >> stat[3];

        if (stat[2] > 0 && stat[3] > 0)
        {
            break;
        }
        printf("공격력이나 방어력의 값이 너무 작습니다. 다시 입력해주세요.\n");
    }

    int choice = 0;
    int HPPotion = 0;
    int MPPotion = 0;

    setPotion(5, &HPPotion, &MPPotion);

    printf("* 포션이 지급되었습니다. (HP, MP 포션 각 5개)\n");
    printf("=============================================\n");
    printf("<스탯 관리 시스템>\n");

    while (1) 
    {
        printf("번호를 선택해주세요: ");
        cin >> choice;

        if (choice == 7) 
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }

        switch (choice) 
        {
        case 1:
            if (HPPotion <= 0) 
            {
                printf("포션이 부족합니다.\n");
                continue;
            }
            stat[0] += 20;
            HPPotion--;
            printf("* HP가 20 회복되었습니다. 포션이 1개 차감됩니다.\n");
            printf("현재 HP: %d\n", stat[0]);
            printf("남은 포션 수: %d\n", HPPotion);
            break;

        case 2:
            if (MPPotion <= 0)
            {
                printf("포션이 부족합니다.\n");
                continue;
            }
            stat[1] += 20;
            MPPotion--;
            printf("* MP가 20 회복되었습니다. 포션이 1개 차감됩니다.\n");
            printf("현재 MP: %d\n", stat[1]);
            printf("남은 포션 수: %d\n", MPPotion);
            break;

        case 3:
            if (HPPotion <= 0)
            {
                printf("HP가 부족합니다.\n");
                continue;
            }
            stat[0] *= 2;
            printf("* HP가 2배 회복되었습니다.\n");
            printf("현재 HP:%d\n", stat[0]);
            break;

        case 4:
            if (MPPotion <= 0)
            {
                printf("MP가 부족합니다.\n");
                continue;
            }
            stat[1] *= 2;
            printf("* MP가 2배 회복되었습니다.\n");
            printf("현재 MP:%d\n", stat[1]);
            break;

        case 5:
            if (stat[1] <= 49)
            {
                printf("MP가 부족합니다.\n");
                continue;
            }
            stat[1] -= 50;
            printf("* 스킬을 사용하여 MP50이 소모되었습니다.\n");
            printf("현재 MP:%d\n", stat[1]);
            break;

        case 6:
            if (stat[1] <= 1)
            {
                printf("MP가 부족합니다.\n");
                continue;
            }
            stat[1] /= 2;
            printf("* 스킬을 사용하여 MP50%이 소모되었습니다.\n");
            printf("현재 MP:%d\n", stat[1]);
            break;

        default:
            printf("다시 입력해주세요./n");
            break;
        }
    }
    return 0;
}