CC=c++ -std=c++98 -pedantic
SRC= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Fill_brain.cpp
OBJ=$(SRC:.cpp=.o)

all: zombie

zombie: $(OBJ)
	$(CC) -o world_on_fire $(OBJ)
	@echo "\033[1;32mBuild completed successfully!\033[0m"

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[1;31mObject files removed!\033[0m"

fclean: clean
	@rm -f world_on_fire
	@echo "\033[1;31mExecutable removed!\033[0m"

re: fclean all
