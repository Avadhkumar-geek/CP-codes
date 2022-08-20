#include <iostream>
using namespace std;
// 0 1 2 3 4
// 1 2 3 4 5
//   1 2 3 4
void swapRight(int arr[], int start, int end)
{
    while (start < end)
    {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int size, swapIndx;
        cin >> size >> swapIndx;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        swapRight(arr, 0, size - 1);
        swapRight(arr, 0, swapIndx - 1);
        swapRight(arr, swapIndx, size - 1);
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
