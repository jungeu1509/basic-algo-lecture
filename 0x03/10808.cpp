#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[26] = {0, };
    size_t len;
    string S;
    cin >> S;
    len = S.length();
    for(int i=0; i < len; i++){
        arr[S[i]-'a']++;
    }
    for(int i=0; i < 26;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
