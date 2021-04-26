# Text_based_game
## Our Team
Group No.: 23

Members: Wu Sen Pan, Chiew Lik Seng
## Problem Statement
As horror games like resident evil, the evil within, are getting more popular, we want to make a  game with similar settings and story.
This is a RPG game with guns and armour.
## Game Description
Game type: Text based RPG game

Story: You are Chris, a former police. Your daughter Alexandra has been abducted by unknown. You have searched her for 2 years and now all clues pointed to this corp - BioReincarnation(Bior.) Alexandra is said to be imprisoned in a lab inside an obsolete building. You are standing in front of the main entrance of the building.

Your mission is to break into the lab and find your daughter ASAP.
The building is heavily-guarded and full of dangers.
Go Fast Or You May Lose Your Daughter


## Rules of the game
1) Winning condition: Rescue your daughter Alexandra and escape through the Entrance Door to Outside
2) Do not die. If dead, you will be respawned at previous checkpoint.
3) Kill monsters and security guards to level up and increase skillpoint.
4) Sometimes run for life is also a good option instead of wasting time on fighting unbeatable opponents.
5) Pick up more items to help you in combat or heal your hp.
6) Certain entrance/special items is not accessible unless you pass the mini games.
7) Please avoid invalid input as much as possibles.

## Features of the game
1. Statistics (Code Requirement 2 & 3 & 4 & 5: use file to store different properties )
   - Status of Main Character(Chris) Data Structures:
     - Health
     - Damage
     - Speed
     - Armour
     - Equipments -> This is a vector which will have elastic size (Requirement 2)
     - Items - > vector with dynamic memory (Requirement 3)
     - locations
   - Monsters
   - Items
   - Equipments
   - .etc
2. Map/Navigation (Code Requirement 2 & 3 & 4 & 5: Update Chris' position, display the map, Save map    changes when exit)
   - move around to fight villain and become stronger, only the first time u go to a location will         appear villain.
3. Mini games (Code Requirement 1: assigning random questions to player)
   - obtain key(hacking device) to unlock certain locked entrance
   - Play TicTacToe With AI (minimax algorithm)
   - Guess objects
4. Save and Quit (Code Requirement 4: Save/exit the game without loss of progress)
   - Auto save is also available after each winning fight

## Quick Guide
1. When you are at any location of the map, you can choose to 1) move to another location, 2) check your items and use them, 3) check your equipments, 4) save and quit
2. Whenever you enter a new location that you have never been before, villain will appear and you have to fight them or run.
3. You can use items to heal you or damage villain.
4. Big Boss is in Security Office.
5. Your daughter is actually in Jail hehe.
6. Toilet is crucial.
7. Have fun :)

## Windows Version
In case any unfortunate things happen, we have a backup windows version for you which will work perfectly fine.

## Makefile
1. Use "make Main" to make command
2. Execute the file with ./Main

## Sample Input(Sample path)
1. Entrance -> Canteen -> Entrance -> Stairs -> Entrance -> Lobby -> A1 -> BioLab ->Chemistry -> A6868 -> Toilet -> A6868 -> BioLab -> Lobby -> SecurityOffice -> Jail -> SecurityOffice -> Lobby -> Entrance -> Outside => wins
2. Entrance -> Lobby -> SecurityOffice -> Lose
