CC= c++ -g -std=c++98 -pedantic
SRC= main.cpp Fixed.cpp
OBJ=$(SRC:.cpp=.o)

all: zombie

zombie: $(OBJ)
	$(CC) -o now_talking $(OBJ)
	@echo "\033[1;32mBuild completed successfully!\033[0m"

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "\033[1;31mObject files removed!\033[0m"

fclean: clean
	@rm -f now_talking
	@echo "\033[1;31mExecutable removed!\033[0m"

re: fclean all