#include <stdio.h>
// Bài 1. In ra màn hình 10 số tự nhiên đầu tiên.
void muoisodau()
{
    for (int i = 1; i < 11; i++)
    {
        printf("%d\n", i);
    }
}
// Bài 2. Nhập vào số nguyên N. In ra màn hình tổng các số từ 1 đến N.
int sum1toN(int N)
{
    int tong = 0;
    printf("Nhap N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        tong += i;
    }
    return tong;
}
// Bài 3 Nhập vào số nguyên N. In ra màn hình tổng các số chẵn từ 1 đến N.
int sumchan1toN(int N)
{
    int tong = 0;
    printf("Nhap N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            tong += i;
        }
    }
    return tong;
}
// Bài 4 Viết chương trình tính N giai thừa.
int giaithua(int N)
{
    int giaithua = 1;
    printf("Nhap N: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        giaithua *= i;
    }
    return giaithua;
}
// Bài 5 Viết chương kiểm tra xem N có phải số nguyên tố hay không.
void songuyento(int N)
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
}
// Bài 6 Viết chương trình in ra màn hình bảng cửu chương N.
void bangcuuchuong(int N)
{
    int bcc_so;

    printf("Nhap bang cuu chuong: ");
    scanf("%d", &bcc_so);
    if (bcc_so >= 1 && bcc_so <= 10)
    {
        for (int i = 1; i < 10; i++)
        {
            printf("%d * %d = %d\n", bcc_so, i, bcc_so * i);
        }
    }
}
// Bài 7 Đếm số các chữ số của số tự nhiên N (VD: 12345 -> 5)
int demchuso(int N)
{
    int i = 0;
    printf("Nhap N: ");
    scanf("%d", &N);

    do
    {
        N /= 10;
        i++;
    } while (N > 0);
    return i;
}
// Bài 8 Tính tổng các chữ số của N (VD:12345 = 14)
int tong(int N)
{
    int tong = 0;
    while (N != 0)
    {
        tong += N % 10;
        N /= 10;
    }
    return tong;
}
// Bài 9. In ra chữ số chẵn đầu tiên tính từ bên phải của số tự nhiên n
void sochandautien(int n)
{
    int du, check = 0;
    while (n != 0)
    {
        du = n % 10;
        if (du % 2 == 0)
        {
            printf("%d", du);
            check = 1;
            break;
        }

        n /= 10;
    }
    if (check == 0)
    {
        printf("N ko co so chan");
    }
}
// Bài 10. Viết các hàm sau (không sử dụng ctype.h)
int ctype(char c)
{
    char chon;
    printf("1)isalnum \t2)isdigit \t3)islower \t4)isupper \t5)isalpha \t6)tolower \t7)toupper \t8)isspace \nChon stt cua ham:");
    scanf(" %c", &chon);

    if (chon == '1')
    {
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (chon == '2')
    {
        if (c >= '0' && c <= '9')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (chon == '3')
    {
        if (c >= 'a' && c <= 'z')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (chon == '4')
    {
        if (c >= 'A' && c <= 'Z')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (chon == '5')
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (chon == '6')
    {
        if (c >= 'A' && c <= 'Z')
        {
            return c + 32;
        }
        else
        {
            return c;
        }
    }
    else if (chon == '7')
    {
        if (c >= 'a' && c <= 'z')
        {
            return c - 32;
        }
        else
        {
            return c;
        }
    }
    else if (chon == '8')
    {
        if (c == ' ')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return -1;
    }
}
int main(int argc, char const *argv[])
{
    return 0;
}