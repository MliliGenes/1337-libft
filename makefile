Library		= libft
Compiler	= gcc
CmpFlags	= -Wall -Wextra -Werror
OUTN		= $(LIBRARY).a

SRC_FILES	=	ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
				ft_isnum.c ft_isprint.c ft_memcpy.c ft_memset.c \
				ft_strchr.c ft_strlen.c ft_strrchr.c ft_tolower.c \
				ft_toupper.c

CFILES		= $(SRC_FILES)
OFILES		= $(SRC_FILES:.c=.o)

%.o: %.c libft.h
	$(Compiler) $(CmpFlags) -c $< -o $@

$(OUTN): $(OFILES)
	ar rcs $(OUTN) $(OFILES)

all: $(OUTN)

clean:
	rm -f $(OFILES)

# fclean: clean
# 	rm -f $(OUTN)

# re: fclean all

# .PHONY: all clean fclean re
