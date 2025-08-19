#include <iostream>
using namespace std;

class GreatestFinder {
    int a, b, c; // Member variables

public:
    // 1. No arguments, no return value
    void type1() {
        cout << "\nType 1: No arguments, no return\nEnter three numbers: ";
        cin >> a >> b >> c;

        if (a > b && a > c)
            cout << "Greatest: " << a << endl;
        else if (b > c)
            cout << "Greatest: " << b << endl;
        else
            cout << "Greatest: " << c << endl;
    }

    // 2. With arguments, no return value
    void type2(int x, int y, int z) {
        cout << "\nType 2: With arguments, no return\n";
        if (x > y && x > z)
            cout << "Greatest: " << x << endl;
        else if (y > z)
            cout << "Greatest: " << y << endl;
        else
            cout << "Greatest: " << z << endl;
    }

    // 3. No arguments, with return value
    int type3() {
        cout << "\nType 3: No arguments, returns value\nEnter three numbers: ";
        cin >> a >> b >> c;

        if (a > b && a > c)
            return a;
        else if (b > c)
            return b;
        else
            return c;
    }

    // 4. With arguments, with return value
    int type4(int x, int y, int z) {
        if (x > y && x > z)
            return x;
        else if (y > z)
            return y;
        else
            return z;
    }
};

int main() {
    int a, b, c;

    // Type 1
    type1();

    // Type 2
    cout << "\nType 2: Enter three numbers: ";
    cin >> a >> b >> c;
    type2(a, b, c);

    // Type 3
    int result3 = type3();
    cout << "Greatest (from type 3): " << result3 << endl;

    // Type 4
    cout << "\nType 4: Enter three numbers: ";
    cin >> a >> b >> c;
    int result4 = type4(a, b, c);
    cout << "Greatest (from type 4): " << result4 << endl;

    return 0;
}

