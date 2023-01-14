#include <iostream>
#include <string>
using namespace std;

int main() {
     
    float arr[20];
    float *point;
    point = &arr[7];
    *point = 17.771;
    cout << arr[7] << endl << point << endl << *point << endl;

    return 0;
}
