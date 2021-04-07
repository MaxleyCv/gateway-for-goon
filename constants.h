

/*CREATED BY LATIKAS 04-07-2021*/


#ifndef AIRQUALITY_CONSTANTS_H
#define AIRQUALITY_CONSTANTS_H

#define CLOCK true
#define WIFITRANSMITTER true

#pragma once

extern int message_sent;

/*
CONSTANTS FOR DS555
*/
#ifdef CLOCK
#endif

#ifdef WIFITRANSMITTER

#define PASSWORD "IDontLikeWhiskas"
#define NETWORK_SSID "TheFatGrayCat"
#define MQTT_SERVER "broker.hivemq.com"
#define TOPIC "secterica/goon-gateways"

#endif

#endif //AIRQUALITY_CONSTANTS_H