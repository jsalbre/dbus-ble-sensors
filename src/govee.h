#ifndef GOVEE_H
#define GOVEE_H

#include <stdint.h>
#include <bluetooth/bluetooth.h>

int govee_handle_mfg(const bdaddr_t *addr, const uint8_t *buf, int len);

#endif
