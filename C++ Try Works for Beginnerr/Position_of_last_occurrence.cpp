#include <iostream>
#include <limits>

using namespace std;

int main() {
    int setLength, Number, LastOccurrence = -1;

    cout << "Enter the length of the set" << endl;
    cin >> setLength;

    while (setLength < 0) {
        cout << "Enter a positive integer:" << endl;
        cin >> setLength;
    }

    int setArray[setLength];
    cout << "Enter the numbers in the set: " << endl;
    for (int i = 0; i < setLength; i++) {
        cout << "Enter number " << i + 1 << "\t\t";
        cin >> setArray[i];
    }

    cout << "Enter the number to search for: ";
    cin >> Number;

    for (int i = 0; i < setLength; i++) {
        if (setArray[i] == Number) {
            LastOccurrence = i;
        }
    }

    if (LastOccurrence == -1) {
        cout << "The Number " << Number << " does not occur in the set" << endl;
    } else {
        cout << "The Number " << Number << " appears " << LastOccurrence + 1 << " times" << endl;
    }

    return 0;
}
