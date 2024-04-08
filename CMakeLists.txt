cmake_minimum_required(VERSION 3.27)
project(Wyklad)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         10.2.1
)
FetchContent_MakeAvailable(fmt)


add_executable(Wyklad W1/W.cpp
        "W1/Zadania/W1.1 Migracja kodu Java na C++.cpp"
        "W1/Zadania/W1.2 Podstawowe operacje na zmiennych tekstowych.cpp"
        "W1/Zadania/W1.3 Translacja cyfr.cpp"
        "W1/Zadania/W1.4 Porównanie zachowania między Javą a C++.cpp"
        "W1/Zadania/W1.5 Sprawdzanie, czy pierwsza wpisana sekwencja jest równa drugiej  .cpp"
        "W1/Zadania/W1.6 Suma dwóch liczb.cpp"
        "Core/W1.1 Box print.cpp"
        W2/W.cpp
        "W2/Zadania/W2.1 Eliminowanie największej i najmniejszej wartości.cpp"
        "Core/W2.1 Odwracanie słów.cpp"
        "W2/Zadania/W2.2 Iloczyn skalarny.cpp"
        "W2/Zadania/W2.3 Iteracja co N elementów.cpp"
        "W2/Zadania/W2.4 Największe elementy zbioru.cpp"
        "W2/Zadania/W2.5 Palindromy.cpp"
        "W2/Zadania/W2.6 Sortowanie wybranej połowy wektora.cpp"
        "W2/Zadania/W2.7 Usuwanie duplikatów.cpp"
        "Core/W2.2 Manipulacja formatem wyświetlania danych.cpp"
        W3/W.cpp
        "W3/Zadania/W3.1 Modyfikacje elementów przy pomocy pętli zakresowej.cpp"
        "W3/Zadania/W3.3 Szukanie najdłuższego tekstu.cpp"
        "W3/Zadania/W3.4 Usuwanie sąsiednich białych znaków.cpp"
        "Core/W3.2 Wzbogacenia biblioteki standardowej.cpp"
        "Core/W3.1 Refactoring przy użyciu lambd i algorytmów.cpp"
        "W3/Zadania/W3.2 Naturalne sortowanie.cpp"
        W4/W.cpp
        "W4/Zadania/W4.1 Generyczne udoskonalenia biblioteki standardowej.cpp"
        "W4/Zadania/W4.2 Analiza liczb w folderze.cpp"
        "W4/Zadania/W4.3 Analiza liczb w pliku.cpp"
        "W4/Zadania/W4.4 Poprawne sudoku.cpp"
        "Core/W4.2 Dzielenie zakresów na części.cpp"
)
target_link_libraries(Wyklad fmt)
