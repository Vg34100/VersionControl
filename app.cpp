#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main(){
    cout << "WELCOME TO MY APP!" << endl;

    int a = 1;
    cout << add(a, a) << endl;

    return 0;
}
