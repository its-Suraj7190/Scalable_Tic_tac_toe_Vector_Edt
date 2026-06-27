# Vectorized Tic-Tac-Toe

A scalable Object-Oriented C++ implementation of Tic-Tac-Toe using vector-based winning line generation.

This project is the software implementation accompanying the mathematical work:

> **Mathematical Foundations for Scalable Tic-Tac-Toe: Vector Parametric Edition (II)**

---

## Author

**Suraj Rai**

ORCID: **0009-0009-9320-8962**

GitHub: https://github.com/its-suraj7190

---

## Features

- Object-Oriented Design
- Modular Multi-file Project Structure
- Scalable N × N Board
- Automatic Winning Line Generation using Vector Parametric Equations
- Continuous Winner Detection
- Input Validation
- Duplicate Move Detection
- Cross-platform Build Support

---

## Project Structure

```
Tic_tac_toe/
│
├── includes/
│   ├── Board.h
│   ├── Input.h
│   └── Tic_tac_toe.h
│
├── src/
│   ├── Board.cpp
│   ├── Input.cpp
│   ├── Tic_tac_toe.cpp
│   └── main.cpp
│
├── Makefile
├── .gitignore
├── LICENSE
├── README.md
└── build.bat
```

---

## Requirements

- C++17 or newer
- g++
- mingw32-make (Windows)

---

## Build

```bash
mingw32-make
```

---

## Run

```bash
.\Tic_tac_toe.exe
```

or

```bash
mingw32-make run
```

---

## Clean Build Files

```bash
mingw32-make clean
```

---

## Mathematical Background

The game generates every winning row, column and diagonal using vector parametric equations instead of hard-coded winning conditions.

For an N × N board,

- Rows
- Columns
- Main Diagonal
- Secondary Diagonal

are generated dynamically, making the implementation scalable for arbitrary board sizes.

---

## Future Improvements

- AI Opponent
- Minimax Algorithm
- Alpha-Beta Pruning
- Graphical User Interface
- Save/Load Games
- Online Multiplayer

---

## License

This project is released under the MIT License.
