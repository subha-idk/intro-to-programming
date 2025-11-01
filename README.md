# Intro to Programming — class examples and practice problems

This repository contains lecture examples and small practice assignments for an introductory C programming course. The code is organized by week under `classnotes/` and practice problems under `dpp/`.

## Goals

- Provide simple, well-commented C examples covering basic I/O, arithmetic, conditionals, loops, and simple tasks.
- Keep runnable single-file examples that compile with a standard C compiler (gcc / MinGW / TDM-GCC) on Windows.

## Repository layout

- `classnotes/` — in-class example programs, grouped by week.

  - `week1/`
    - `myfirstprog.c` — Hello World and basic compile/run notes.
    - `prog2.c` — simple variables and formatted output (ints and chars).
    - `prog3.c` — reading two integers with `scanf` and printing their sum.
  - `week2/`
    - `prog4.c` — integer division with float cast.
    - `prog5.c` — simple if/else comparison.
    - `prog6.c` — implicit/explicit casting and formatting.
    - `prog7.c` — check even/odd using modulus operator.
  - `week3/`
    - `prog8.c` — for-loop printing numbered lines.
    - `prog9.c` — for-loop counting down and a message after the loop.
    - `prog10.c` — prompt, read two ints, print their sum.

- `dpp/` — practice tasks (student/homework style), grouped by week.
  - `week3/`
    - `task3.c` — compute sum of integers from 1 to n.
    - `task4.c` — repeatedly prompt until user enters an even number.
    - `task5.c` — read 4 integers and print the average with 2 decimal places.
  - `zypcodingquestion2.pdf` — assignment/problem statement (if present).

## Build & run (Windows / PowerShell)

Prerequisite: a C compiler such as `gcc` (MinGW, TDM-GCC) must be installed and available on PATH. If you prefer, use WSL with `gcc` installed.

Compile and run a single file (example using `prog3.c`):

```powershell
gcc .\classnotes\week1\prog3.c -o prog3.exe; .\prog3.exe
```

Compile an example and put the executable next to the source (keeps output files flat):

```powershell
gcc .\dpp\week3\task5.c -o task5.exe; .\task5.exe
```

Quick compile all `.c` files (produces a separate `.exe` per `.c` file). Use PowerShell:

```powershell
Get-ChildItem -Recurse -Filter *.c | ForEach-Object { gcc $_.FullName -o ($_.BaseName + '.exe') }
```

Notes:

- Many programs read input via `scanf` and expect integer input. Enter values as prompted.
- Executables included in `dpp/week3` can be run directly on Windows (e.g., `.	ask3.exe`). Only run executables from trusted sources.

## Testing and validation

- These are small, manual programs intended for interactive runs. Example test: run `task5.exe` and enter 4 integers; verify the displayed average matches manual calculation.


## License & attribution

This repository contains course material for the online platform www.zypheron.tech. The course "Intro to Programming" and the materials here are provided by Zypheron.

License: the project is licensed under the MIT License (see `LICENSE` in this repository).

Attribution and usage notes:

- You may use, modify, and redistribute these examples for teaching and learning purposes provided you retain this attribution and the `LICENSE` file.
- If you reuse or publish materials derived from `zypheron` or other third-party resources, ensure you have the right to redistribute those resources and include appropriate attribution.


## Other features & platform integration

- Platform integration: these examples map to the Zypheron learning modules on www.zypheron.tech. Consider linking each week's folder to the corresponding lesson page for easier student navigation.
- Auto-graded exercises: tasks under `dpp/` are suitable for automated grading. Add small input/output fixtures and a script that compares program output to expected output to enable auto-grading on the platform.

## Contact 

- Email: `info@zypheron.tech`

---
