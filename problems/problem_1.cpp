void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    cout << "Enter water consumption (in cm): " << endl;
    cin >> consumed_water;
    if (consumed_water <= 30) {
        cout << 13 + (consumed_water * 0.4) << endl;
    } else if (consumed_water > 30 && consumed_water <= 50) {
    cout << 13 + (30 * 0.4) + ((consumed_water - 30) * 0.12) << endl;
    } else if (consumed_water > 50 && consumed_water <= 60) {
        cout << 13 + (30 * 0.4) + (20 * 0.12) + ((consumed_water - 50) * 1.4) << endl;
    } else {
        cout << 13 + (30 * 0.4) + (20 * 0.12) + (10 * 1.4) + ((consumed_water - 60) * 1.5) << endl;
    }
    return cost;
}
