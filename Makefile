NAME := policia_br

CXX := g++

CXXFLAGS := -std=c++11 -Wall -Wextra

INCLUDES := -Iinclude

SOURCES := \
	source/main.cpp \
	source/menu.cpp \
	source/input.cpp \
	police/service.cpp \
	police/vehicles.cpp \
	police/weapons.cpp \
	police/approach.cpp \
	police/pursuit.cpp \
	police/arrest.cpp \
	police/fine.cpp \
	police/wanted.cpp \
	police/calls.cpp \
	police/radio.cpp \
	police/backup.cpp \
	police/operations.cpp \
	police/favela.cpp \
	police/stations.cpp \
	police/uniform.cpp \
	police/rank.cpp

OBJECTS := $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(NAME)
