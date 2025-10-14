#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int a, b, c;
    printf("Введите уровень силы героя A: ");
    scanf("%d", &a);

    printf("Введите уровень силы героя B: ");
    scanf("%d", &b);

    printf("Введите уровень силы героя C: ");
    scanf("%d", &c);


    if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0) {
        printf("Тройной удар активирован!\n");
    }
    else {
        printf("Тройной удар не активирован. Условия не выполнены.\n");
    }

    return 0;
}
