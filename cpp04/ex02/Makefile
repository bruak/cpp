CC=c++ -std=c++98 -pedantic
SRC= main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Fill_brain.cpp
OBJ=$(SRC:.cpp=.o) 

all: zombie

zombie: $(OBJ)
	$(CC) -o abstract $(OBJ)
	@echo "\033[1;32mBuild completed successfully!\033[0m"

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[1;31mObject files removed!\033[0m"

fclean: clean
	@rm -f abstract
	@echo "\033[1;31mExecutable removed!\033[0m"

re: fclean all
