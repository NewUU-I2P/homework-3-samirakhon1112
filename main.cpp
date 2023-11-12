#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    problemSolution1(13 + (30 * .4) + (20 * 0.12) + (10 * 1.4) + ((consumed_water - 60) * 1.5));
    cout << "Problem 2\n";
    problemSolution2(highestPrice);
    cout << "Problem 3\n";
    problemSolution3();
    cout << "Problem 4\n";
    problemSolution4();
    cout << "Problem 5\n";
    problemSolution5();
    return 0;
}