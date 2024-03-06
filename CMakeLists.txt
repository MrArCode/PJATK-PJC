cmake_minimum_required(VERSION 3.27)
project(Wyklad)

set(CMAKE_CXX_STANDARD 20)

add_executable(Wyklad W1/W.cpp
        "W1/Zadania/W1.1 Migracja kodu Java na C++.cpp"
        "W1/Zadania/W1.2 Podstawowe operacje na zmiennych tekstowych.cpp"
        "W1/Zadania/W1.3 Translacja cyfr.cpp"
        "W1/Zadania/W1.4 Porównanie zachowania między Javą a C++.cpp"
        "W1/Zadania/W1.5 Sprawdzanie, czy pierwsza wpisana sekwencja jest równa drugiej  .cpp"
        "W1/Zadania/W1.6 Suma dwóch liczb.cpp"
)
