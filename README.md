# Competitive Problem Solving — Course Collection

![Repository Banner](https://img.shields.io/badge/Competitive-Programming-blue?style=for-the-badge)

Welcome to the Competitive Problem Solving course repository — a neatly organized collection of practice problems, example solutions, and small learning projects for algorithmic programming in C/C++ and related languages. This repo is designed for students, contest participants, and anyone sharpening problem-solving skills.

**Why this repo?**
- Curated examples from common competitive programming topics (loops, strings, brute force, greedy, STL, etc.).
- Realistic contest-style solutions you can read, test, and adapt.
- Lightweight, easy-to-run files for quick experimentation.

**Quick Links**
- Root: core problems and utilities.
- `01. Nested loop/`, `02_String/`, `03_Brute force Approch/`, `04_Greedy/`, etc. — topic-organized folders.

Repository Structure (high-level)

- `01. Nested loop/`, `02_String/`, `03_Brute force Approch/`, `04_Greedy/` — Topic folders with sample problems.
- `Module - 2 (STL)/` — STL-related examples and exercises.
- `build/`, `Debug/` — build artifacts (ignore these in commits).

How to compile & run (Windows / PowerShell)

For a single C++ file (g++/MinGW or similar):

```powershell
g++ -std=c++17 "path\to\file.cpp" -O2 -o "file.exe"
.\file.exe
```

For C files (gcc):

```powershell
gcc "path\to\file.c" -O2 -o file.exe
.\file.exe
```

Tips
- Use `-std=c++17` or higher for modern features.
- Prefer `long long` for large integer problems and check bounds carefully.
- Keep I/O fast for large input: use `ios::sync_with_stdio(false); cin.tie(nullptr);`.

Contributing

Contributions are welcome — add sample problems, cleaner solutions, or improved explanations.

- Fork the repo, add your work in an appropriate folder, and make a PR with a short description.
- Keep each solution file named clearly (e.g., `AtCoder_B - Longest Segment.cpp`).

Recommended improvements

- Add a small script to compile and run chosen files quickly (PowerShell/.bat or Makefile).
- Add a `CONTRIBUTING.md` with coding style and PR checklist.
- Add badges for CI/tests and license.

License

This repository is available under the MIT License. You can replace or add a different license if needed.

Contact

If you want help improving this repo (organization, automation, badges, or CI), open an issue or reach out.

— Happy coding! 🚀
