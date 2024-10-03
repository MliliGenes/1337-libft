Library		= libft
Compiler	= gcc
CmpFlags	= -Wall -Wextra -Werror
OUTN		= $(LIBRARY).a


SRC_DIR		= ./src
SRC_FILES	=	ft_bzero ft_isalpha ft_isascii ft_isdigit /
				ft_isnum ft_isprint ft_memcpy ft_memset /
				ft_strchr ft_strlen ft_strrchr ft_tolower /
				ft_toupper

CFILES		= $(SRC_FILES:%=$(SRC_DIR)/%.c)
OFILES		= $(SRC_FILES:%=$(SRC_DIR)/%.o)