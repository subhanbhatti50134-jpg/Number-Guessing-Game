# Number Guessing Game (C++)

A beginner C++ console game: guess a randomly generated number between 1 and 100,
with hints (too high / too low), attempt tracking, and input validation.

## What it does

- Picks a secret number between 1 and 100 (seeded by the current time)
- Prompts the user for a guess and validates that the input is a number
- Tells the user whether each guess is too high or too low
- Tracks the number of attempts
- Lets the user quit by entering 0

## Who it's for

Students learning C++ basics: loops, conditionals, random numbers, input
validation, and console I/O.

## Features

- `rand()` + `srand(time(0))` for random number generation
- Input validation: rejects non-numeric input and out-of-range guesses
- Attempt counter
- Option to quit (enter 0) and reveal the secret number

## Compile and run

Prerequisites: a C++ compiler (e.g. `g++`).

```bash
# clone
git clone https://github.com/subhanbhatti50134-jpg/Number-Guessing-Game.git
cd Number-Guessing-Game

# compile
g++ "number guessing game.cpp" -o guessing_game

# run
./guessing_game
```

Windows (PowerShell):

```powershell
g++ "number guessing game.cpp" -o guessing_game.exe
.\guessing_game.exe
```

## Notes

- The repository also contains a file named `Code` that appears to be an
  alternate export of the same program; `number guessing game.cpp` is the
  primary source.
- Compilation was not tested in this environment; the GitHub Actions workflow
  verifies it builds with `g++`.

## License

This repository does not yet carry an open-source license. See
`LICENSE_DECISION.md` for recommended options.
