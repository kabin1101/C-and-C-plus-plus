// Ex1: Hãy nhập vào 2 số a,b. Hãy tính và in ra màn hình:
// Hiệu a và b
// Tổng a và b
// Tích a và b
// Chia nguyên a và b
// Chia dư a và b
// Chia ra giá trị thực của a và b (ví dụ 3/2 = 1.5)
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Hay nhap so a: ");
    scanf("%d", &a);
    printf("Hay nhap so b: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0)
    {
        printf("%d / %d = %d\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
        printf("%d / %d = %.3f\n", a, b, 1.0 * a / b);
    }
    else
    {
        printf("Khong the chia hoac chia du cho 0.\n");
    }

    return 0;
}
// Ex2. Nhập vào 3 cạnh của một tam giác. In ra diện tích, chu vi của tam giác đó.

// Nhap vao 3 canh a,b,c.
// 3
// 4
// 5
// Chu vi cua hinh tam giac co canh a = 3, b = 4, c = 5 la 12.
// Dien tich cua hinh tam giac canh co a = 3, b = 4, c = 5 la 6.
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Nhap 3 canh cua mot tam giac: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        int chuvi = a + b + c;
        float p = chuvi / 2.0;
        float dientich = sqrt(p * (p - a) * (p - b) * (p - c));

        printf("Chu vi cua tam giac co ba canh %d, %d, %d la %d\n", a, b, c, chuvi);
        printf("Dien tich cua tam giac co ba canh %d, %d, %d la %.2f\n", a, b, c, dientich);
    }
    else
    {
        printf("Ba canh %d, %d, %d khong tao thanh tam giac hop le.\n", a, b, c);
    }

    return 0;
}
// Ex3. Nhập vào bán kính của hình tròn. In ra diện tích, chu vi của hình tròn đó:

// Hay nhap ban kinh: 10
// Chu vi cua hinh tron co ban kinh bang 10 la 62.8
// Dien tich cua hinh tron co ban kinh bang 10 la 314
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    const float PI = 3.14;
    int r;

    printf("Hay nhap ban kinh R: ");
    scanf("%d", &r);

    if (r > 0)
    {
        float chuvi = 2 * PI * r;
        float dientich = PI * pow(r, 2);

        printf("Chu vi cua hinh tron ban kinh %d la %.2f\n", r, chuvi);
        printf("Dien tich cua hinh tron ban kinh %d la %.2f\n", r, dientich);
    }
    else
    {
        printf("Ban kinh phai lon hon 0.\n");
    }

    return 0;
}