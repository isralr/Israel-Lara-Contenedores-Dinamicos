cmake_minimum_required(VERSION 3.30)

# Configura vcpkg local
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

project(Israel_Lara_Contenedores_Dinamicos)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Asegúrate de que vcpkg pueda encontrar Boost
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/installed/x64-windows/share/boost")

# Buscar Boost y sus componentes (especifica los que necesitas, por ejemplo, system y filesystem)
find_package(Boost REQUIRED COMPONENTS system filesystem)

# Depuración de Boost para verificar que se está encontrando correctamente
message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")

# Ejecutable
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
        ejercicio6/Introducción_a_Boost.cpp
)

# Vincula Boost a tu ejecutable con los componentes específicos
# Intentamos enlazar con Boost::boost, Boost::system y Boost::filesystem directamente
target_link_libraries(Israel_Lara_Contenedores_Dinamicos PRIVATE Boost::boost Boost::system Boost::filesystem)

# Si Boost::System sigue sin encontrar, intentamos enlazar directamente con las bibliotecas encontradas
# target_link_libraries(Israel_Lara_Contenedores_Dinamicos PRIVATE ${Boost_LIBRARIES})
