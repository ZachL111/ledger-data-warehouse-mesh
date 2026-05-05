#include "policy.hpp"
#include <cassert>

int main() {
    Signal signal_case_1{59, 79, 10, 22, 10};
    assert(score_signal(signal_case_1) == 53);
    assert(classify_signal(signal_case_1) == "review");
    Signal signal_case_2{89, 95, 10, 22, 8};
    assert(score_signal(signal_case_2) == 121);
    assert(classify_signal(signal_case_2) == "review");
    Signal signal_case_3{67, 96, 8, 19, 12};
    assert(score_signal(signal_case_3) == 121);
    assert(classify_signal(signal_case_3) == "review");
}
