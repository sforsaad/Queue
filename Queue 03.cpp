#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    queue<int> q;
    stack<int> s;
    int n, k, x;

    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        q.push(x);
    }

    cout << "Enter K: ";
    cin >> k;

    if (k > n) k = n;

    for (int i = 0; i < k; i++) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    for (int i = 0; i < n - k; i++) {
        q.push(q.front());
        q.pop();
    }

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}