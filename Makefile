.RECIPEPREFIX=:

BUILD_DIR=$(pwd)/build

CC=gcc
CC_FLAGS=-O3 $(shell sdl2-config --cflags)

CPP=g++
CPP_FLAGS=-O3 $(shell sdl2-config --cflags)

LD=ld.gold
LD_FLAGS= $(shell sdl2-config --libs) 

$(BUILD_DIR)/tsrpg: $(BUILD_DIR)/main.o 

$(BUILD_DIR)/main.o: 

$(BUILD_DIR)/sprite.o:

$(BUILD_DIR)/image.o:

$(BUILD_DIR)/graphic.o:

