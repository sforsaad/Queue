#include <iostream>
#include <queue>
using namespace std;

struct Package {
    int id, start, end;
    string address;
};

int main() {
    queue<Package> q;
    int ch, time;

    do {
        cout << "1.Add Package";
        cout << "2.Deliver";
        cout << "3.Front";
        cout << "4.Display";
        cout << "5.Check Time";
        cout << "6.Exit";
        cin >> ch;

        if (ch == 1) {
            Package p;

            cout << "Enter ID: ";
            cin >> p.id;
            cout << "Enter Address: ";
            cin >> p.address;
            cout << "Enter Start Time: ";
            cin >> p.start;
            cout << "Enter End Time: ";
            cin >> p.end;

            q.push(p);
        }

        else if (ch == 2) {
            if (!q.empty()) {
                cout << "Delivered: " << q.front().id;
                q.pop();
            }
        }

        else if (ch == 3) {
            if (!q.empty())
                cout << q.front().id << " " << q.front().address;
        }

        else if (ch == 4) {
            queue<Package> temp = q;

            while (!temp.empty()) {
                cout << temp.front().id << " "
                    << temp.front().address << endl;
                temp.pop();
            }
        }

        else if (ch == 5) {
            if (!q.empty()) {
                cout << "Enter current time: ";
                cin >> time;

                if (time >= q.front().start &&
                    time <= q.front().end)
                    cout << "Deliver Now";
                else if (time > q.front().end) {
                    cout << "Expired";
                    q.pop();
                }
                else
                    cout << "Wait";
            }
        }

    } while (ch != 6);

}