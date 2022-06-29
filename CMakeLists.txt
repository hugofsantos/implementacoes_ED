cmake_minimum_required(VERSION 3.0)

project(edb)

include_directories(./include)

add_executable(
    main
    ./src/main.c
    ./src/clock.c
    ./src/buscas.c
    ./src/ordenacoes.c
    ./src/sequencias.c
)
