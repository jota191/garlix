bin_PROGRAMS = garlix

garlix_SOURCES = main.c \
boot.S \
link.ld \
util.S \
stdio.c \
string.c \
system.c \
vga.c

garlix_LDFLAGS = \
-T link.ld 
##-Wl , --build-id=none

garlix_CFLAGS = \
-m32 \
-nostdinc \
-nodefaultlibs \
-nostartfiles \
-fno-builtin \
-fno-stack-protector \
-I ../include

garlix_CCASFLAGS = -m32

