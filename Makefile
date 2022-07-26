.POSIX:

CFLAGS=-Iinclude

.c.o:
	@echo ' CC' $@
	@$(CC) $(CFLAGS) -c $< -o $@

OBJS=src/metal.o \
src/device.o \
src/command_queue.o

libmetal.so: $(OBJS)
	@echo ' LD' $@
	@$(CC) $(LDFLAGS) $(OBJS) -o $@ -shared -lvulkan

clean:
	rm -f $(OBJS)
