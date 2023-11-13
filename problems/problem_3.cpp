#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string result;
    if (S == 'M') {
        if (height < 1.70) {
            result = "short";
        } if else (height >= 1.70 && height == 1.85) {
             result = "normal";
        } else {
            result = "tall";
        }
    } if else (S == 'F') {
        if (height < 1.60) {
            result = "short";
        } if else (height >= 1.60 && height == 1.75) {
            result = "normal";
        } else {
            result = "tall";
        }
    } else {
        result = "undefined gender";
    }

    return result;
    // use return to return your result
    // make use of control flow statements
}