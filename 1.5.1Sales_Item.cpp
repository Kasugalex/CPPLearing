#include <iostream>
#include "include/Sales_item.h"
using namespace std;
int main(){
    Sales_item book;
    cin >> book;
    cout << book << endl;

    Sales_item item1, item2;
    cin >> item1 >> item2;
    cout << item1 + item2 << endl;

    system("pause");
    return 0;
}