CC=c++ -std=c++98 -pedantic
SRC= main.cpp ClapTrap.cpp ScavTrap.cpp
OBJ=$(SRC:.cpp=.o)

all: zombie

zombie: $(OBJ)
	$(CC) -o serena_my_love $(OBJ)
	@echo "\033[1;32mBuild completed successfully!\033[0m"

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[1;31mObject files removed!\033[0m"

fclean: clean
	@rm -f serena_my_love
	@echo "\033[1;31mExecutable removed!\033[0m"

re: fclean all