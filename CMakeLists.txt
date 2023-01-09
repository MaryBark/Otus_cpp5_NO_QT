#cmake_minimum_required(VERSION 3.5)

#project(otus_cpp_5_Primitive LANGUAGES CXX)

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)

#add_executable(otus_cpp_5_Primitive main.cpp ConsoleCanves.h ConsoleCanves.cpp Observations.h
#    Observations.cpp PushButtonNoQt.h PushButtonNoQt.cpp Primitives.h Primitives.cpp Colores.h Colores.cpp Toolses.h Toolses.cpp
#    PrimController.h PrimController.cpp PrimModel.h PrimModel.cpp PrimView.h PrimView.cpp ICanves.h)


cmake_minimum_required(VERSION 3.2)

project(otus_cpp_5_Primitive VERSION 0.0.${PATCH_VERSION})

configure_file(version.h.in version.h)

add_executable(otus_cpp_5_Primitive main.cpp ConsoleCanves.h ConsoleCanves.cpp Observations.h
        Observations.cpp PushButtonNoQt.h PushButtonNoQt.cpp Primitives.h Primitives.cpp Colores.h Colores.cpp Toolses.h Toolses.cpp
        PrimController.h PrimController.cpp PrimModel.h PrimModel.cpp PrimView.h PrimView.cpp ICanves.h)

set_target_properties(otus_cpp_5_Primitive PROPERTIES
        CXX_STANDARD 14
        CXX_STANDARD_REQUIRED ON
        COMPILE_OPTIONS "-Wpedantic;-Wall;-Wextra"
        )

install(TARGETS otus_cpp_5_Primitive RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)

set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")

set(CPACK_PACKAGE_CONTACT Alttaira@yandex.ru)

include(CPack)
