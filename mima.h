unsigned char code mima[8] [128]= { /* 0X22,0X01,0X80,0X00,0X40,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0XFC,0XFC,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XF8,0XFC,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0XFC,0XFC,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X20,0XFC,0XFC,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XF8,0XFC,
0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0XF8,0XFC,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XF0,0XF8,0XF0,0XE0,0X80,0X00,0X00,0X07,0XFF,0XFF,0X00,0X00,
0X00,0XC0,0XF0,0XF8,0XF8,0XC0,0X00,0X00,0X00,0XF0,0XF8,0XF0,0XC0,0X00,0X00,0X00,
0X1F,0XFF,0X7F,0X00,0X00,0X00,0XC0,0XF0,0XF8,0XF0,0X00,0X00,0X00,0XE0,0XF8,0XF0,
0XE0,0XC0,0X00,0X00,0X00,0XFF,0XFF,0X0F,0X00,0X00,0X80,0XE0,0XF0,0XF8,0XF0,0X00,
0X00,0X00,0XE0,0XF8,0XF0,0XE0,0X80,0X00,0X00,0X00,0XFF,0XFF,0X01,0X00,0X00,0X80,
0XE0,0XF0,0XF8,0XE0,0X00,0X00,0X00,0XF0,0XF8,0XF0,0XE0,0X80,0X00,0X00,0X03,0XFF,
0XFF,0X00,0X00,0X00,0XC0,0XF0,0XF8,0XF8,0XE0,0X00,0X00,0X00,0XF0,0XF8,0XF0,0XC0,
0X00,0X00,0X00,0X1F,0XFF,0X7F,0X00,0X00,0X00,0XC0,0XF0,0XF8,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X01,0X03,0X07,0X0F,0X1F,0X3E,0X78,0X60,0XFF,0XC3,0X70,0X3C,
0X1F,0X1F,0X0F,0X07,0X03,0X00,0X00,0X00,0X00,0X03,0X07,0X0F,0X0F,0X1F,0X3C,0X78,
0XE0,0XFF,0XE0,0X78,0X3C,0X1F,0X0F,0X0F,0X07,0X03,0X00,0X00,0X00,0X00,0X03,0X07,
0X0F,0X1F,0X1F,0X3C,0X70,0XC1,0XFF,0X60,0X78,0X3E,0X1F,0X0F,0X07,0X03,0X01,0X00,
0X00,0X00,0X01,0X03,0X07,0X0F,0X1F,0X3E,0X38,0X60,0XDF,0XCF,0X60,0X38,0X3E,0X1F,
0X0F,0X07,0X03,0X01,0X00,0X00,0X00,0X01,0X03,0X07,0X0F,0X1F,0X3E,0X78,0X60,0XFF,
0XC3,0X70,0X3C,0X1F,0X1F,0X0F,0X07,0X03,0X00,0X00,0X00,0X00,0X03,0X07,0X0F,0X0F,
0X1F,0X3C,0X78,0XE0,0XFF,0XC0,0X78,0X3C,0X1F,0X0F,0X0F,0X07,0X03,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X80,0XE0,0XF0,0XF0,0XF8,0X7C,0X1E,0X07,0XFF,0X03,0X0E,0X3C,
0XFC,0XF8,0XF0,0XE0,0XC0,0X00,0X00,0X00,0X00,0XC0,0XE0,0XF0,0XF8,0XF8,0X3C,0X0E,
0X03,0XFF,0X03,0X0E,0X3C,0XF8,0XF0,0XF0,0XE0,0XC0,0X00,0X00,0X00,0X00,0XC0,0XE0,
0XF0,0XF8,0XFC,0X3C,0X0E,0XC3,0XFF,0X07,0X1E,0X7C,0XF8,0XF0,0XE0,0XE0,0X80,0X00,
0X00,0X00,0X80,0XC0,0XE0,0XF0,0XF8,0X7C,0X1E,0X06,0XFB,0XF3,0X06,0X1E,0X7C,0XF8,
0XF0,0XE0,0XC0,0X80,0X00,0X00,0X00,0X80,0XE0,0XF0,0XF0,0XF8,0X7C,0X1E,0X07,0XFF,
0XC3,0X0E,0X3C,0XFC,0XF8,0XF0,0XE0,0XC0,0X00,0X00,0X00,0X00,0XC0,0XE0,0XF0,0XF8,
0XF8,0X3C,0X0E,0X03,0XFF,0X03,0X0E,0X3C,0XF8,0XF8,0XF0,0XE0,0XC0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0F,0X0F,0X0F,0X03,0X00,0X00,0X00,0XF8,0XFF,0XFF,0X00,0X00,
0X00,0X03,0X07,0X0F,0X0F,0X07,0X00,0X00,0X00,0X0F,0X0F,0X07,0X03,0X00,0X00,0X00,
0XFF,0XFF,0XF8,0X00,0X00,0X00,0X03,0X0F,0X0F,0X0F,0X00,0X00,0X00,0X03,0X0F,0X0F,
0X07,0X01,0X00,0X00,0X00,0XFF,0XFF,0XC0,0X00,0X00,0X01,0X03,0X0F,0X0F,0X0F,0X00,
0X00,0X00,0X07,0X0F,0X0F,0X07,0X01,0X00,0X00,0XC0,0XFF,0XFF,0X00,0X00,0X00,0X01,
0X07,0X0F,0X0F,0X0F,0X00,0X00,0X00,0X0F,0X0F,0X0F,0X03,0X00,0X00,0X00,0XF0,0XFF,
0XFF,0X00,0X00,0X00,0X03,0X07,0X0F,0X0F,0X07,0X00,0X00,0X00,0X0F,0X0F,0X07,0X03,
0X00,0X00,0X00,0XFE,0XFF,0XFC,0X00,0X00,0X00,0X03,0X07,0X0F,0X0F,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0X3F,0X3F,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X3F,0X3F,0X1F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X3F,0X3F,0X1F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0X3F,0X3F,0X06,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0X3F,
0X3F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0X3F,0X1F,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};