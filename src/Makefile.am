bin_PROGRAMS = garlix

garlix_SOUCES = main.c \
boot.S \
link.ld

garlix_LDFLAGS = \
-T link.ld \
-Wl, --build-id=none

garlix_CFLAGS = \
-m32 \
-nostdinc \
-nodefaultlibs \
-nostartfiles \
-fno-builtin \
fno-stack-protector

garlix_CCASFLAGS = -m32

