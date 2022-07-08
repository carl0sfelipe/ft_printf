SRCS = 		ft_itoa.c\
			ft_memcpy.c\
			ft_printchar.c\
			ft_printf.c\
			ft_putnbr.c\
			ft_putstr.c\
			ft_putunbr.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strlcpy.c\
			ft_strlen.c\
			ft_utoa.c\
			ft_printhexa.c\
			ft_printptr.c\
			ft_printarg.c
		

OBJS	= ${SRCS:.c=.o}

NAME	= libftprintf.a

CC	= cc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror



${NAME}:
	${CC} ${CFLAGS} -c ${SRCS}
	ar -rcs ${NAME} ${OBJS}

all:		${NAME}
	

clean:
	${RM} ${OBJS}

fclean:		clean
	${RM} ${NAME}

re: clean fclean all
