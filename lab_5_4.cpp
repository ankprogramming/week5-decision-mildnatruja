#include <iostream>

using namespace std;

int main() {

    int menu;

    cout << "Choose Program" << endl;
    cin >> menu;

    switch (menu) {
        case 1: cout << "Call Program 1" << endl; break;
        case 2: cout << "mild" << endl; break;
        case 3: cout << "miw" << endl; break;
        case 4: cout << "moo" << endl; break;
        case 5: cout << "marr" << endl; break;
        default : cout <<"error" ;

    }
    return 0;
}
