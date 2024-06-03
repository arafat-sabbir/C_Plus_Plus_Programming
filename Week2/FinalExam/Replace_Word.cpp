#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0;i<n;i++){
        string s;
    cin >> s;
    string x;
    cin >> x;

    size_t pos = 0;
    while (true) {
        pos = s.find(x, pos);
        if (pos == string::npos) break;
        s.replace(pos, x.length(), "#");
        pos += 1;
    }

    cout << s << endl;

    }
    return 0;
}
