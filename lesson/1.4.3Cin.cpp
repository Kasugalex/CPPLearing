#include <iostream>
using namespace std;
int main()
{
    int sum = 0, value = 0;
    while (cin >> value)
    {
        sum += value;
    }

    cout << "Sum is: " << sum << endl;
    system("pause");
    return 0;
}