#include "irobot_comm.h"
#include <string.h>

void IRobotBLEOnMessage(char* data, unsigned long len) {
    int startLen = strlen("startcleaning");
    int stopLen = strlen("stopcleaninganddock");
    int startCmp = strncmp("startcleaning", data, startLen);
    int stopCmp = strncmp("stopcleaninganddock", data, stopLen);
    if (0 == startCmp) {
        IRobotStartCleaning();
        IRobotBLEResponse("startedcleaning", strlen("startedcleaning"));
    } else if (0 == stopCmp) {
        IRobotStopCleaningAndDock();
        IRobotBLEResponse("stoppedcleaninganddocked", strlen("stoppedcleaninganddocked"));
    } else {
        IRobotBLEResponse("unknown", strlen("unknown"));
        IRobotBLEResponse(data, len);
    }

}
