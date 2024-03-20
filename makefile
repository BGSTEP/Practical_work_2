CC = gcc
CFLAGS = -Wall -Wextra -std=c11

hello_world: hello_world.c
	$(CC) $(CFLAGS) -o hello_world hello_world.c

clean:
	rm -f hello_world

