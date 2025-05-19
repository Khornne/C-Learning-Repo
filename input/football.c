#include <stdio.h>

int main() {
    char team[50];

    printf("Who is the best football team?\n");
    scanf("%s", team);

    printf("WRONG! %s isn't the best team. It's obviously Leeds United.\n",
           team);

    return 0;
}
