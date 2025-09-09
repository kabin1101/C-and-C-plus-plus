// Bài 1. In ra màn hình 10 số tự nhiên đầu tiên.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
// Bài 2. Nhập vào đoạn [a.b]. In ra màn hình tổng các số từ a đến b.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, tong = 0;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++)
    {
        tong += i;
    }
    printf("%d", tong);
    return 0;
}
// Bài 3 Nhập vào đoạn [a.b]. In ra màn hình tổng các số chẵn từ a đến b.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, tong = 0;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
        }
    }
    printf("%d", tong);
    return 0;
}
// Bài 4 Tính S(n) = 1 + 2 + 3 + … + n bằng
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, tong = 0;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        tong += i;
    }
    printf("%d", tong);
    return 0;
}
// Bài 5 Tính S(n) = x^2 + x^4 + … + x^2n
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x, n, tong = 0;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        tong += pow(x, 2 * i);
    }
    printf("%d", tong);
    return 0;
}
// Bài 6. Tính S(n) = x + x^3 + x^5 + … + x^(2n - 1)
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x, n, tong;
    printf("Nhap x: ");
    scanf("%d", &x);
    printf("Nhap n: ");
    scanf("%d", &n);

    tong = x;

    for (int i = 1; i <= n; i++)
    {
        tong += pow(x, (2 * i) + 1);
    }
    printf("%d", tong);
    return 0;
}
// Bài 7 Liệt kê tất cả các ước số lẻ của số nguyên dương n.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
// Bài 8 Viết chương trình tính N giai thừa.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, giaithua = 1;
    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        giaithua *= i;
    }
    printf("%d", giaithua);
    return 0;
}
// Bài 9 Viết chương trình in ra màn hình bảng cửu chương N.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int bcc_so;
    printf("Nhap bang cuu chuong: ");
    scanf("%d", &bcc_so);
    if (bcc_so >= 1 && bcc_so <= 10)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", bcc_so, i, bcc_so * i);
        }
    }
    return 0;
}
// Bài 10 Nhập số từ bàn phím cho tới khi nhập số 28 thì dừng
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    do
    {
        printf("Nhap i: ");
        scanf("%d", &i);
    } while (i != 28);
    return 0;
}
// Bài 11  Viết chương kiểm tra xem N có phải số nguyên tố hay không.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, bool = 1;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 2)
    {
        bool = 0;
    }
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                bool = 0;
                break;
            }
        }
    }

    if (bool)
    {
        printf("%d la so nguyen to\n", n);
    }
    else
    {
        printf("%d khong la so nguyen to\n", n);
    }
    return 0;
}
// (Nâng cao)
// Bài 12, Nhập vào số N. in ra số đảo ngược của N. VD: 12345  -> 54321
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b, d = 0, du, b1;

    printf("Nhap so: ");
    scanf("%d", &b);
    b1 = b;

    while (b1 != 0)
    {
        du = b1 % 10;

        d = d * 10 + du;

        b1 /= 10;
    }
    printf("%d", d);
    return 0;
}
// Bài 13. Hai số gọi là đảo ngược của nhau nếu viết theo chiều thuận hay chiều ngược cũng có cùng giá trị. VD: 121 = 121, 11111,... Hãy viết chương trình xác định số trên.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int b, d = 0, du, b1;

    printf("Nhap so: ");
    scanf("%d", &b);
    b1 = b;

    while (b1 != 0)
    {
        du = b1 % 10;

        d = d * 10 + du;

        b1 /= 10;
    }

    if (b != d)
    {
        printf("Day ko la so dao nguoc");
    }
    else
    {
        printf("Day la so dao nguoc");
    }
    return 0;
}
// Bài 14. Số tự nhiên được gọi là số đẹp nếu cộng các chữ số của lại ta có một số mà kết thúc bằng 9. Ví dụ một số số đẹp là 18 (1+8=9), 234(2+3+4), 658 (6+5+8=19). Nhập một số N, hãy kiểm tra xem N có phải là số đẹp hay không?
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, tong = 0, du;

    printf("Nhap so: ");
    scanf("%d", &n);

    while (n != 0)
    {
        du = n % 10;

        tong += du;

        n /= 10;
    }

    if (tong == 9)
    {
        printf("So dep");
    }
    else
    {
        printf("So ko dep");
    }
    return 0;
}
// Bài 15. Vẽ hình chữ nhật với chiều dài bằng a, chiều rộng bằng b.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);

    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
// Bài 16. Vẽ hình tam giác đều với cạnh bằng a.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Nhap canh: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < a - i; j++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
// Bài 17. Vẽ tam giác vuông cân.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Nhap canh goc vuong: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// Bài 18. Vẽ tam giác Pascal.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap so dong: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j < n - i - 1; j++)
            printf("  ");

        for (int j = 0; j <= i; j++)
        {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}