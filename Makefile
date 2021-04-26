FLAGS =  -pedantic-errors -std=c++11


battle.o: battle.cpp battle.h
	g++ $(FLAGS) -c &<

guessobject.o: guessobject.cpp guessobject.h
	g++ $(FLAGS) -c &<

HomeMenu.o: HomeMenu.cpp HomeMenu.h
	g++ $(FLAGS) -c &<

Main_Menu.o: Main_Menu.cpp Main_Menu.h
	g++ $(FLAGS) -c &<

readfile.o: readfile.cpp readfile.h
	g++ $(FLAGS) -c &<

savefile.o: savefile.cpp savefile.h
	g++ $(FLAGS) -c &<

tictactoe.o: tictactoe.cpp tictactoe.h
	g++ $(FLAGS) -c &<

main.o: main.cpp battle.h guessobject.h HomeMenu.h Main_Menu.h readfile.h savefile.h tictactoe.h
	g++ $(FLAGS) -c &<

main: main.o battle.o guessobject.o HomeMenu.o Main_Menu.o readfile.o savefile.o tictactoe.o
	g++ $(FLAGS) &^ -o main
