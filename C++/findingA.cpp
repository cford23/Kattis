#include <iostream>
#include <string>
using namespace std;

int main() {

    string word;
    cin >> word;
    
    int k = 0;
    while (word[k] != 'a') {
        k++;
    }

    for (int i = k; i < word.length(); i++)
        cout << word[i];
    cout << endl;

    return 0;
}