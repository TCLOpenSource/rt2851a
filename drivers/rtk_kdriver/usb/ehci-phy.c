#include <rbus/usb_top_reg.h>
#include "ehci-platform.h"

const U2_PHY_REG u2_phy_reg_table[] = {
    {0, 0xE0},
    {0, 0xE1},
    {0, 0xE2},
    {0, 0xE3},
    {0, 0xE4},
    {0, 0xE5},
    {0, 0xE6},
    {0, 0xE7},
    {1, 0xE0},
    {1, 0xE1},
    {1, 0xE2},
    {1, 0xE3},
    {1, 0xE4},
    {1, 0xE5},
    {1, 0xE6},
    {1, 0xE7},
    {0, 0xF0},
    {0, 0xF1},
    {0, 0xF2},
    {0, 0xF3},
    {0, 0xF4},
    {0, 0xF5},
    {0, 0xF6},
    {0, 0xF7},
    {},
};


/////////////////////////////////////////////////////////////////
// U2 Phy Setting
/////////////////////////////////////////////////////////////////
/* 91107 Mac7p_write_usb2_phy_param_V01.tbl */
U2_PHY_REGISTER ehci_top_u2_phy_setting[] = {
    /* 0xF4: select page.
     * 9b=page 0,
     * bb=page 1,
     * db=page 2  */

    /////// 0xF4_change Page1 ///////
    {1, 0xf4, 0xbb},    //9b=page 0, bb=page 1,db=page 2
    {2, 0xf4, 0xbb},    //9b=page 0, bb=page 1,db=page 2
    {3, 0xf4, 0xbb},    //9b=page 0, bb=page 1,db=page 2

    /////// 0xE5/Page1 ///////
    {1, 0xe5, 0x0f},
    {2, 0xe5, 0x0f},    // Set REG_N_SSC bit[7:0]
    {3, 0xe5, 0x0f},

    /////// 0xE6/Page1 ///////
    {1, 0xe6, 0x58},
    {2, 0xe6, 0x58},    // Set REG_F_SSC[12:8] bit[4:0]
    {3, 0xe6, 0x58},

    /////// 0xE7/Page1 ///////
    {1, 0xe7, 0xe3},
    {2, 0xe7, 0xe3},
    {3, 0xe7, 0xe3},

    /////// 0xF4_change Page0 ///////
    {1, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2
    {2, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2
    {3, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2

    /////// 0xE0 manual Z0 ///////
    {1, 0xe0, 0x1b},
    {2, 0xe0, 0x1b},    //manual mode;Only port1 can work;[5:2],manual=7 (z0);
    {3, 0xe0, 0x1b},

    /////// E1 ///////
    {1, 0xe1, 0x18},
    {2, 0xe1, 0x18},
    {3, 0xe1, 0x18},

    ///////E2 EOP width& Bit //need tuning used RDC scan programming ///////
    {1, 0xe2, 0x44},
    {2, 0xe2, 0x44},
    {3, 0xe2, 0x44},

    /////// E3 ///////
    {1, 0xe3, 0xcd},
    {2, 0xe3, 0xcd},
    {3, 0xe3, 0xcd},

    /////// E5 ///////
    {1, 0xe5, 0x63},    //double sensitivity 1.5
    {2, 0xe5, 0x63},    //double sensitivity 1.5
    {3, 0xe5, 0x63},    //double sensitivity 1.5

    /////// change to Page 1 ///////
    {1, 0xf4, 0xbb},    //9b=page 0, bb=page 1,db=page 2
    {2, 0xf4, 0xbb},    //9b=page 0, bb=page 1,db=page 2
    {3, 0xf4, 0xbb},    //9b=page 0, bb=page 1,db=page 2

    /////// 0xE1/page 1 ///////
    {1, 0xe1, 0x77},    //REG_DEV_CAL / REG_HST_CAL,bit[1:0]=0x3
    {2, 0xe1, 0x77},    //REG_DEV_CAL / REG_HST_CAL,bit[1:0]=0x3
    {3, 0xe1, 0x77},    //REG_DEV_CAL / REG_HST_CAL,bit[1:0]=0x3

    /////// change to Page 2 ///////
    {1, 0xf4, 0xdb},    //9b=page 0, bb=page 1,db=page 2
    {2, 0xf4, 0xdb},    //9b=page 0, bb=page 1,db=page 2
    {3, 0xf4, 0xdb},    //9b=page 0, bb=page 1,db=page 2

    /////// 0xE7/page 2 ///////
    {1, 0xe7, 0x44},    // REG_SENH_OBJ bit[7:4]=0x4, REG_SEND_OBJ bit[3:0]=0x4
    {2, 0xe7, 0x44},    // REG_SENH_OBJ bit[7:4]=0x4, REG_SEND_OBJ bit[3:0]=0x4
    {3, 0xe7, 0x44},    // REG_SENH_OBJ bit[7:4]=0x4, REG_SEND_OBJ bit[3:0]=0x4

    /////// change to Page 0 ///////
    {1, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2
    {2, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2
    {3, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2

    /////// 0XE4 Output Swing and HST_NSQ ///////
    {1, 0xe4, 0x7a},    // disconnect first stage calbration bit[7:4]=7 , swing bit[3:0]=a
    {2, 0xe4, 0x7a},    // disconnect first stage calbration bit[7:4]=7 , swing bit[3:0]=a
    {3, 0xe4, 0x7a},    // disconnect first stage calbration bit[7:4]=7 , swing bit[3:0]=a

    /////// E7 Device NSQ ///////
    {1, 0xe7, 0x71},    //Squelch  first stage calbration bit[7:4]=7
    {2, 0xe7, 0x71},    //Squelch  first stage calbration bit[7:4]=7
    {3, 0xe7, 0x71},    //Squelch  first stage calbration bit[7:4]=7

    /////// Adjust RX 0xE0/Page1 ///////
    {1, 0xf4, 0xbb},
    {1, 0xe0, 0x23},    //To calibrate Bit2 to zero first
    {1, 0xe0, 0x27},    //auto-calibration toggle,REG_CAL 0->1

    {2, 0xf4, 0xbb},
    {2, 0xe0, 0x23},    //To calibrate Bit2 to zero first, 15k=11
    {2, 0xe0, 0x27},    //auto-calibration toggle,REG_CAL 0->1

    {3, 0xf4, 0xbb},
    {3, 0xe0, 0x23},    //To calibrate Bit2 to zero first, 15k=11
    {3, 0xe0, 0x27},    //auto-calibration toggle,REG_CAL 0->1

    /////// switch to Page0 ///////
    {1, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2(含DPLL);
    {2, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2(含DPLL);
    {3, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2(含DPLL);

    ///////  E4 Output Swing and disconnect ///////
    {1, 0xe4, 0x8a},    // disconnect level for offset  bit[7:4]=8 ; swing bit[3:0]=a
    {2, 0xe4, 0x8a},    // disconnect level for offset  bit[7:4]=8 ; swing bit[3:0]=a
    {3, 0xe4, 0x8a},    // disconnect level for offset  bit[7:4]=8 ; swing bit[3:0]=a

    /////// E7 ////////
    {1, 0xe7, 0x61},    //Squelch level for offset mode bit[7:4]= 6
    {2, 0xe7, 0x61},    //Squelch level for offset mode bit[7:4]= 6
    {3, 0xe7, 0x61},    //Squelch level for offset mode bit[7:4]= 6

    /////// E6 ////////
    {1, 0xe6, 0x01}, //bit7=0 for enable LPF in bandgap ;RX booster [1:0]=01 =3.3dB
    {2, 0xe6, 0x01}, //bit7=0 for enable LPF in bandgap ;RX booster [1:0]=01 =3.3dB
    {3, 0xe6, 0x01}, //bit7=0 for enable LPF in bandgap ;RX booster [1:0]=01 =3.3dB

    /////// F0 ///////
    {1, 0xf0, 0xfc},
    {2, 0xf0, 0xfc},
    {3, 0xf0, 0xfc},

    /////// F1 ///////
    {1, 0xf1, 0x8c},
    {2, 0xf1, 0x8c},
    {3, 0xf1, 0x8c},

    /////// F2 ///////
    {1, 0xf2, 0x00},
    {2, 0xf2, 0x00},
    {3, 0xf2, 0x00},

    /////// F3 ///////
    {1, 0xf3, 0x11},
    {2, 0xf3, 0x11},
    {2, 0xf3, 0x11},

    /////// F5 ///////
    {1, 0xf5, 0x15},
    {2, 0xf5, 0x15},
    {3, 0xf5, 0x15},

    /////// F6 ///////
    {1, 0xf6, 0x00},
    {2, 0xf6, 0x00},
    {3, 0xf6, 0x00},

    /////// F7 ///////
    {1, 0xf7, 0x8a},
    {2, 0xf7, 0x8a},
    {3, 0xf7, 0x8a},

    /////// change to Page1 ///////
    {1, 0xf4, 0xbb},
    {2, 0xf4, 0xbb},
    {3, 0xf4, 0xbb},

    /////// 0xE2/Page1 ///////
    {1, 0xe2, 0x00},
    {2, 0xe2, 0x00},
    {3, 0xe2, 0x00},

    /////// 0xE3/Page1 ///////
    {1, 0xe3, 0x03},
    {2, 0xe3, 0x03},
    {3, 0xe3, 0x03},

    /////// 0xE4/Page1 ///////
    {1, 0xe4, 0x48},
    {2, 0xe4, 0x48},
    {3, 0xe4, 0x48},

    /////// Switch to Page2 ///////
    {1, 0xf4, 0xdb},    //9b=page 0, bb=page 1,db=page 2(含DPLL);
    {2, 0xf4, 0xdb},    //9b=page 0, bb=page 1,db=page 2(含DPLL);
    {3, 0xf4, 0xdb},    //9b=page 0, bb=page 1,db=page 2(含DPLL);

    /////// 0xE3/Page2 ///////
    {1, 0xe3, 0x01},
    {2, 0xe3, 0x01},
    {3, 0xe3, 0x01},

    /////// Switch to Page0 ///////
    {1, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2(含DPLL);
    {2, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2(含DPLL);
    {3, 0xf4, 0x9b},    //9b=page 0, bb=page 1,db=page 2(含DPLL);
};



/* TODO: Correct phy config if SoC change */
U2_PHY_CONFIG ehci_u2_phy_config[] = {
    {
        .id          = ID_EHCI_TOP,
        .p_reg_table = ehci_top_u2_phy_setting,
        .n_reg       = ARRAY_SIZE(ehci_top_u2_phy_setting),
    },
};


/* TODO: Correct wrapper vstatus regs if SoC change */
struct vstatus_reg vstatus_regs[] = {
    {
        .id = ID_EHCI_TOP,
        .regs = {
            USB_TOP_VSTATUS_reg,
            USB_TOP_VSTATUS_2port_reg,
            USB_TOP_VSTATUS_3port_reg,
        }
    },
};


/* TODO: Add/remove completion if SoC change */
DECLARE_COMPLETION(ehci_top_phy_mac_completion);
struct ehci_completion ehci_completions[] = {
    {
        .id = ID_EHCI_TOP,
        .phy_mac_completion = &ehci_top_phy_mac_completion,
    },
};


U2_PHY_CONFIG *id_get_ehci_phy_config(int id)
{
    int i = 0;

    for (i = 0; i < ARRAY_SIZE(ehci_u2_phy_config); i++)
        if (ehci_u2_phy_config[i].id == id)
            return &ehci_u2_phy_config[i];

    return NULL;
}


unsigned long *id_get_ehci_vstatus_regs(int id)
{
    int i = 0;

    for (i = 0; i < ARRAY_SIZE(vstatus_regs); i++)
        if (vstatus_regs[i].id == id)
            return vstatus_regs[i].regs;

    return NULL;
}


struct completion *id_get_ehci_completion(int id)
{
    int i = 0;

    for (i = 0; i < ARRAY_SIZE(ehci_completions); i++)
        if (ehci_completions[i].id == id)
            return ehci_completions[i].phy_mac_completion;

    return NULL;
}

