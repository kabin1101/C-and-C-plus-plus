// Bài 1. Nhập vào toán tử +, -, *, / và in ra kết quả tương ứng với 2 số a, b
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
        printf("a + b = %d\n", a + b);
        break;
    case '-':
        printf("a - b = %d\n", a - b);
        break;
    case '*':
        printf("a * b = %d\n", a * b);
        break;
    case '/':
        if (b == 0)
            printf("Loi: Khong the chia cho 0.\n");
        else
            printf("a / b = %.2f\n", (float)a / b);
        break;
    default:
        printf("Toan tu khong hop le.\n");
        break;
    }

    return 0;
}
// Bài 2. Nhập tháng và năm in ra số ngày của tháng, chú ý tháng 2 của năm nhuận có 29 ngày
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int thang, nam;

    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    if (thang < 1 || thang > 12)
    {
        printf("Thang khong hop le.");
    }
    else
    {
        switch (thang)
        {
        case 2:
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                printf("29");
            else
                printf("28");
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30");
            break;
        }
    }

    return 0;
}
// Bài 3. Giải phương trình bậc nhất ax + b = 0 (a, b nhập từ bàn phím).
// Nếu phương trình vô nghiệm xuất kết quả: VN
// Nếu phương trình VSN xuất ra : VSN
// Nếu phương có nghiệm, xuất ra nghiệm, lấy 2 chữ số thập phân
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);

    if (a == 0)
    {
        if (b == 0)
            printf("VSN");
        else
            printf("VN");
    }
    else
    {
        float x = -b / a;
        printf("Nghiem: %.2f", x);
    }

    return 0;
}
// Bài 4. Giải phương trình bậc hai ax2 + bx + c = 0 (a, b, c nhập từ bàn phím).
// Nếu phương trình vô nghiệm xuất kết quả: VN
// Nếu phương trình VSN xuất ra : VSN
// Nếu phương có nghiệm, xuất ra nghiệm, lấy 2 chữ số thập phân
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                printf("VSN");
            else
                printf("VN");
        }
        else
        {
            float x = -c / b;
            printf("Nghiem: %.2f", x);
        }
    }
    else
    {
        float delta = b * b - 4 * a * c;

        if (delta < 0)
            printf("VN");
        else if (delta == 0)
        {
            float x = -b / (2 * a);
            printf("Nghiem kep: %.2f", x);
        }
        else
        {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Nghiem 1: %.2f\n", x1);
            printf("Nghiem 2: %.2f", x2);
        }
    }

    return 0;
}
// Bài 5. Nhập vào 1 số nguyên, yêu cầu xuất ra chữ số hàng trăm của số đó, nếu không có thì xuất ra 0.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Nhap so n: ");
    scanf("%d", &n);

    int hangTram = (n / 100) % 10;
    if (hangTram < 0)
        hangTram = -hangTram; // xử lý số âm
    printf("Hang tram bang %d", hangTram);

    return 0;
}
// Bài 6. Kiểm tra số đó có phải là số chính phương không?
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("%d ko phai so chinh phuong\n", n);
    }
    else
    {
        int can = (int)sqrt(n);
        if (can * can == n)
            printf("%d la so chinh phuong\n", n);
        else
            printf("%d ko phai so chinh phuong\n", n);
    }

    return 0;
}
// Bài 7. Cho điểm toán, lý, hóa của một học sinh. Hãy tính điểm trung bình và xếp loại học lực theo tiêu chuẩn cho trước.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    float toan, ly, hoa, trungbinh;

    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);

    trungbinh = (toan + ly + hoa) / 3;

    if (trungbinh >= 8)
        printf("Gioi");
    else if (trungbinh >= 6.5)
        printf("Kha");
    else if (trungbinh >= 5)
        printf("Trung binh");
    else if (trungbinh >= 3.5)
        printf("Yeu");
    else
        printf("Kem");

    return 0;
}