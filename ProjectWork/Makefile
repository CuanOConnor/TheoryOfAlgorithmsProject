# This is my Makefile.
CC=gcc # specify gcc compiler
EXECS=args preproc512 SHA512 #args for cleaning execs

SHA512: SHA512.c
	$(CC) -o SHA512 SHA512.c

preproc512: preproc512.c
	$(CC) -o preproc512 preproc512.c
	echo "My Makefile Success!"

test: tests.sh
	./tests.sh

clean:
	rm -f $(EXECS)