#include <project.h>
#include "irobot_config.h"
#include "irobot_comm_config.h"

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    IROBOT_Init();
    CyBle_Start(BLEEventHandler);    
    BLEInit(IRobotBLEOnMessage);

    for(;;)
    {
    	CyBle_ProcessEvents();
        CheckNotifications();
    }
}

/* [] END OF FILE */
