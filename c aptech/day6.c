// Bài 1: Nhập mảng
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100], tong = 0, so;

    printf("Muon nhap bao so: ");
    scanf("%d", &so);

    for (int i = 0; i < so; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
        tong += arr[i];
    }

    printf("%d\n", tong);
    return 0;
}
// Bài 2: Thêm phần tử vào mảng
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100], so, vitri, somoi;

    printf("Muon nhap bao so: ");
    scanf("%d", &so);

    for (int i = 0; i < so; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap so can them: ");
    scanf("%d", &somoi);
    printf("Nhap vitri: ");
    scanf("%d", &vitri);

    for (int i = so; i > vitri; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[vitri] = somoi;
    so++;

    for (int i = 0; i < so; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// Bài 3: Xóa phần tử mảng
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100], so, vitri;

    printf("Muon nhap bao so: ");
    scanf("%d", &so);

    for (int i = 0; i < so; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vitri can xoa: ");
    scanf("%d", &vitri);

    for (int i = vitri; i < so - 1; i++) // sửa so -> so - 1 để ko đọc vượt mảng
    {
        arr[i] = arr[i + 1];
    }

    so--;

    for (int i = 0; i < so; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
// Bài 4: Đếm số lượng các phần tử khác nhau
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, a[100];

    printf("Nhap so luong phan tu : ");
    scanf("%d", &n);

    printf("Nhap phan tu :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int lap = 1;

        for (int j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                lap = 0;
                break;
            }
        }

        if (lap)
        {
            count++;
        }
    }

    printf("So cac phan tu khac nhau la: %d\n", count);
    return 0;
}
// Bài 5: Tần suất xuất hiện các phần tử trong mảng
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, a[100], daXet[100];

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    printf("Nhap phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        daXet[i] = 0;
    }

    printf("Ket qua:\n");
    for (int i = 0; i < n; i++)
    {
        if (daXet[i] == 1)
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                daXet[j] = 1;
            }
        }

        printf("%d xuat hien %d lan\n", a[i], count);
    }
    return 0;
}
// Bài 6: Two sum
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, target, arr[100];

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Nhap gia tri target: ");
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Output: %d, %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        printf("Khong co cap phan tu nao co tong bang %d\n", target);
    }
    return 0;
}
// Bài 7: Sắp xếp
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, arr[100];

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan:\n[");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("]\n");
    return 0;
}
// Bài 8: Tìm các số có ở cả 2 mảng.
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, m, a[100], b[100];

    printf("Nhap so luong phan tu mang a: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang a:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Nhap so luong phan tu mang b: ");
    scanf("%d", &m);

    printf("Nhap cac phan tu cua mang b:\n");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int daInRa[1000] = {0};

    printf("Cac so co trong ca hai mang la:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && daInRa[a[i]] == 0)
            {
                printf("%d ", a[i]);
                daInRa[a[i]] = 1;
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
// Bài 9: Tìm Max, Min.
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100], so;

    printf("Muon nhap bao so: ");
    scanf("%d", &so);

    for (int i = 0; i < so; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < so; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}