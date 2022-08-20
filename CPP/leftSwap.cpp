#include <iostream>
#include <algorithm>
using namespace std;

void swapRight(int arr[], int size, int swapIdx)
{

    int temp[size];
    while (swapIdx--)
    {
        temp[0] = arr[size - 1];
        for (int i = 1; i < size; i++)
        {
            temp[i] = arr[i - 1];
        }
        copy(temp, temp + size, arr);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// void swapLeft(int arr[], int size, int swapIdx)
// {

//     int temp[size];
//     while (swapIdx--)
//     {
//         temp[size - 1] = arr[0];
//         for (int i = 1; i < size; i++)
//         {
//             temp[i - 1] = arr[i];
//         }
//         copy(temp, temp + size, arr);
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int size;
        cin >> size;
        int swapIdx;
        // cout << "Enter swap point" << endl;
        cin >> swapIdx;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

      //  swapLeft(arr, size, swapIdx);
        swapRight(arr, size, swapIdx);
    }

    return 0;
}