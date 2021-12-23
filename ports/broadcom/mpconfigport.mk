# Define an equivalent for MICROPY_LONGINT_IMPL, to pass to $(MPY-TOOL) in py/mkrules.mk
# $(MPY-TOOL) needs to know what kind of longint to use (if any) to freeze long integers.
# This should correspond to the MICROPY_LONGINT_IMPL definition in mpconfigport.h.

ifeq ($(LONGINT_IMPL),NONE)
MPY_TOOL_LONGINT_IMPL = -mlongint-impl=none
endif

ifeq ($(LONGINT_IMPL),MPZ)
MPY_TOOL_LONGINT_IMPL = -mlongint-impl=mpz
endif

ifeq ($(LONGINT_IMPL),LONGLONG)
MPY_TOOL_LONGINT_IMPL = -mlongint-impl=longlong
endif

# All broadcom ports have longints.
LONGINT_IMPL = MPZ

# Typically the first module to create
CIRCUITPY_MICROCONTROLLER = 1
# Typically the second module to create
CIRCUITPY_DIGITALIO = 1
# Other modules:
CIRCUITPY_ANALOGIO = 0
CIRCUITPY_BUSIO = 1
CIRCUITPY_ONEWIREIO = 0
CIRCUITPY_PWMIO = 0
CIRCUITPY_COUNTIO = 0
CIRCUITPY_NEOPIXEL_WRITE = 1
CIRCUITPY_PULSEIO = 0
CIRCUITPY_OS = 1
CIRCUITPY_NVM = 0
CIRCUITPY_AUDIOBUSIO = 0
CIRCUITPY_AUDIOIO = 0
CIRCUITPY_ROTARYIO = 0
CIRCUITPY_RTC = 0
CIRCUITPY_SDCARDIO = 0
CIRCUITPY_SDIOIO = 1
CIRCUITPY_FRAMEBUFFERIO = 1
CIRCUITPY_FREQUENCYIO = 0
CIRCUITPY_I2CPERIPHERAL = 0
# Requires SPI, PulseIO (stub ok):
CIRCUITPY_DISPLAYIO = 1

# These modules are implemented in shared-module/ - they can be included in
# any port once their prerequisites in common-hal are complete.
# Requires DigitalIO:
CIRCUITPY_BITBANGIO = 1
# Requires DigitalIO
CIRCUITPY_GAMEPAD = 0
# Requires neopixel_write or SPI (dotstar)
CIRCUITPY_PIXELBUF = 1
# Requires OS
CIRCUITPY_RANDOM = 1
# Requires OS, filesystem
CIRCUITPY_STORAGE = 1
# Requires Microcontroller
CIRCUITPY_TOUCHIO = 0
# Requires USB
CIRCUITPY_USB = 1
CIRCUITPY_USB_MSC = 1
CIRCUITPY_USB_HID = 1
CIRCUITPY_USB_MIDI = 1
USB_NUM_ENDPOINT_PAIRS = 8
# Does nothing without I2C
CIRCUITPY_REQUIRE_I2C_PULLUPS = 0
# No requirements, but takes extra flash
CIRCUITPY_ULAB = 0

CIRCUITPY_VIDEOCORE = 1

CIRCUITPY_ERRNO = 0

CIRCUITPY_FULL_BUILD = 0

INTERNAL_FLASH_FILESYSTEM = 1
