// Bài 1. Kiểm tra chữ in hoa in thường
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char a;
    printf("Nhap chu a: ");
    scanf("%c", &a);

    if (isupper(a))
        printf("Chu hoa\n");
    else
        printf("Chu thuong\n");

    return 0;
}
// Bài 2. Chuyển đổi in hoa, in thường
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char a;
    printf("Nhap chu a: ");
    scanf("%c", &a);

    if (isupper(a))
        printf("%c\n", tolower(a));
    else
        printf("%c\n", toupper(a));

    return 0;
}
// Bài 3. Kiểm tra chữ số, nếu người dùng nhập số từ 0-9, in YES ngược lại NO
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Nhap a: ");
    scanf("%d", &a);

    if (a >= 0 && a <= 9)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
// Bài 4. Kiểm tra chữ, nếu người dùng nhập chữ (a-z, A-Z) in YES ngược lại NO
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char a;
    printf("Nhap a: ");
    scanf(" %c", &a);

    if (isalpha(a))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
// Bài 5. Nhập vào một ký tự. Nếu ký tự đó là ký tự thường, xuất ra ký tự in hoa. Nếu không phải chữ cái thì in Error.
#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char a;
    printf("Nhap chu a: ");
    scanf(" %c", &a);

    if (isalpha(a))
        printf("%c\n", toupper(a));
    else
        printf("ERROR\n");

    return 0;
}
// Bài 6. Nhập vào một số n. Nếu số n >= 20 thì in số n. Ngược lại, yêu cầu người dùng nhập lại. (goto)
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
label:
    printf("Nhap n (n >= 20): ");
    scanf("%d", &n);

    if (n < 20)
        goto label;

    printf("%d\n", n);

    return 0;
}
// Bài 7. Nhập vào số a và b và ký tự toán tử. Thực hiện phép toán theo toán tử.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    char dau;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap dau (+, -, *, /): ");
    scanf(" %c", &dau);

    switch (dau)
    {
    case '+':
        printf("%d + %d = %d\n", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d\n", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d\n", a, b, a * b);
        break;
    case '/':
        if (b == 0)
            printf("Loi: Khong the chia cho 0.\n");
        else
            printf("%d / %d = %.2f\n", a, b, (float)a / b);
        break;
    default:
        printf("Toan tu khong hop le.\n");
        break;
    }

    return 0;
}
// Bài 8. Dùng goto để in ra bảng cửu chương từ 1 -> 10.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int bcc_so, i = 1;

    printf("Nhap bang cuu chuong (1-10): ");
    scanf("%d", &bcc_so);

    if (bcc_so >= 1 && bcc_so <= 10)
    {
    loop:
        printf("%d * %d = %d\n", bcc_so, i, bcc_so * i);
        if (i < 10)
        {
            i++;
            goto loop;
        }
    }

    return 0;
}