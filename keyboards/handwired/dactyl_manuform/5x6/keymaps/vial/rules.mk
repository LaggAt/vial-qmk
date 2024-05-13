# enable change of keyboard layout using https://vial.rocks/ or download application from https://get.vial.today/
VIA_ENABLE = yes
VIAL_ENABLE = yes

#connect both sides
#SERIAL_DRIVER = usart
SERIAL_DRIVER = vendor

#CONVERT_TO = promicro_rp2040
#CONVERT_TO = rp2040_ce

# shrink firmware
LTO_ENABLE = yes
#KEY_OVERRIDE_ENABLE = no

# for the rotary encoder, support a key map
ENCODER_MAP_ENABLE = yes

# vial RGB Lightning enable
VIALRGB_ENABLE = yes
