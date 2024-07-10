# Minesweeper_Game

## About the Minesweeper
We play on a square board and we have to click on the board on the cells which do not have a mine. And obviously, we don’t know where mines are. If a cell where a mine is present is clicked then we lose, else we are still in the game. 

### There are three levels for this game-

Beginner – 9 * 9 Board and 10 Mines <br>
Intermediate – 16 * 16 Board and 40 Mines <br>
Advanced – 24 * 24 Board and 99 Mines <br>

### Probability of Finding a mine: 

Beginner  level –  10/81 (0.12) <br>
Intermediate level – 40/256 (0.15) <br>
Advanced level – 99 / 576 (0.17) <br>

The increasing number of tiles raises the difficulty bar. So the complexity level increases as we proceed to the next levels.
It might seem like a complete luck-based game (you are lucky if you don’t step over any mine over the whole game and unlucky if you have stepped over one). But this is not a completely luck-based game. Instead, you can win almost every time if you follow the hints given by the game itself. 

### Hints for Winning the Game
When we click on a cell having adjacent mines in one or more of the surrounding eight cells, we get to know how many adjacent cells have mines in them. So we can do some logical guesses to figure out which cells have mines. <br>
If you click on a cell having no adjacent mines (in any of the surrounding eight cells) then all the adjacent cells are automatically cleared, thus saving our time.
So we can see that we don’t always have to click on all the cells not having the mines (total number of cells – number of mines) to win. If we are lucky then we can win in a very short time by clicking on the cells which don’t have any adjacent cells having mine.
