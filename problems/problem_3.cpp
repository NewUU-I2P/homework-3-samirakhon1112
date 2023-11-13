#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string result;
    if (S == 'M') {
        if (height < 1.70) {
            cout << "short" << endl;
        } if else (height >= 1.70 && height == 1.85) {
            cout << "normal" << endl;
        } else {
            cout << "tall" << endl;
        }
    } if else (S == 'F') {
        if (height < 1.60) {
            cout << "short" << endl;
        } if else (height >= 1.60 && height == 1.75) {
            cout << "normal" << endl;
        } else {
            cout << "tall" << endl;
        }
    } else {
        cout << "undefined gender"
    }
    // use return to return your result
    // make use of control flow statements
}