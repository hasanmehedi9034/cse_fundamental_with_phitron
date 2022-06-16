#include <stdio.h>

int main() {
    int number_of_games;
    scanf("%d", &number_of_games);

    int danik = 0, anton = 0;

    for (int i = 1; i <= number_of_games*2; i++) {
        char who_win;
        who_win == getchar();
        putchar(who_win);

        if (who_win == 'D') danik++;
        if (who_win == 'A') anton++;
    }


    if (danik > anton) printf("Danik");
    else if (anton > danik) printf("Anton");
    else if (anton == danik) printf("Friendship");


    return 0;
}