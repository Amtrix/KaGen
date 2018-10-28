/*******************************************************************************
 * app/parse_parameters.cpp
 *
 * Copyright (C) 2016-2017 Sebastian Lamm <lamm@ira.uka.de>
 *
 * All rights reserved. Published under the BSD-2 license in the LICENSE file.
 ******************************************************************************/

#ifndef _PARSE_PARAMETERS_H_
#define _PARSE_PARAMETERS_H_

#include <string.h>

#include "generator_config.h"
#include "tools/arg_parser.h"

#include "definitions.h"

namespace kagen {

void ParseParameters(int argn, char **argv,
                     PEID, PEID size,
                     PGeneratorConfig &generator_config);

}
#endif
