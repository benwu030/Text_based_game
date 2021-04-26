FLAGS =  -pedantic-errors -std=c++11


battle.o: battle.cpp battle.h ItemAndMonster.h readfile.h ItemAndMonster.h
	g++ $(FLAGS) -c $<

guessobject.o: guessobject.cpp guessobject.h
	g++ $(FLAGS) -c $<

HomeMenu.o: HomeMenu.cpp HomeMenu.h Map.h readfile.h ItemAndMonster.h
	g++ $(FLAGS) -c $<

Main_Menu.o: Main_Menu.cpp Main_Menu.h readfile.h ItemAndMonster.h
	g++ $(FLAGS) -c $<

Map.o: Map.cpp Map.h
	g++ $(FLAGS) -c $<

readfile.o: readfile.cpp readfile.h Map.h ItemAndMonster.h
	g++ $(FLAGS) -c $<

savefile.o: savefile.cpp savefile.h Map.h readfile.h ItemAndMonster.h
	g++ $(FLAGS) -c $<

tictactoe.o: tictactoe.cpp tictactoe.h
	g++ $(FLAGS) -c $<


Main.o: Main.cpp battle.h guessobject.h HomeMenu.h Main_Menu.h Map.h readfile.h savefile.h tictactoe.h ItemAndMonster.h 

	g++ $(FLAGS) -c $<

Main: Main.o battle.o guessobject.o HomeMenu.o Main_Menu.o Map.o readfile.o savefile.o tictactoe.o
	g++ $(FLAGS) $^ -o Main
