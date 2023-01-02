#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    int i, j;
    int temp;
    cout << "Enter the array elments" << endl;
    for (i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; i++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The smallest element is arr[0]: " << arr[0] << endl;
    cout << "The smallest element is arr[1]: " << arr[1] << endl;
    cout << "The smallest element is arr[2]: " << arr[2] << endl;
}