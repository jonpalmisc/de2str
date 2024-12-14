PREFIX ?= /usr/local

CFLAGS	+= -O2
CFLAGS	+= -Wall -Wextra

.PHONY: all
all: de2str

de2str: main.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $<

.PHONY: clean
clean:
	rm -f de2str

.PHONY: install
install:
	install de2str $(PREFIX)/bin/
