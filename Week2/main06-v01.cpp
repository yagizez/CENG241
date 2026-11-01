#include <iostream>

using namespace std;

template <typename Num>
Num mult(Num a, Num b)
{
    return (a * b);
}

int main(void)
{
    int inum1, inum2;
    cout << "Input two integers: ";
    cin >> inum1 >> inum2;
    cout << "Result of multiplication: " << mult(inum1, inum2) << endl;

    float fnum1, fnum2;
    cout << "Input two floats: ";
    cin >> fnum1 >> fnum2;
    cout << "Result of multiplication: " << mult(fnum1, fnum2) << endl;

    return 0;
}
