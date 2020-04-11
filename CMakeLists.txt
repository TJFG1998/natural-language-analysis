cmake_minimum_required(VERSION 3.15)
project(TPAEDII C)

set(CMAKE_C_STANDARD 99)

add_executable(TPAEDII main.c includes/line.h includes/auxiliary.h src/models/line.c includes/word.h src/models/word.c includes/size.h src/models/size.c includes/root.h src/models/root.c includes/morph.h src/models/morpho.c includes/certainty.h src/models/certainty.c src/parser.c includes/parser.h src/histogram.c)