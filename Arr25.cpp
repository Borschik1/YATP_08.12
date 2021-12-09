#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> sp;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sp.push_back(a);
    }
    for (int i = 1; i < n + 1; i++) {
        int count1 = 0;
        int count2 = 0;
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if ((sp[j] > i) && (flag == 0)) {
                count1++;
            }
            if ((sp[j] < i) && (flag == 1)) {
                count2++;
            }
            if (sp[j] == i) {
                flag = 1;
            }
        }
        cout << count1 + 1 << " " << n - count2;
        cout << endl;

    }
}
