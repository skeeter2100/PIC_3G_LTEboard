#include "sparkfun_lte.h"

#define LTE_SHIELD_STANDARD_RESPONSE_TIMEOUT 1000
#define LTE_SHIELD_SET_BAUD_TIMEOUT 500
#define LTE_SHIELD_POWER_PULSE_PERIOD 3200
#define LTE_RESET_PULSE_PERIOD 10000
#define LTE_SHIELD_IP_CONNECT_TIMEOUT 60000
#define LTE_SHIELD_POLL_DELAY 1
#define LTE_SHIELD_SOCKET_WRITE_TIMEOUT 10000

// ## Suported AT Commands
// ### General
const char LTE_SHIELD_COMMAND_AT[] = "AT";         // AT "Test"
const char LTE_SHIELD_COMMAND_ECHO[] = "E";        // Local Echo
const char LTE_SHIELD_COMMAND_IMEI[] = "+CGSN";    // IMEI identification
const char LTE_SHIELD_COMMAND_IMSI[] = "+CIMI";    // IMSI identification
const char LTE_SHIELD_COMMAND_CCID[] = "+CCID";    // SIM CCID
// ### Control and status
const char LTE_SHIELD_COMMAND_FUNC[] = "+CFUN";    // Functionality (reset, etc.)
const char LTE_SHIELD_COMMAND_CLOCK[] = "+CCLK";   // Clock
const char LTE_SHIELD_COMMAND_AUTO_TZ[] = "+CTZU"; // Automatic time zone update
// ### Network service
const char LTE_SHIELD_COMMAND_MNO[] = "+UMNOPROF"; // MNO (mobile network operator) Profile
const char LTE_SHIELD_SIGNAL_QUALITY[] = "+CSQ";
const char LTE_SHIELD_REGISTRATION_STATUS[] = "+CREG";
const char LTE_SHIELD_MESSAGE_PDP_DEF[] = "+CGDCONT";
const char LTE_SHIELD_MESSAGE_ENTER_PPP[] = "D";
const char LTE_SHIELD_OPERATOR_SELECTION[] = "+COPS";
// V24 control and V25ter (UART interface)
const char LTE_SHIELD_COMMAND_BAUD[] = "+IPR";     // Baud rate
// ### GPIO
const char LTE_SHIELD_COMMAND_GPIO[] = "+UGPIOC";  // GPIO Configuration
// ### IP
const char LTE_SHIELD_CREATE_SOCKET[] = "+USOCR";  // Create a new socket
const char LTE_SHIELD_CLOSE_SOCKET[] = "+USOCL";   // Close a socket
const char LTE_SHIELD_CONNECT_SOCKET[] = "+USOCO"; // Connect to server on socket
const char LTE_SHIELD_WRITE_SOCKET[] = "+USOWR";   // Write data to a socket
const char LTE_SHIELD_READ_SOCKET[] = "+USORD";    // Read from a socket
const char LTE_SHIELD_LISTEN_SOCKET[] = "+USOLI";  // Listen for connection on socket
// ### SMS
const char LTE_SHIELD_MESSAGE_FORMAT[] = "+CMGF";  // Set SMS message format
const char LTE_SHIELD_SEND_TEXT[] = "+CMGS";       // Send SMS message
// ### GPS
const char LTE_SHIELD_GPS_POWER[] = "+UGPS";
const char LTE_SHIELD_GPS_REQUEST_LOCATION[] = "+ULOC";
const char LTE_SHIELD_GPS_GPRMC[] = "+UGRMC";

const char LTE_SHIELD_RESPONSE_OK[] = "OK\r\n";

// CTRL+Z and ESC ASCII codes for SMS message sends
const char ASCII_CTRL_Z = 0x1A;
const char ASCII_ESC = 0x1B;
