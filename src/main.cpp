#include <iostream>

int main(void){
    using namespace std;

    cout << "Enter an intager:  ";

    int num;
    cin >> num;

    if(num % 2 == 0){
        cout << "\nThe intager is even";
    } else if(num % 2 > 0){
        cout << "\nThe intager is odd";
    } else {
        cerr << "\nUnrecognised intager: please ensure it is a whole number";
    }

    cout << "\nEnter any value then press enter to continue";

    int halt;
    cin >> halt;
    
    return 0;
}