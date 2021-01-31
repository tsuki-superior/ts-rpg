.RECIPEPREFIX=]
.PHONEY=clean run
CPP=g++
CPP_FLAGS=$(shell pkg-config --cflags --libs sdl2) -Wall
LD_FLAGS=-lSDL2 -lSDL2_image

BUILD_DIR=../build
SRC_DIR=../src
MEDIA_DIR=../media

$(BUILD_DIR)/main: $(BUILD_DIR)/main.o $(BUILD_DIR)/engine.o $(BUILD_DIR)/image.o $(BUILD_DIR)/viewports.o $(BUILD_DIR)/point.o $(BUILD_DIR)/size.o
]$(CPP) -o $@ $(LD_FLAGS) $^

$(BUILD_DIR)/main.o: ../main.cpp ../include/engine.hpp ../include/size.hpp ../include/image.hpp ../include/viewports.hpp ../include/point.hpp
]$(CPP) -o $@ $(CPP_FLAGS) $^

$(BUILD_DIR)/size.o: $(SRC_DIR)/size.cpp ../include/size.hpp
]$(CPP) -o $@ $(CPP_FLAGS) $^

$(BUILD_DIR)/engine.o: $(SRC_DIR)/engine.cpp ../include/engine.hpp
]$(CPP) -o $@ $(CPP_FLAGS) $^

$(BUILD_DIR)/image.o: $(SRC_DIR)/image.cpp ../include/image.hpp
]$(CPP) -o $@ $(CPP_FLAGS) $^

$(BUILD_DIR)/viewports.o: $(SRC_DIR)/viewports.cpp ../include/viewports.hpp
]$(CPP) -o $@ $(CPP_FLAGS) $^

$(BUILD_DIR)/point.o: $(SRC_DIR)/point.cpp ../include/point.hpp
]$(CPP) -o $@ $(CPP_FLAGS) $^

clean:
]rm -rfv build/*.o build/main

run: build/main
]build/main
