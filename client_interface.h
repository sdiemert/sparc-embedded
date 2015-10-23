#ifndef CLIENT_INTERFACE_H
#define CLIENT_INTERFACE_H

#include <HardwareSerial.h>
#include <stdint.h>
#include <Arduino.h>

#include "const.h"
#include "types.h"
#include "Time.h"

/**
 * A class that communicates events to an external client. 
 */
class ClientInterface {

public:

    ClientInterface(HardwareSerial *serial);

    uint8_t send_events(event_t *events, uint8_t count, packet_t * sync);

private:

    uint8_t check_available();

    uint8_t send_end();

    uint8_t send_packet(packet_t *p);

    uint8_t init_packet(packet_t *p);

    uint8_t read_packet(packet_t *p);

    uint8_t send_end_of_data();

    void reset();

    HardwareSerial *hw;
    unsigned long rate;
    uint8_t seq;
};

#endif 
