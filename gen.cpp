#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

// Helper to generate a single array
vector<int> generate_array(int n, string mode) {
    vector<int> a(n);
    if (mode == "random") {
        for (int& x : a)
            x = rnd.next(1, 1'000'000'000);
    } else if (mode == "sorted") {
        int val = rnd.next(1, 1'000'000'000-n+1);
        for (int i = 0; i < n; ++i)
            a[i] = i + val;
    } else if (mode == "reversed") {
        int val = rnd.next(n, 1'000'000'000);
        for (int i = 0; i < n; ++i)
            a[i] = val - i;
    } else if (mode == "same") {
        int val = rnd.next(1, 1'000'000'000);
        fill(a.begin(), a.end(), val);
    } else if (mode == "small") {
        for (int& x : a)
            x = rnd.next(1, 1'000'000);
    } else {
        quitf(_fail, "Unknown generation mode: %s", mode.c_str());
    }
    return a;
}

int main(int argc, char* argv[]) {
    registerGen(argc, argv, 1);  // testlib init

    string mode = argv[1];
    int seed = atoi(argv[2]);
    int count = atoi(argv[3]);
    rnd.setSeed(seed);
    for (int i = 0; i < count; ++i) {
        int n = mode == "small" ? rnd.next(1,5) : 100000;
        cout << n << endl;
        auto a = generate_array(n, mode);
        for (int i = 0; i < n; i++) cout << a[i] << (i == n-1 ? "" : " ");
        cout << endl;
        auto b = generate_array(n, mode);
        for (int i = 0; i < n; i++) cout << b[i] << (i == n-1 ? "" : " ");
        cout << endl;
    }
    return 0;
}
