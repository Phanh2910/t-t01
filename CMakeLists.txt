cmake_minimum_required(VERSION 3.31)
project(ss1 C)

set(CMAKE_C_STANDARD 23)

add_executable(ss1 main.c
        " PTIT_CNTT3_IT104_Session01_Bai02.c"
        " PTIT_CNTT3_IT104_Session01_Bai03.c"
        cmake-build-debug/PTIT_CNTT3_IT104_Session01_Bai04.c
        PTIT_CNTT3_IT104_Session01_Bai04.c
        " PTIT_CNTT3_IT104_Session01_Bai05.cpp"
        " PTIT_CNTT3_IT104_Session01_Bai05.c"
        " PTIT_CNTT3_IT104_Session01_Bai07.c"
        " PTIT_CNTT3_IT104_Session01_Bai08.c")
