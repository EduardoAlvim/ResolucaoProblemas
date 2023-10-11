#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int N;
    cin >> N;

    string str = "Life is not a problem to be solved, but a reality to be experienced.";

    for (int i = 0; i < N; i++) {
        cout << char(toupper(str[i])); 
    }

    cout << endl;

    return 0;
}
