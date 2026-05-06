# ledger-data-warehouse-mesh

`ledger-data-warehouse-mesh` is a C++ project for Data engineering. It turns build a C++ toolkit that studies warehouse behavior through layout fixtures, with stable geometry snapshots and no network dependency into a small local model with readable fixtures and a direct verification command.

## Reading Ledger Data Warehouse Mesh

Start with the README, then open `metadata/project.json` to check the constants behind the examples. After that, `fixtures/cases.csv` shows the compact path and `examples/extended_cases.csv` gives a wider look at the same rule.

## Purpose

The goal is to capture the core behavior in code and make the surrounding assumptions obvious. A reader should be able to run the verifier, open the fixtures, and understand why each decision was made.

## Files Worth Reading

- `src`: primary implementation
- `tests`: verification harness
- `fixtures`: compact golden scenarios
- `examples`: expanded scenario set
- `metadata`: project constants and verification metadata
- `docs`: operations and extension notes
- `scripts`: local verification and audit commands

## What It Does

- Includes extended examples for pipeline state, including `recovery` and `degraded`.
- Documents quality gates tradeoffs in `docs/operations.md`.
- Runs locally with a single verification command and no external credentials.
- Stores project constants and verification metadata in `metadata/project.json`.
- Adds a repository audit script that checks structure before running the language verifier.

## Design Sketch

The project is organized around a compact model rather than a large framework. Inputs are scored, classified, and checked against golden fixtures. The constants live in code and are mirrored in metadata so documentation drift is easy to catch. The C++ project uses a small library boundary and a compiled assertion harness.

## Setup

Install C++ and run the commands from the repository root. The project does not need credentials or a hosted service.

## Fixture Notes

`boundary` is the first example I would inspect because it lands on the `review` path with a score of 68. The broader file also keeps `degraded` at -71 and `recovery` at 210, which gives the model a useful low-to-high spread.

## Usage

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

This runs the language-level build or test path against the compact fixture set.

## Verification

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/audit.ps1
```

The audit command checks repository structure and README constraints before it delegates to the verifier.

## Next Directions

- Add a short report command that prints the score breakdown for a single scenario.
- Add malformed input fixtures so the failure path is as visible as the happy path.
- Split the scoring constants into a typed configuration object and validate it before use.
- Add one more data engineering fixture that focuses on a malformed or borderline input.

## Limits

The fixture set is deliberately small. That keeps the review surface clear, but it also means the model should not be treated as a complete domain simulator.
