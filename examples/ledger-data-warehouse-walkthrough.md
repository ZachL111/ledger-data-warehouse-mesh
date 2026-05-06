# Ledger Data Warehouse Mesh Walkthrough

This walk-through keeps the domain vocabulary close to the data instead of burying it in prose.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 206 | ship |
| stress | lineage depth | 126 | watch |
| edge | partition skew | 192 | ship |
| recovery | quality gap | 211 | ship |
| stale | schema drift | 235 | ship |

Start with `stale` and `stress`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `stress` becomes less cautious without a clear reason, I would inspect the drag input first.
