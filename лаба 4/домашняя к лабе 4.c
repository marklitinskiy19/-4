#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int a, b, c;
    printf("������� ������� ���� ����� A: ");
    scanf("%d", &a);

    printf("������� ������� ���� ����� B: ");
    scanf("%d", &b);

    printf("������� ������� ���� ����� C: ");
    scanf("%d", &c);


    if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0) {
        printf("������� ���� �����������!\n");
    }
    else {
        printf("������� ���� �� �����������. ������� �� ���������.\n");
    }

    return 0;
}