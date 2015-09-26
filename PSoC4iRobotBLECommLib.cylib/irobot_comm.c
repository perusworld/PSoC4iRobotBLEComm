#include "irobot_comm.h"
#include <string.h>

void IRobotBLEOnMessage(char* data, unsigned long len) {
    if (0 == strcmp("startcleaning", data)) {
        IRobotStartCleaning();
        IRobotBLEResponse("done", strlen("done"));
    } else if (0 == strcmp("stopcleaninganddock", data)) {
        IRobotStopCleaningAndDock();
        IRobotBLEResponse("done", strlen("done"));
    }

}
