/* Copyright (c) 2003-2004, Roger Dingledine
 * Copyright (c) 2004-2006, Roger Dingledine, Nick Mathewson.
 * Copyright (c) 2007-2018, The Tor Project, Inc. */
/* See LICENSE for licensing information */

#ifndef TOR_GETHOSTNAME_H
#define TOR_GETHOSTNAME_H

#include "lib/testsupport/testsupport.h"
#include <stddef.h>

MOCK_DECL(int,tor_gethostname,(char *name, size_t namelen));

#endif
