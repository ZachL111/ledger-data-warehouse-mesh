#include "domain_review.hpp"
#include <cassert>

int main() {
    DomainReview item{62, 44, 18, 92};
    assert(domain_review_score(item) == 206);
    assert(domain_review_lane(item) == "ship");
}
