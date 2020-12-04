#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Prime(int n, int d)
{
    if(d*d > n)
    {
        return 1;
    }
    else
    {
        if(n % d == 0)
        {
            return d;
        }
        else
        {
            return Prime(n,d+1);
        }
    }
}
float POW(float a, int n)
{

    if (n==0)
    {
        return 1.0;
    }
    if (n<0)
    {
        return POW(a, n+1)/a;
    }
    if (n>0)
    {
        return POW(a, n-1)*a;
    }
    return 0;
}


int main()
{
    int N;
    setlocale(LC_ALL,"Rus");
    printf("����� ������: \n");
    scanf("%d", &N);
    while(N)
    {
        if (N==2)
        {
            float a, i;
            int n;
            printf("������� ��������� � �������: ");
            scanf("%f%d", &a, &n);
            i = POW(a, n);
            printf("%4f", i );
        }
        if (N==6)
        {
            int n;
            printf("������� �����: ");
            scanf("%d",&n);
            int a = Prime(n,2);
            if(a == 1)
                printf("�������");
            else
                printf("���������");
        }
printf("\n����� ������: \n");
    scanf("%d", &N);
    }

}

