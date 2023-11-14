#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string heightDescription;
    if (S == 'M') {
        if (height < 1.7) {
            heightDescription = "Short";
        } if else (height >= 1.7 && height < 1.85)  {
            heightDescription = "Normal";
        } else {
            heightDescription = "Tall";
        }
    } if else (S == 'F') {
        if (height < 1.6) {
            heightDescription = "Short";
        } if else (height >= 1.6 && height < 1.75) {
            heightDescription = "Normal";
        } else {
            heightDescription = "Tall";
        }
    } else {
        heightDescription = "Undefined gender";
    }

    return heightDescription;
    // use return to return your result
    // make use of control flow statements
}