#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int tc = 1; tc <= T; ++tc) {
        int N;
        cin >> N;
        vector<int> vec(N);
        for (int i = 0; i < N; ++i)
            cin >> vec[i];
        int curr_len = 2, max_len = 2, diff = vec[1]-vec[0];
        for (int i = 2; i < N; ++i) {
            if (vec[i]-vec[i-1] == diff)
                ++curr_len;
            else {
                diff = vec[i]-vec[i-1];
                curr_len = 2;
            }
            if (max_len < curr_len)
                max_len = curr_len;
        }
        cout << "Case #" << tc << ": " << max_len << endl;
    }
    return 0;
}
