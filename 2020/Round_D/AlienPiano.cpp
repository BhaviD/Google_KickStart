#include <iostream>
#include <vector>
using namespace std;

int main () {
    int T;
    cin >> T;
    
    for (int tc = 1; tc <= T; ++tc) {
        int K;
        cin >> K;
        vector<int> vec (K);
        for (int i = 0; i < K; ++i)
            cin >> vec[i];

        int upCount = 0, downCount = 0, violations = 0;
        for (int i = 1; i < K; ++i) {
            if (vec[i-1] < vec[i]) {
                ++upCount;
                downCount = 0;
            } else if (vec[i-1] > vec[i]) {
                ++downCount;
                upCount = 0;
            }
            if (upCount > 3 || downCount > 3) {
                ++violations;
                upCount = downCount = 0;
            }
        }
        cout << "Case #" << tc << ": " << violations << endl;
    }
    return 0;
}
