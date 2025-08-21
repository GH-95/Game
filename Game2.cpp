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
        printf("HP�� MP�� �Է����ּ��� : ");
        cin >> stat[0] >> stat[1];

        if (stat[0] > 50 && stat[1] > 50)
        {
            break;
        }
        printf("HP�� MP�� ���� �ʹ� �۽��ϴ�. �ٽ� �Է����ּ���.\n");
    }

    while (1)
    {
        printf("���ݷ°� ������ �Է����ּ���: ");
        cin >> stat[2] >> stat[3];

        if (stat[2] > 0 && stat[3] > 0)
        {
            break;
        }
        printf("���ݷ��̳� ������ ���� �ʹ� �۽��ϴ�. �ٽ� �Է����ּ���.\n");
    }

    int choice = 0;
    int HPPotion = 0;
    int MPPotion = 0;

    setPotion(5, &HPPotion, &MPPotion);

    printf("* ������ ���޵Ǿ����ϴ�. (HP, MP ���� �� 5��)\n");
    printf("=============================================\n");
    printf("<���� ���� �ý���>\n");

    while (1) 
    {
        printf("��ȣ�� �������ּ���: ");
        cin >> choice;

        if (choice == 7) 
        {
            printf("���α׷��� �����մϴ�.\n");
            break;
        }

        switch (choice) 
        {
        case 1:
            if (HPPotion <= 0) 
            {
                printf("������ �����մϴ�.\n");
                continue;
            }
            stat[0] += 20;
            HPPotion--;
            printf("* HP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�.\n");
            printf("���� HP: %d\n", stat[0]);
            printf("���� ���� ��: %d\n", HPPotion);
            break;

        case 2:
            if (MPPotion <= 0)
            {
                printf("������ �����մϴ�.\n");
                continue;
            }
            stat[1] += 20;
            MPPotion--;
            printf("* MP�� 20 ȸ���Ǿ����ϴ�. ������ 1�� �����˴ϴ�.\n");
            printf("���� MP: %d\n", stat[1]);
            printf("���� ���� ��: %d\n", MPPotion);
            break;

        case 3:
            if (HPPotion <= 0)
            {
                printf("HP�� �����մϴ�.\n");
                continue;
            }
            stat[0] *= 2;
            printf("* HP�� 2�� ȸ���Ǿ����ϴ�.\n");
            printf("���� HP:%d\n", stat[0]);
            break;

        case 4:
            if (MPPotion <= 0)
            {
                printf("MP�� �����մϴ�.\n");
                continue;
            }
            stat[1] *= 2;
            printf("* MP�� 2�� ȸ���Ǿ����ϴ�.\n");
            printf("���� MP:%d\n", stat[1]);
            break;

        case 5:
            if (stat[1] <= 49)
            {
                printf("MP�� �����մϴ�.\n");
                continue;
            }
            stat[1] -= 50;
            printf("* ��ų�� ����Ͽ� MP50�� �Ҹ�Ǿ����ϴ�.\n");
            printf("���� MP:%d\n", stat[1]);
            break;

        case 6:
            if (stat[1] <= 1)
            {
                printf("MP�� �����մϴ�.\n");
                continue;
            }
            stat[1] /= 2;
            printf("* ��ų�� ����Ͽ� MP50%�� �Ҹ�Ǿ����ϴ�.\n");
            printf("���� MP:%d\n", stat[1]);
            break;

        default:
            printf("�ٽ� �Է����ּ���./n");
            break;
        }
    }
    return 0;
}