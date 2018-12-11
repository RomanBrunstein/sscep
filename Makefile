#
# Makefile for Linux
#

CC	= gcc
#WITH_DEBUG   = -g
CFLAGS	= -Wall -O $(WITH_DEBUG)

PROG	= sscep
OBJS    = sscep.o init.o net.o sceputils.o pkcs7.o ias.o fileutils.o configuration.o engine.o

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROG) $(OBJS) -lcrypto -lcurl $(LDFLAGS)

clean:
	rm -f $(PROG) $(OBJS) core

install: $(PROG)
	cp $(PROG) $(INSTALL_DIR)/

package: all
	echo "Creating package..."
	Linux/make_Linux_package.sh

