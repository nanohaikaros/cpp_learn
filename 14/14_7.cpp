#include <iostream>
using namespace std;

template <typename Res, typename ValType>
void Sum(Res &result, ValType &val) {
    result = result + val;
}

template <typename Res, typename First, typename... Rest>
void Sum(Res &result, First val1, Rest... valN) {
    result = result + val1;
    return Sum(result, valN...);
}

int main() {
    double dResult = 0;
    Sum(dResult, 3.14, 4.56, 1.1111);
    cout << "dResult = " << dResult << endl;

    string strResult;
    Sum(strResult, "Hello ", "world");
    cout << "strResult = " << strResult.c_str() << endl;

    return 0;
}