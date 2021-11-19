#include <stdint.h>
#include <stdbool.h>
#include "system.h"
#include "lcd.h"

int main(void)
{
	System_Init();
	LCD_Init();
	LCD_Set_Cursor(0,3);
	LCD_Write_String("EMBEDDED");
	LCD_Set_Cursor(1,3);
	LCD_Write_String("SYSTEMS");

	while(1)
	{
		
	}
	
}
