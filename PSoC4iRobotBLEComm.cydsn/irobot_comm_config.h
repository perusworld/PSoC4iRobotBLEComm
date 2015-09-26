#if !defined(irobot_comm_config_H)
    #define irobot_comm_config_H
    
    #include <project.h>
    #include <irobot_comm.h>
    #include "blecomm_config.h"

    void IRobotBLEResponse(char* data, unsigned long len) {
        BLESend(data, len);
    }
    
    void DelayTime(unsigned long delay) {
        CyDelay(delay);
    }

    
#endif /* irobot_comm_config_H */
