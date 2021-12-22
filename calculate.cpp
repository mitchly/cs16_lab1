#include <iostream>
using namespace std;

int main(){
    int var1;
    int var2;
    int var3;
    cout << "Please enter 3 numbers." << endl;
    cin >> var1;
    cin >> var2;
    cin >> var3;
    cout << "The formula result is: " << 3 * (var1 + 2 * var2) - 4 * var3;
}