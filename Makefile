.RECIPEPREFIX=]
.PHONEY=clean run
CPP=g++
CPP_FLAGS=-I ../include $(shell pkg-config --cflags --libs sdl2) 
LFLAGS=-lSDL2 -lSDL2_image

BUILD_DIR=../build
SRC_DIR=../src
MEDIA_DIR=...media

$(BUILD_DIR)/main: $(BUILD_DIR)/main.o $(BUILD_DIR)/engine.o $(BUILD_DIR)/image.o
]$(CPP) $(BUILD_DIR)/main.o $(BUILD_DIR)/engine.o $(BUILD_DIR)/image.o $(SRC_DIR)/viewports.cpp -o $@ $(LFLAGS)

$(BUILD_DIR)/main.o: ../main.cpp
]$(CPP) -c ../main.cpp  -o $@ $(CPP_FLAGS)

$(BUILD_DIR)/engine.o: $(SRC_DIR)/engine.cpp ../include/engine.hpp
]$(CPP) -c $(SRC_DIR)/engine.cpp -o $@ $(CPP_FLAGS)

$(BUILD_DIR)/image.o: $(SRC_DIR)/image.cpp ../include/image.hpp
]$(CPP) -c $(SRC_DIR)/image.cpp -o $@ $(CPP_FLAGS)

$(BUILD_DIR)/viewports.o: $(SRC_DIR)/viewports.cpp ../include/viewports.hpp
]$(CPP) -c $(SRC_DIR)/viewports.cpp -o $@ $(CPP_FLAGS)

clean:
]rm -rfv build/*.o build/main

run: build/main
]build/main
