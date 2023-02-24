#ifndef CONFIG_H
#define CONFIG_H
#include <Arduino.h>
//DHTxx pin and type
#define DHTPIN D2     
#define DHTTYPE DHT22
//OLED pin define
#define OLED_MOSI   D7
#define OLED_CLK   D5
#define OLED_DC    D1
#define OLED_CS    D8
#define OLED_RESET D3


int HttpLogServerPort = 80;
//MQTT msg buffer
#define MSG_BUFFER_SIZE	(50)

//Forecast data
String OPEN_WEATHER_MAP_APP_ID = "###";
String OPEN_WEATHER_MAP_LOCATION_ID = "###";
float OPEN_WEATHER_MAP_LOCATTION_LAT = 51.00000;  
float OPEN_WEATHER_MAP_LOCATTION_LON = 17.00008;  
String OPEN_WEATHER_MAP_LANGUAGE = "en";
const uint8_t MAX_FORECASTS = 3;
const boolean IS_METRIC = true;
const String WDAY_NAMES[] = {"ND", "PON", "WT", "SR", "CZW", "PT", "SOB"};
const String MONTH_NAMES[] = {"STY", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};

//TIME
String NTP_server = "pool.ntp.org";
const int UPDATE_INTERVAL_SECS = 60*8; // -   interval data-update time(sec)
bool readyForWeatherUpdate = false;    // -   flag for counter
long timeSinceLastWUpdate =  millis(); // -   TIME now time  

#endif