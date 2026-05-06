# ledger-data-warehouse-mesh

`ledger-data-warehouse-mesh` explores data engineering with a small C++ codebase and local fixtures. The technical goal is to build a C++ toolkit that studies warehouse behavior through layout fixtures, with stable geometry snapshots and no network dependency.

## Why It Exists

I want this repository to be useful as a quick reading exercise: fixtures first, implementation second, verifier last.

## Ledger Data Warehouse Mesh Review Notes

The first comparison I would make is `schema drift` against `lineage depth` because it shows where the rule is most opinionated.

## Features

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/ledger-data-warehouse-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `lineage depth`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Architecture Notes

The core code exposes a scoring path and the added review layer uses `signal`, `slack`, `drag`, and `confidence`. The domain terms are `schema drift`, `lineage depth`, `partition skew`, and `quality gap`.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The check exercises the source code and the review fixture. `stale` is the high score at 235; `stress` is the low score at 126.

## Limitations And Roadmap

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
