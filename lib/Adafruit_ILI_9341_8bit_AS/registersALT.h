#define ILI9341_NO_OP              0X00 //Command Added By A.Tedds
#define ILI9341_SOFTRESET          0x01 //Command
#define ILI9341_READDISPLAYID      0x04 //Command Default 00,00,00
#define ILI9341_READDISP_SIGMODE   0x0E //Added By A.Tedds
#define ILI9341_READDISP_SELFTEST  0x0F //Added By A.Tedds
#define ILI9341_SLEEPIN            0x10
#define ILI9341_SLEEPOUT           0x11
#define ILI9341_PARTIAL_MODE_ON    0x12 //Added By A.Tedds
#define ILI9341_NORMALDISP         0x13
#define ILI9341_INVERTOFF          0x20
#define ILI9341_INVERTON           0x21
#define ILI9341_GAMMASET           0x26
#define ILI9341_DISPLAYOFF         0x28
#define ILI9341_DISPLAYON          0x29
#define ILI9341_COLADDRSET         0x2A
#define ILI9341_PAGEADDRSET        0x2B
#define ILI9341_MEMORYWRITE        0x2C
#define ILI9341_MEMORYREAD         0x2E //Added By A.Tedds
#define ILI9341_PARTIAL_AREA       0X30 //Added By A.Tedds
#define ILI9341_VERTICAL_SCROLLING 0X33 //Added By A.Tedds
#define ILI9341_TEARING_FX_LINEOFF 0X34 //Added By A.Tedds
#define ILI9341_TEARING_FX_LINEON  0X35 //Added By A.Tedds
#define ILI9341_MEMCONTROL         0x36
#define ILI9341_MADCTL             0x36
#define ILI9341_VERT_SCROLL_ADD    0X37 //Added By A.Tedds
#define ILI9341_IDLE_OFF           0X38 //Added By A.Tedds
#define ILI9341_IDLE_ON            0X39 //Added By A.Tedds
#define ILI9341_PIXELFORMAT        0x3A
#define ILI9341_MEM_WRITE_CONTINUE 0X3C //Added By A.Tedds
#define ILI9341_MEM_READ_CONTINUE  0X3E //Added By A.Tedds
#define ILI9341_SET_TEAR_SCANLINE  0X44 //Added By A.Tedds
#define ILI9341_GET_SCANLINE       0X45 //Added By A.Tedds
#define ILI9341_WR_MAN_BRIGHTNESS  0X51 //Added By A.Tedds
#define ILI9341_RD_DISP_BRIGHTNESS 0X52 //Added By A.Tedds
#define ILI9341_WRITE_BL_CONTROL   0X53 //Added By A.Tedds
#define ILI9341_WRITE_MIE_MODE     0X55 //Added By A.Tedds
#define ILI9341_READ_MIE_MODE      0X56 //Added By A.Tedds
#define ILI9341_WR_MIN_BRIGHTNESS  0X5E //Added By A.Tedds
#define ILI9341_RD_MIN_BRIGHTNESS  0X5F //Added By A.Tedds
#define ILI9341_READ_DDB_START     0XA1 //Added By A.Tedds
#define ILI9341_READ_DDB_CONTINUE  0XA8 //Added By A.Tedds
#define ILI9341_FRAMECONTROL       0xB1
#define ILI9341_DISPLAYFUNC        0xB6
#define ILI9341_ENTRYMODE          0xB7
#define ILI9341_POWERCONTROL1      0xC0
#define ILI9341_POWERCONTROL2      0xC1
#define ILI9341_VCOMCONTROL1       0xC5
#define ILI9341_VCOMCONTROL2       0xC7
#define ILI9341_READ_ID1           0XDA //Added By A.Tedds
#define ILI9341_READ_ID2           0XDB //Added By A.Tedds
#define ILI9341_READ_ID3           0XDC //Added By A.Tedds

#define ILI9341_MADCTL_MY          0x80
#define ILI9341_MADCTL_MX          0x40
#define ILI9341_MADCTL_MV          0x20
#define ILI9341_MADCTL_ML          0x10
#define ILI9341_MADCTL_BGR         0x08
#define ILI9341_MADCTL_MH          0x04
#define ILI9341_MADCTL_RGB         0x00
