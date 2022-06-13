#include <stdio.h>
int main()
{
    int so1 = 0;
    int so2 = 0;
    int sum = 0;
    printf("nập vào số 1:");
    scanf("%d\n", &so1);

    printf("nập vào số 2:");
    scanf("%d\n", &so2);
    // thực tế thông tin không đúng nội dung đăng nhập
    

    sum = so1 + so2;
    printf("Tổng của 2 số = %d\n", sum);

if (sum % 2 == 0)
{
    printf("%d đây là số chẵn \n", sum);
}
else
{
    printf("%d đây là số lẻ\n", sum);
}
return sum;
}