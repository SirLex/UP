#include <iostream>
using namespace std;

void print (char S, int N) {
    for (int i = 0; i < N; i++) {
        cout << S << " ";
    }
}

int main() {
    char S;
    int N;
    cin >> S >> N;
    print(S, N);
}