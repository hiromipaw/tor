/* Copyright (c) 2003-2004, Roger Dingledine
 * Copyright (c) 2004-2006, Roger Dingledine, Nick Mathewson.
 * Copyright (c) 2007-2018, The Tor Project, Inc. */
/* See LICENSE for licensing information */

#ifndef TOR_SOCKS5_STATUS_H
#define TOR_SOCKS5_STATUS_H

/** Specified SOCKS5 status codes. */
typedef enum {
  SOCKS5_SUCCEEDED                  = 0x00,
  SOCKS5_GENERAL_ERROR              = 0x01,
  SOCKS5_NOT_ALLOWED                = 0x02,
  SOCKS5_NET_UNREACHABLE            = 0x03,
  SOCKS5_HOST_UNREACHABLE           = 0x04,
  SOCKS5_CONNECTION_REFUSED         = 0x05,
  SOCKS5_TTL_EXPIRED                = 0x06,
  SOCKS5_COMMAND_NOT_SUPPORTED      = 0x07,
  SOCKS5_ADDRESS_TYPE_NOT_SUPPORTED = 0x08,
} socks5_reply_status_t;

#endif
