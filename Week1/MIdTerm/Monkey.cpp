#include <bits/stdc++.h>
using namespace std;

int main() {
    char a[10000001];
    while (cin.getline(a, 10000001)) {
        sort(a, a + strlen(a));
        int length = strlen(a);
        char* end = remove(a, a + length, ' ');
        *end = '\0';
        cout << a << endl;
    }
    return 0;
}
