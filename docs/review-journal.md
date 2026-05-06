# Review Journal

The cases below are the review handles I would use before changing the implementation.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 206, lane `ship`
- `stress`: `lineage depth`, score 126, lane `watch`
- `edge`: `partition skew`, score 192, lane `ship`
- `recovery`: `quality gap`, score 211, lane `ship`
- `stale`: `schema drift`, score 235, lane `ship`

## Note

This file is intentionally plain so the fixture remains the source of truth.
