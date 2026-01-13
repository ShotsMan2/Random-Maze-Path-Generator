# Random Maze Path Generator

This project implements a procedural generation algorithm in C to create a valid maze path.

## ⚙️ Algorithm Logic

1.  **Initialization:** Fills a 9x9 matrix entirely with walls (`#`).
2.  **Path Carving (The Solution):**
    * Starts at `[0][0]` (Point A).
    * Randomly moves **Right** or **Down** until it reaches `[8][8]` (Point B).
    * Ensures boundary safety (won't go off the grid).
3.  **Noise Injection:** randomly removes ~20% of the remaining walls to create dead ends and alternative routes, making it look like a real maze.

## 🚀 Output Example

* **A:** Start
* **B:** End
* **#:** Wall
* **.** : Path

```text
A . . # # # # # # 
# # . . . # # # # 
# # # # . . # # # 
# # # # # . # # # 
# . . . . . # . # 
# . # # # # # . # 
# . . # . . . . # 
# # # # . # # # # 
# # # # . . . . B
