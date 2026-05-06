# Field Notes

The useful part of this repository is the small rule set around schema drift and partition skew.

The domain cases cover `schema drift`, `lineage depth`, `partition skew`, and `quality gap`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

`stale` is the strongest case at 235 on `schema drift`. `stress` is the cautious anchor at 126 on `lineage depth`.

The point is not to make the repository bigger. The point is to make the important judgment testable.
