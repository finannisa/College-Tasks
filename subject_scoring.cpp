#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a;
    int b;

    float score, average = 0, sum = 0, StandardDeviation;
    cout << "The score which going to be included:" << endl;
    cin >> a;

    float scores[a];
    for (int b = 1; b <= a; b++) {

        cout << "The number with the indesx of " << b << " :" << endl;
        cin >> score;
        scores[b - 1] = score;

    }

    cout << "Amount of the average : ";

    for (int b = 0; b < a; b++) {

        average += scores[b];

    }

    average /= a;

    cout << average << endl;

    for (int b = 0; b < a; b++) {

        scores[b] -= average;

        scores[b] *= scores[b];

        sum += scores[b];

    }

    sum /= a;

    StandardDeviation = sqrt(sum);

    cout << "The Standard Deviation is : " << StandardDeviation << endl;

return 0;
}