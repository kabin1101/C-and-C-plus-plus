#include <stdio.h>
// Bài 1: Hoán đổi hai giá trị
// Yêu cầu: Viết hàm swap sử dụng kiểu trả về void để hoán đổi giá trị của hai biến số nguyên a và b được nhập từ bàn phím.
// Ví dụ:
// Input: a = 5, b = 6
// Output: a = 6, b = 5
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d, b = %d", *a, *b);
}
// Bài 2: Tính tổng hai giá trị
// Yêu cầu: Viết hàm calculateSum sử dụng kiểu trả về void để tính tổng hai số nguyên a và b được nhập từ bàn phím, và in kết quả ra màn hình.
// Ví dụ:
// Input: a = 5, b = 6
// Output: sum = 11
void calculateSum(int a, int b)
{
    int sum = a + b;
    printf("sum = %d", sum);
}
// Bài 3: Tăng giá trị của biến
// Yêu cầu: Viết hàm increment sử dụng kiểu trả về void để tăng giá trị của một số nguyên a được nhập từ bàn phím lên 1 đơn vị.
// Ví dụ:
// Input: a = 10
// Output: a = 11
void increment(int a)
{
    a++;
    printf("%d", a);
}
// Bài 4: Xóa phần tử trong mảng
// Yêu cầu: Viết hàm deleteElement sử dụng kiểu trả về void để xoá phần tử ở vị trí thứ i (do người dùng nhập) trong mảng arr. Mảng và giá trị i được nhập từ bàn phím.
// Lưu ý:
// i là chỉ số hợp lệ trong mảng.
// Sau khi xoá, các phần tử còn lại trong mảng sẽ được dời lên để lấp khoảng trống.
// Ví dụ:
// Input: arr = [1, 2, 3, 4], i = 2
// Output: arr = [1, 2, 4]
void deleteElement(int i, int arr[])
{
    int so;
    printf("Muon nhap bao so: ");
    scanf("%d", &so);

    if (i < 0 || i >= so)
    {
        printf("i ko thuoc khoang cua arr\n");
        return;
    }

    for (int a = i; a < so - 1; a++)
    {
        arr[a] = arr[a + 1];
    }

    so--;

    for (int b = 0; b < so; b++)
    {
        printf("%d ", arr[b]);
    }
    printf("\n");
}
// Bài 5: Thêm giá trị vào mảng
// Yêu cầu: Viết hàm insertElement sử dụng kiểu trả về void để thêm một giá trị n vào vị trí thứ i (do người dùng nhập) trong mảng arr. Mảng, giá trị n, và i được nhập từ bàn phím.
// Lưu ý:
// i là chỉ số hợp lệ trong mảng.
// Sau khi thêm, các phần tử còn lại sẽ được dời xuống để chừa chỗ cho phần tử mới.
// Ví dụ:
// Input: arr = [1, 2, 4], n = 3, i = 2
// Output: arr = [1, 2, 3, 4]
void insertElement(int i, int n, int arr[])
{
    int so;
    printf("Muon nhap bao so: ");
    scanf("%d", &so);
    if (i < 0 || i >= so)
    {
        printf("i ko thuoc khoang cua arr\n");
        return;
    }

    for (int a = so; a > i; a--)
    {
        arr[a] = arr[a - 1];
    }
    arr[i] = n;

    so++;

    for (int b = 0; b < so; b++)
    {
        printf("%d\t", arr[b]);
    }
}
// Bài 6: Duyệt mảng bằng con trỏ
// Yêu cầu:
// Viết hàm inputArray để nhập các giá trị vào mảng bằng con trỏ.
// Viết hàm printArray để in ra các giá trị trong mảng bằng con trỏ.
// Ví dụ:
// Input: arr = [1, 2, 3]
// Output: 1 2 3
void inputArray(int arr[], int so)
{
    for (int i = 0; i < so; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int so)
{
    for (int i = 0; i < so; i++)
    {
        printf("%d", arr[i]);
    }
}

void duyetmang(int arr[])
{
    int so;
    printf("Muon nhap bao so: ");
    scanf("%d", &so);
    inputArray(arr, so);
    printArray(arr, so);
}

int main(int argc, char const *argv[])
{
    return 0;
}