# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Target executables
TARGETS = TCPEchoClient4 TCPEchoServer4

# Object files for each target
CLIENT_OBJS = TCPEchoClient4.o DieWithMessage.o
SERVER_OBJS = TCPEchoServer4.o DieWithMessage.o TCPServerUtility.o AddressUtility.o

# Default target to build both programs
all: $(TARGETS)

# Link object files to create the client executable
TCPEchoClient4: $(CLIENT_OBJS)
	$(CC) $(CFLAGS) -o TCPEchoClient4 $(CLIENT_OBJS)

# Link object files to create the server executable
TCPEchoServer4: $(SERVER_OBJS)
	$(CC) $(CFLAGS) -o TCPEchoServer4 $(SERVER_OBJS)

# Compile client source file
TCPEchoClient4.o: TCPEchoClient4.c Practical.h
	$(CC) $(CFLAGS) -c TCPEchoClient4.c

# Compile server source file
TCPEchoServer4.o: TCPEchoServer4.c Practical.h
	$(CC) $(CFLAGS) -c TCPEchoServer4.c

# Compile DieWithMessage utility
DieWithMessage.o: DieWithMessage.c Practical.h
	$(CC) $(CFLAGS) -c DieWithMessage.c

# Compile additional server utilities
TCPServerUtility.o: TCPServerUtility.c Practical.h
	$(CC) $(CFLAGS) -c TCPServerUtility.c

AddressUtility.o: AddressUtility.c Practical.h
	$(CC) $(CFLAGS) -c AddressUtility.c

# Clean up object files and the executables
clean:
	rm -f $(CLIENT_OBJS) $(SERVER_OBJS) $(TARGETS)
