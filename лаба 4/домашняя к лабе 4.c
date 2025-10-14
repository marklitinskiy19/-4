#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    int a, b, c;
    printf("¬ведите уровень силы геро€ A: ");
    scanf("%d", &a);

    printf("¬ведите уровень силы геро€ B: ");
    scanf("%d", &b);

    printf("¬ведите уровень силы геро€ C: ");
    scanf("%d", &c);


    if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0) {
        printf("“ройной удар активирован!\n");
    }
    else {
        printf("“ройной удар не активирован. ”слови€ не выполнены.\n");
    }

    return 0;
}