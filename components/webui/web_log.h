#pragma once
// SPDX-License-Identifier: Unlicense
#include <stddef.h>

// Mirrors every ESP_LOG line into a RAM ring buffer, in addition to the UART.
// Call once, as early as possible, so the boot log is captured too.
void weblog_install(void);

// Copies the buffered log (oldest first, whole lines only) into out as a
// NUL-terminated string and returns its length.
size_t weblog_snapshot(char* out, size_t cap);
