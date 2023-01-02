#include <iostream>
using namespace std;
int main()
{
    int arr[6];
    int count;
    cout << "Enter the array elments : " << endl;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 6; i++)
    {
        count = 0;
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        cout << arr[i] << "occur for" << counter << "times" << endl;
    }
}