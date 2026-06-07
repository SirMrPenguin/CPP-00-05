NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

GCC = g++ -Wall -Werror -Wextra -std=c++98
RM = rm -f

all		: $(NAME)

$(NAME): $(OBJS)
				$(GCC) $(OBJS) -o $(NAME)

%.o: %.cpp
		$(GCC) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all
