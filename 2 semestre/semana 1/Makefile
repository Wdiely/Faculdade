# Nome do executável final
TARGET = programa

# Compilador C++
CXX = g++

# Flags de compilação
CXXFLAGS = -Wall -g -std=c++11

# Lista de TODOS os arquivos .cpp do projeto
SRC = main.cpp carro.cpp Livro.cpp Motor.cpp

# Regra padrão
all: $(TARGET)

# Compila o executável unindo a main e as implementações das classes
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Limpeza dos executáveis gerados
clean:
	rm -f $(TARGET) $(TARGET).exe

.PHONY: all clean