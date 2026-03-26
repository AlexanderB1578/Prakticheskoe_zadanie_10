#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int N;
    cin >> N;
    int s = 1;
    for (int i = 1; i <= N; i++)
    {  
        for (int j = 0; j < N; j++)
        {
            cout << "*";
        }
        cout << '\n';
    }

    return 0;
}