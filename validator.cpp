#include "testlib.h"
using namespace std;


const int max_n = 1e5;
const int max_val = 1'000'000'000;

int main(int argc, char** argv) {
    registerValidation(argc, argv);
    int n = inf.readInt(1, max_n, "n");
    ensuref(n <= max_n, "n should not exceed %d", max_n);
    inf.readEoln();
    inf.readInts(n, 1, max_val, "a");
    inf.readEoln();
    inf.readInts(n, 1, max_val, "a");
    inf.readEoln();
    inf.readEof();
    return 0;
}