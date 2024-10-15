Library		= libft
Compiler	= gcc
CmpFlags	= -Wall -Wextra -Werror
OUTN		= $(Library).a

SRC_FILES	=	ft_isalnum.c \


CFILES		= $(SRC_FILES)
OFILES		= $(SRC_FILES:.c=.o)

%.o: %.c %.h
	$(Compiler) $(CmpFlags) -c $< -o $@

$(OUTN): $(OFILES)
	ar rcs $(OUTN) $(OFILES)

all: $(OUTN)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(OUTN)

re: fclean all

.PHONY: all clean fclean re

