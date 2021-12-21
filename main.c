#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int d = 1000;
    int h, m, s;

    do{
        printf("Enter starting time: h m s \n");
        scanf("%d %d %d", &h, &m, &s);
    }
    while(h > 24 || m > 60 || s > 60);

    while(1)
    {
        s++;

        if(s == 60)
        {
            s = 0;
            m++;
        }
        if(m == 60)
        {
            m = 0;
            h++;
        }
        if(h == 24)
        {
            h = 0;
        }

        system("cls");
        printf("Clock:\n");
        printf("%02d:%02d:%02d", h, m, s);

        Sleep(d);
    }

    return 0;
}
