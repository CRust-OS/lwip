OBJ := obj
LWIPDIR := .

INC := -I src/include -I src/include/ipv4

CFLAGS := $(INC) -nostdlib

LWC	:= $(sort $(shell find $(LWIPDIR)/src -type f -name '*.c'))
LWC	:= $(filter-out %6.c %ip6_addr.c %ethernetif.c, $(LWC))
LWO	:= $(patsubst %.c,%.o,$(LWC))

#LWO	+= $(OBJ)/lwip-arch.o


$(OBJ)/lwip.a: $(LWO)
		-$(RM) $@
		$(AR) cqs $@ $^

clean:
	rm $(LWO)
	rm $(OBJ)/lwip.a
