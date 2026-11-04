#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;
    int ch;
    string name;

    do {
        cout << "1.Add Document";
        cout << "2.Print Document";
        cout << "3.Front";
        cout << "4.Display";
        cout << "5.Exit";
        cin >> ch;

        if (ch == 1) {
            cout << "Enter name: ";
            cin >> name;
            q.push(name);
        }
        else if (ch == 2) {
            if (!q.empty()) {
                cout << "Printing: " << q.front();
                q.pop();
            }
        }
        else if (ch == 3) {
            if (!q.empty()) cout << q.front();
        }
        else if (ch == 4) {
            queue<string> temp = q;
            while (!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
        }

    } while (ch != 5);

}