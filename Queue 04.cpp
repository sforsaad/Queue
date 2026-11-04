#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int ch, id;

    do {
        cout << "1.Add Ticket"<<endl;
        cout << "2.Resolve Ticket"<<endl;
        cout << "3.Front"<<endl;
        cout << "4.Display"<<endl;
        cout << "5.Exit"<<endl;
        cin >> ch;

        if (ch == 1) {
            cout << "Enter ID: ";
            cin >> id;
            q.push(id);
        }
        else if (ch == 2) {
            if (!q.empty()) {
                cout << "Resolved: " << q.front();
                q.pop();
            }
        }
        else if (ch == 3) {
            if (!q.empty()) cout << q.front();
            else cout << "Empty";
        }
        else if (ch == 4) {
            queue<int> temp = q;
            while (!temp.empty()) {
                cout << temp.front() << " ";
                temp.pop();
            }
        }

    } while (ch != 5);

}