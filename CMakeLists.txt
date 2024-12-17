cmake_minimum_required(VERSION 3.30)
project(Israel_Lara_Contenedores_Dinamicos)

set(CMAKE_CXX_STANDARD 14)

add_executable(Israel_Lara_Contenedores_Dinamicos
    main.cpp
        ejercicio1/Vector_e_Iteradores.cpp
        ejercicio1/Vector_e_Iteradores.h
        ejercicio2/Contenedores_Estándar_y_Secuencias.h
        ejercicio2/Contenedores_Estándar_y_Secuencias.cpp
        ejercicio3/Algoritmos.h
        ejercicio3/Algoritmos.cpp
        ejercicio4/Cálculo_numérico.h
        ejercicio4/Cálculo_numérico.cpp
        ejercicio5/Cmasmas_Moderno.h
        ejercicio5/Cmasmas_Moderno.cpp
        ejercicio6/Introducción_a_Boost.h
        ejercicio6/Introducción_a_Boost.cpp)
