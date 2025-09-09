// Bài 1. N có phải là số chẵn, đúng in 1 sai in 0
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("1");
    else
        printf("0");
    return 0;
}
// Bài 2.  N có phải là số vừa chia hết cho 3 vừa chia hết cho 5, đúng in 1 sai in 0
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 5 == 0)
        printf("1");
    else
        printf("0");
    return 0;
}
// Bài 3. N có phải là số chia hết 3 nhưng không chia hết cho 7, đúng in 1 sai in 0
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n % 3 == 0 && n % 7 != 0)
        printf("1");
    else
        printf("0");
    return 0;
}
// Bài 4: N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5, đúng in 1 sai in 0
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n >= 30 && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0))
        printf("1");
    else
        printf("0");
    return 0;
}
// Bài 5:  N không thuộc đoạn [10, 20]?
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    if (n < 10 || n > 20)
        printf("1");
    else
        printf("0");
    return 0;
}
// Bài 6: Kiểm tra nếu n là năm nhuận in ra YES, ngược lại in ra NO
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nam;
    printf("Nhap so nam: ");
    scanf("%d", &nam);
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
        printf("YES");
    else
        printf("NO");
    return 0;
}
// Bài 7. Nhập tháng và năm in ra số ngày của tháng, chú ý tháng 2 của năm nhuận có 29 ngày
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int thang, nam;
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (thang == 2)
    {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
            printf("29");
        else
            printf("28");
    }
    else if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
    {
        printf("31");
    }
    else
    {
        printf("30");
    }
    return 0;
}
// Bài 8. Nhập 3 cạnh của tam giác là số nguyên, nếu 3 cạnh của tam giác đều in 1, cân in 2, vuông in 3, thường in 4. Giả sử 3 cạnh đã là 3 cạnh của tam giác hợp lệ
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Nhap canh a: ");
    scanf("%d", &a);
    printf("Nhap canh b: ");
    scanf("%d", &b);
    printf("Nhap canh c: ");
    scanf("%d", &c);

    if (a == b && b == c)
    {
        printf("1");
    }
    else if (a * a + b * b == c * c ||
             a * a + c * c == b * b ||
             b * b + c * c == a * a)
    {
        printf("3");
    }
    else if (a == b || a == c || b == c)
    {
        printf("2");
    }
    else
    {
        printf("4");
    }
    return 0;
}