Library		= libft
Compiler	= gcc
CmpFlags	= -Wall -Wextra -Werror
OUTN		= $(Library).a

SRC_FILES	=	ft_isalnum.c \
				ft_strlen.c \
				ft_memcpy.c  \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_memset.c \
				ft_bzero.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_memmove.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strncmp.c \
				ft_substr.c \

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

