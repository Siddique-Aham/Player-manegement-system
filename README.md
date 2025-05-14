# Cricket Player Management System

A C++ based console application to manage cricket player statistics, including batting and bowling performance. The system is designed to be simple, efficient, and modular.

---

## Features

- Add a new player with all relevant stats
- Delete a player using their jersey number
- Search for a player by name or jersey number
- Update player information
- Display all players
- Show top 3 players based on:
  - Runs scored
  - Wickets taken

---

## File Structure

| File Name            | Purpose                                      |
|----------------------|----------------------------------------------|
| `Player.h`           | Class declaration for `Player`               |
| `Player.cpp`         | Definitions for `Player` methods             |
| `PlayerManager.h`    | Function declarations for managing players   |
| `PlayerManager.cpp`  | Logic and implementation of core functions   |
| `main.cpp`           | Entry point of the program                   |
| `Makefile` *(optional)* | Simplified compilation (Linux/Mac users)  |

---

## Compilation & Execution

### Using Terminal:
```bash
g++ -c Player.cpp
g++ -c PlayerManager.cpp
g++ -c main.cpp
g++ -o player-management Player.o PlayerManager.o main.o
./player-management

