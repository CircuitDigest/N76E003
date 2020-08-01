void delay(unsigned int j);
void lcd_init_write(unsigned char a);
void lcd_com(unsigned char a);
void lcd_data(unsigned char a);
void lcd_init(void);
void lcd_puts(char *str);
void hex2lcd(unsigned char hex);
void LCD_ScrollMessage(char *msg_ptr);
void lcd_print_number(unsigned int i);