#include <iostream>
#include <string>
#include <list>

using namespace std;

#define MAX_LAN 100000;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string S;
    list<char> L;
    int N, M;
    list<char>::iterator  cur;
    cin >> S >> M ;
    
    N = S.size();
    for(int i = 0; i < N; i++) L.push_back(S[i]);
    cur = L.end();
    
    for(int i = 0; i < M ; i++) {
        char command;
        cin >> command;
        switch (command) {
            case 'L':
                if(cur != L.begin()) cur--;
                break;
            case 'D':
                if(cur != L.end()) cur++;
                break;
            case 'B':
                if(cur != L.begin()) {
                    cur--;
                    cur = L.erase(cur);
                }
                break;
            case 'P':
                char C;
                cin >>  C;
                L.insert(cur, C);
                break;
        }
    }
    N = L.size();
    cur = L.begin();
    for(int i = 0; i < N; i++) {
        cout << L.front();
        L.pop_front();
    }
    
    return 0;
}
