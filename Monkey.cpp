#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
    char a[100];
    bool firstLine = true;
    
    while (cin.fgets(a, 100,stdin)) {
        if (strlen(a) == 0) {
            continue;
        }
        
        if (!firstLine) {
            cout << endl; 
        }
        firstLine = false;
        
        sort(a, a + strlen(a));
        cout << a;
    }
    
    return 0;
}
