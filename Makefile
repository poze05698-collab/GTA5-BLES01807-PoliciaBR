# ---------------------------------------------------------
# Policia BR - GTA V PS3 BLES01807
# ---------------------------------------------------------

TARGET := policia_br

OFILES := \
	source/main.o \
	source/menu.o \
	source/input.o \
	police/service.o \
	police/vehicles.o \
	police/weapons.o \
	police/approach.o \
	police/pursuit.o \
	police/arrest.o \
	police/fine.o \
	police/wanted.o \
	police/calls.o \
	police/radio.o \
	police/backup.o \
	police/operations.o \
	police/favela.o \
	police/stations.o \
	police/uniform.o \
	police/rank.o

CXXFLAGS := -std=c++11 -Wall -Iinclude

TITLE := Policia BR
APPID := POLI00001

# Alvo principal
all: $(TARGET).self

# Inclui as regras oficiais do PSL1GHT
include $(PSL1GHT)/ppu_rules

# Forçar o linker do PS3DEV
CC := $(PS3DEV)/ppu/bin/ppu-gcc
CXX := $(PS3DEV)/ppu/bin/ppu-g++
LD := $(PS3DEV)/ppu/bin/ppu-gcc
AR := $(PS3DEV)/ppu/bin/ppu-ar

# Pacote opcional
pkg: $(TARGET).pkg

clean:
	rm -f $(OFILES)
	rm -f $(TARGET).elf
	rm -f $(TARGET).self
	rm -f $(TARGET).pkg
	rm -rf build
