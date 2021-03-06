////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <tinyhal.h>
#include <DeviceCode\AT91_EMAC\AT91_EMAC_adapter.h>

#define AT91_EMAC_PHY_POWERDOWN_PIO	AT91_GPIO_Driver::PB18


#if defined(ADS_LINKER_BUG__NOT_ALL_UNUSED_VARIABLES_ARE_REMOVED)
#pragma arm section rwdata = "g_AT91_EMAC_Config"
#endif

AT91_EMAC_DRIVER_CONFIG g_AT91_EMAC_Config =
{
    AT91_EMAC_PHY_POWERDOWN_PIO,
};

#if defined(ADS_LINKER_BUG__NOT_ALL_UNUSED_VARIABLES_ARE_REMOVED)
#pragma arm section rwdata
#endif

