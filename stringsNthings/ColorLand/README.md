# Colorland 

This problem is taken from
[Colorland](https://open.kattis.com/problems/colorland) on the wonderful
[Kattis Problem Archive](https://open.kattis.com/) website.

## Description

Yancy is designing a new board game called Colorland. The rules of Colorland
are as follows:

* Colorland’s board is a linear sequence of squares. The first square is a
  special start square, the remaining squares are colored blue, orange, pink,
  green, red, or yellow.
* The goal of Colorland is to move your game piece from the start square to
  square N.
* Players take turns drawing from a shuffled deck of cards. Each card has a
  single color on it. A player moves to the nearest square after their current
  square with the color indicated by the drawn card.
* If there are no squares of the drawn color after a player’s current square,
  that player’s piece does not move and their turn ends.

Yancy is interested in the length of play required for different board layouts.
She would like to know the smallest number of cards any one player would have
to draw to complete the game.

For instance, the board for Sample Input 3 is [Start, Blue, Orange, Pink,
Green, Red, Yellow, Yellow, Yellow, Yellow]. The best first draw is Yellow
which advances a player from Start to the square. From the square to the end,
only a Yellow draw will advance the player. Therefore the smallest number of
draws is 4.

## Input

The first line of input consists of a single integer N (1 <= N <= 20000)
denoting the number of squares. The next lines each contain a single string
in the set {Blue, Orange, Pink, Green, Red, Yellow} representing the color of
the square, starting with the first square on the board (not counting the start
square).

## Output

Output a single integer equal to the minimum number of draws required to move
from the start square to square.

## Test Data
<table>
<tr><th>Input</th><th>Output</th></tr>
<tr>
  <td>6<br>Blue<br>Orange<br>Pink<br>Green<br>Red<br>Yellow</td>
  <td>1</td>
</tr>
<tr>
  <td>12<br>Blue<br>Orange<br>Pink<br>Green<br>Red<br>Yellow<br>Yellow<br>
  Red<br>Green<br>Pink<br>Orange<br>Blue</td>
  <td>2</td>
</tr>
<tr>
  <td>9<br>Blue<br>Orange<br>Pink<br>Green<br>Red<br>Yellow<br>Yellow<br>
  Yellow<br>Yellow</td>
  <td>4</td>
</tr>
</table>
