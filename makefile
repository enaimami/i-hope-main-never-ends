NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)

make :	
	$(CC) $(CFLAGS) -c $(SRCS) 

objectcomper :
	$(CC) $(CFLAGS) *.o -o merhaba.out

clean :
	echo $(SRCS:.c=.o)
	rm $(SRCS:.c=.o)

cleanf :
	rm merhaba.out