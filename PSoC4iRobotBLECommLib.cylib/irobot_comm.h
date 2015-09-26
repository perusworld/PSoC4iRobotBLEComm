#if !defined(irobot_comm_H)
    #define irobot_comm_H
    
    #include "irobot_comm_options.h"
    #include <irobot.h>
    
    void IRobotBLEOnMessage(char* data, unsigned long len);
    void IRobotBLEResponse(char* data, unsigned long len);
    
#endif /* irobot_comm_H */
