#include <iostream>
#include <vector>
using namespace std;

int main () {
    int T;
    cin >> T;
    
    for (int tc = 1; tc <= T; ++tc) {
        int N;
        cin >> N;
        vector<int> vec(N);
        for (int i = 0; i < N; ++i)
            cin >> vec[i];
        int count = 0, max = -1;
        for (int i = 0; i < N-1; ++i) {
            if (vec[i] > max) {
                max = vec[i];
                if (vec[i] > vec[i+1])
                    ++count;
            }
        }
        if (vec.back() > max)
            ++count;
        cout << "Case #" << tc << ": " << count << endl;
    }
    return 0;
}
