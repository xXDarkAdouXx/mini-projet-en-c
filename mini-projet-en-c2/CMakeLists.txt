cmake_minimum_required(VERSION 4.0)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c
        pilote.c
        pilote.h
        ecurie.c
        ecurie.h
        grandprix.c
        grandprix.h
        classement.c
        classement.h
        initialisation.c
        initialisation.h)
