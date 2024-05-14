#pragma once

#include_next <mcuconf.h>

// for analog joystick
#undef RP_ADC_USE_ADC0
#define RP_ADC_USE_ADC0 TRUE
#undef RP_ADC_USE_ADC1
#define RP_ADC_USE_ADC1 TRUE
