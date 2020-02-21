#include <iostream>
using namespace std;
int main(){

    int i = -52;
    unsigned u1 = 42,u2 = 10;
    cout << i + i << endl;
    cout << u1 << endl;
    cout << i + u1 << endl;
    cout << u2 - u1 << endl;
    cout << u1 - u2 << endl;
    for (i = 10; i >= 0;i--)
        cout << i << " ";
    cout << "\n";
    // for (unsigned u = 10; u >= 0;u--) //这个会无限循环
    //     cout << u << " ";
    
    system("pause");
    return 0;
}