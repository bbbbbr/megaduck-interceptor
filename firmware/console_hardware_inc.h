// hardware_inc.h

// Control which console to build for
#define BUILD_MEGADUCK


#ifdef BUILD_MEGADUCK
    // MegaDuck
    #define rRAMG           0x0000 // $0000-1fff
    #define rROMB0          0x0001 // $2000-2fff
    #define rROMB1          0x3000 // $3000->$3fff - If more than 256 ROM banks arpresent.
    #define rRAMB           0x4000 // $4000->$5fff - Bit 3 enables rumble (ipresent)
    #define rP1             0xFF00
    #define rSB             0xFF01
    #define rSC             0xFF02
    #define rDIV            0xFF04
    #define rTIMA           0xFF05
    #define rTMA            0xFF06
    #define rTAC            0xFF07
    #define rIF             0xFF0F
    #define rNR10           0xFF20
    #define rAUD1SWEEP      0xFF20
    #define rNR11           0xFF22
    #define rAUD1LEN        0xFF22
    #define rNR12           0xFF21
    #define rAUD1ENV        0xFF21
    #define rNR13           0xFF23
    #define rAUD1LOW        0xFF23
    #define rNR14           0xFF24
    #define rAUD1HIGH       0xFF24
    #define rNR21           0xFF25
    #define rAUD2LEN        0xFF25
    #define rNR22           0xFF27
    #define rAUD2ENV        0xFF27
    #define rNR23           0xFF28
    #define rAUD2LOW        0xFF28
    #define rNR24           0xFF29
    #define rAUD2HIGH       0xFF29
    #define rNR30           0xFF2A
    #define rAUD3ENA        0xFF2A
    #define rNR31           0xFF2B
    #define rAUD3LEN        0xFF2B
    #define rNR32           0xFF2C
    #define rAUD3LEVEL      0xFF2C
    #define rNR33           0xFF2E
    #define rAUD3LOW        0xFF2E
    #define rNR34           0xFF2D
    #define rAUD3HIGH       0xFF2D
    #define rNR41           0xFF40
    #define rAUD4LEN        0xFF40
    #define rNR42           0xFF42
    #define rAUD4ENV        0xFF42
    #define rNR43           0xFF41
    #define rAUD4POLY       0xFF41
    #define rNR44           0xFF43
    #define rAUD4GO         0xFF43
    #define rNR50           0xFF44
    #define rAUDVOL         0xFF44
    #define rNR51           0xFF46
    #define rAUDTERM        0xFF46
    #define rNR52           0xFF45
    #define rAUDENA         0xFF45
    #define rLCDC           0xFF10
    #define rSTAT           0xFF11
    #define rSCY            0xFF12
    #define rSCX            0xFF13
    #define rLY             0xFF18
    #define rLYC            0xFF19
    #define rDMA            0xFF1A
    #define rBGP            0xFF1B
    #define rOBP0           0xFF14
    #define rOBP1           0xFF15
    #define rWY             0xFF16
    #define rWX             0xFF17
    #define rKEY1           0xFF4D
    #define rSPD            0xFF4D
    #define rVBK            0xFF4F
    #define rHDMA1          0xFF51
    #define rHDMA2          0xFF52
    #define rHDMA3          0xFF53
    #define rHDMA4          0xFF54
    #define rHDMA5          0xFF55
    #define rRP             0xFF56
    #define rBCPS           0xFF68
    #define rBCPD           0xFF69
    #define rOCPS           0xFF6A
    #define rOCPD           0xFF6B
    #define rSVBK           0xFF70
    #define rSMBK           0xFF70
    #define rPCM12          0xFF76
    #define rPCM34          0xFF77
    #define rIE             0xFFFF
#else // End: MegaDuck
    // Game Boy
    #define rRAMG           0x0000 // $0000-1fff
    #define rROMB0          0x2000 // $2000-2fff
    #define rROMB1          0x3000 // $3000->$3fff - If more than 256 ROM banks arpresent.
    #define rRAMB           0x4000 // $4000->$5fff - Bit 3 enables rumble (ipresent)
    #define rP1             0xFF00
    #define rSB             0xFF01
    #define rSC             0xFF02
    #define rDIV            0xFF04
    #define rTIMA           0xFF05
    #define rTMA            0xFF06
    #define rTAC            0xFF07
    #define rIF             0xFF0F
    #define rNR10           0xFF10
    #define rAUD1SWEEP      0xFF10
    #define rNR11           0xFF11
    #define rAUD1LEN        0xFF11
    #define rNR12           0xFF12
    #define rAUD1ENV        0xFF12
    #define rNR13           0xFF13
    #define rAUD1LOW        0xFF13
    #define rNR14           0xFF14
    #define rAUD1HIGH       0xFF14
    #define rNR21           0xFF16
    #define rAUD2LEN        0xFF16
    #define rNR22           0xFF17
    #define rAUD2ENV        0xFF17
    #define rNR23           0xFF18
    #define rAUD2LOW        0xFF18
    #define rNR24           0xFF19
    #define rAUD2HIGH       0xFF19
    #define rNR30           0xFF1A
    #define rAUD3ENA        0xFF1A
    #define rNR31           0xFF1B
    #define rAUD3LEN        0xFF1B
    #define rNR32           0xFF1C
    #define rAUD3LEVEL      0xFF1C
    #define rNR33           0xFF1D
    #define rAUD3LOW        0xFF1D
    #define rNR34           0xFF1E
    #define rAUD3HIGH       0xFF1E
    #define rNR41           0xFF20
    #define rAUD4LEN        0xFF20
    #define rNR42           0xFF21
    #define rAUD4ENV        0xFF21
    #define rNR43           0xFF22
    #define rAUD4POLY       0xFF22
    #define rNR44           0xFF23
    #define rAUD4GO         0xFF23
    #define rNR50           0xFF24
    #define rAUDVOL         0xFF24
    #define rNR51           0xFF25
    #define rAUDTERM        0xFF25
    #define rNR52           0xFF26
    #define rAUDENA         0xFF26
    #define rLCDC           0xFF40
    #define rSTAT           0xFF41
    #define rSCY            0xFF42
    #define rSCX            0xFF43
    #define rLY             0xFF44
    #define rLYC            0xFF45
    #define rDMA            0xFF46
    #define rBGP            0xFF47
    #define rOBP0           0xFF48
    #define rOBP1           0xFF49
    #define rWY             0xFF4A
    #define rWX             0xFF4B
    #define rKEY1           0xFF4D
    #define rSPD            0xFF4D
    #define rVBK            0xFF4F
    #define rHDMA1          0xFF51
    #define rHDMA2          0xFF52
    #define rHDMA3          0xFF53
    #define rHDMA4          0xFF54
    #define rHDMA5          0xFF55
    #define rRP             0xFF56
    #define rBCPS           0xFF68
    #define rBCPD           0xFF69
    #define rOCPS           0xFF6A
    #define rOCPD           0xFF6B
    #define rSVBK           0xFF70
    #define rSMBK           0xFF70
    #define rPCM12          0xFF76
    #define rPCM34          0xFF77
    #define rIE             0xFFFF
#endif // Game Boy



#ifdef BUILD_MEGADUCK
    #define LCDCF_OFF       0b00000000
    #define LCDCF_ON        0b10000000
    #define LCDCF_WIN9800   0b00000000
    #define LCDCF_WIN9C00   0b00001000
    #define LCDCF_WINOFF    0b00000000
    #define LCDCF_WINON     0b00100000
    #define LCDCF_BG8800    0b00000000
    #define LCDCF_BG8000    0b00010000
    #define LCDCF_BG9800    0b00000000
    #define LCDCF_BG9C00    0b00000100
    #define LCDCF_OBJ8      0b00000000
    #define LCDCF_OBJ16     0b00000010
    #define LCDCF_OBJOFF    0b00000000
    #define LCDCF_OBJON     0b00000001
    #define LCDCF_BGOFF     0b00000000
    #define LCDCF_BGON      0b01000000
    #define LCDCF_B_ON      7
    #define LCDCF_B_WIN9C00 3
    #define LCDCF_B_WINON   5
    #define LCDCF_B_BG8000  4
    #define LCDCF_B_BG9C00  2
    #define LCDCF_B_OBJ16   1
    #define LCDCF_B_OBJON   0
    #define LCDCF_B_BGON    6
#else
    #define LCDCF_OFF       0b00000000 /**< LCD Control: Off */
    #define LCDCF_ON        0b10000000 /**< LCD Control: On */
    #define LCDCF_WIN9800   0b00000000 /**< Window Tile Map: Use 9800 Region */
    #define LCDCF_WIN9C00   0b01000000 /**< Window Tile Map: Use 9C00 Region */
    #define LCDCF_WINOFF    0b00000000 /**< Window Display: Hidden */
    #define LCDCF_WINON     0b00100000 /**< Window Display: Visible */
    #define LCDCF_BG8800    0b00000000 /**< BG & Window Tile Data: Use 8800 Region */
    #define LCDCF_BG8000    0b00010000 /**< BG & Window Tile Data: Use 8000 Region */
    #define LCDCF_BG9800    0b00000000 /**< BG Tile Map: use 9800 Region */
    #define LCDCF_BG9C00    0b00001000 /**< BG Tile Map: use 9C00 Region */
    #define LCDCF_OBJ8      0b00000000 /**< Sprites Size: 8x8 pixels */
    #define LCDCF_OBJ16     0b00000100 /**< Sprites Size: 8x16 pixels */
    #define LCDCF_OBJOFF    0b00000000 /**< Sprites Display: Hidden */
    #define LCDCF_OBJON     0b00000010 /**< Sprites Display: Visible */
    #define LCDCF_BGOFF     0b00000000 /**< Background Display: Hidden */
    #define LCDCF_BGON      0b00000001 /**< Background Display: Visible */
    #define LCDCF_B_ON      7          /**< Bit for LCD On/Off Select */
    #define LCDCF_B_WIN9C00 6          /**< Bit for Window Tile Map Region Select */
    #define LCDCF_B_WINON   5          /**< Bit for Window Display On/Off Control */
    #define LCDCF_B_BG8000  4          /**< Bit for BG & Window Tile Data Region Select */
    #define LCDCF_B_BG9C00  3          /**< Bit for BG Tile Map Region Select */
    #define LCDCF_B_OBJ16   2          /**< Bit for Sprites Size Select */
    #define LCDCF_B_OBJON   1          /**< Bit for Sprites Display Visible/Hidden Select */
    #define LCDCF_B_BGON    0          /**< Bit for Background Display Visible/Hidden Select */
#endif