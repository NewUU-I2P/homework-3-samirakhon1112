float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    cout << "Enter first price: " << endl;
    cin >> price1;
    cout << "Enter second price: " << endl;
    cin >> price2;
    cout << "Enter third price: " << endl;
    cin >> price3;
    double highestPrice = (price1 > price2) ? ((price1 > price3) ? price1 : price3) : ((price2 > price3) ? price2 : price3);
    cout << "The highest price is " << highestPrice << endl;
}
    return result;
}