NAME = MultiplicationTable
 
$(NAME): $(NAME).o 
	g++ -g -o $(NAME) $(NAME).o
 
$(NAME).o: $(NAME).cpp
	g++ -g -c $(NAME).cpp