#include <ArduinoOTA.h>
// SPI
#include <SPI.h>
#include <Wire.h>
// DHT Sensor
#include "DHT.h"
// SSD1306 OLED+Ui
#include "SSD1306Wire.h"
#include "OLEDDisplayUi.h"
#include "SSD1306Spi.h"
// WIFI
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <ESP8266HTTPClient.h>

// #include <WebServer.h>
//  Time
#include <time.h>      // time() ctime()
#include <sys/time.h>  // struct timeval
#include <coredecls.h> // settimeofday_cb()
// ESP
#include "logger.h" //esp_logger library
// additional images
// MQTT
#include <PubSubClient.h>
// WeatherCast
#include "OpenWeatherMapCurrent.h"
#include "OpenWeatherMapForecast.h"
#include "OpenWeatherMapOneCall.h"
// JSON
#include <ArduinoJson.h>
// Configs
#include "config/config.h"
#include "config/secrets.h"

WiFiClient espClient;           // -  Wifi-client
PubSubClient client(espClient); // -  PubSub Client begin()
logging::Logger logger;         // logger class
// WebServer server(HttpLogServerPort); // for WebServer of ElegantOTA

void setup()
{
  //              S E T U P
  // SERIAL init
  Serial.begin(115200);

  WiFi.begin(Wifi_ssid, Wifi_password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.println("...");
  }
  if (WiFi.status() == WL_CONNECTED)
    Serial.println("Connected to wifi");
  ArduinoOTA.begin();
  // ElegantOTA.begin(&server); // Start ElegantOTA
  // server.begin();
}
void loop()
{
  ArduinoOTA.handle();
  
}
