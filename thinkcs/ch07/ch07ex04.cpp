#include <iostream>
#include <string>
using namespace std;

int count_letters(string s, char letter) {
    int last = s.find(letter);
    int count;

    for (count = 0; last != -1; count++) {
        last = s.find(letter, last + 1);
    }

    return count;
}

int main() {
    string state = "Mississippi";
    
    cout << "The letter i occurs " << count_letters(state, 'i');
    cout << " times in " << state << ".\n";

    return 0;
}
