/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    uint16_t count = 0;
    
    for(;;)
    {
        /* Place your application code here. */
        // Update the counter
        count++;
        
        if ( count % 50 == 0 )
            LED_IN_Write( !LED_IN_Read() );  // Toggle the LED state
            
        CyDelay(10); // 10 ms
            
    }
    
}

/* [] END OF FILE */
