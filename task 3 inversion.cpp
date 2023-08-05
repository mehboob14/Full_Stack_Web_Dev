#include <iostream>
using namespace std;

void inversionCount(int *arr, int size)
{

    int count{};
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (i < j && arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    cout << "Count is " << count << endl;
}

int main()
{
    int arr[10] = {7, 9, 20, 2, 9, 3, 15, 2, 56, 8};
    inversionCount(arr, 10);
}