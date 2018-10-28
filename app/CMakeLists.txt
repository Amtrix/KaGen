################################################################################
# app/CMakeLists.txt
#
# CMake file for generator app
#
# Copyright (C) 2016-2017 Sebastian Lamm <lamm@ira.uka.de>
#
# All rights reserved. Published under the BSD-2 license in the LICENSE file.
################################################################################

list(APPEND SRCS
    "parse_parameters.cpp"
)

build_mpi_prog(kagen ${SRCS})
build_mpi_prog(interface_test ${SRCS})

################################################################################
