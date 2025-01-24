#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    // TODO: update board pin names to match nets on rapid-0 board designs

    { MP_ROM_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_PA03) },
    { MP_ROM_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_PC00) },
    { MP_ROM_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_PC03) },
    { MP_ROM_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_PB01) },
    { MP_ROM_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_PC02) },
    { MP_ROM_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_PF10) },
    { MP_ROM_QSTR(MP_QSTR_A6), MP_ROM_PTR(&pin_PF04) },
    { MP_ROM_QSTR(MP_QSTR_A7), MP_ROM_PTR(&pin_PF05) },
    { MP_ROM_QSTR(MP_QSTR_A8), MP_ROM_PTR(&pin_PF06) },
    { MP_ROM_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_PB07) },
    { MP_ROM_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_PB06) },
    { MP_ROM_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_PG14) },
    { MP_ROM_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_PE13) },
    { MP_ROM_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_PE14) },
    { MP_ROM_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_PE11) },
    { MP_ROM_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_PE09) },
    { MP_ROM_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_PG12) },
    { MP_ROM_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_PF03) },
    { MP_ROM_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_PD15) },
    { MP_ROM_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_PD14) },
    { MP_ROM_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_PB05) },
    { MP_ROM_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_D15), MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_D16), MP_ROM_PTR(&pin_PC06) },
    { MP_ROM_QSTR(MP_QSTR_D17), MP_ROM_PTR(&pin_PB15) },
    { MP_ROM_QSTR(MP_QSTR_D18), MP_ROM_PTR(&pin_PB13) },
    { MP_ROM_QSTR(MP_QSTR_D19), MP_ROM_PTR(&pin_PB12) },
    { MP_ROM_QSTR(MP_QSTR_D20), MP_ROM_PTR(&pin_PA15) },
    { MP_ROM_QSTR(MP_QSTR_D21), MP_ROM_PTR(&pin_PC07) },
    { MP_ROM_QSTR(MP_QSTR_D22), MP_ROM_PTR(&pin_PB05) },
    { MP_ROM_QSTR(MP_QSTR_D23), MP_ROM_PTR(&pin_PB03) },
    { MP_ROM_QSTR(MP_QSTR_D24), MP_ROM_PTR(&pin_PA04) },
    { MP_ROM_QSTR(MP_QSTR_D25), MP_ROM_PTR(&pin_PB04) },
    { MP_ROM_QSTR(MP_QSTR_D26), MP_ROM_PTR(&pin_PG06) },
    { MP_ROM_QSTR(MP_QSTR_D27), MP_ROM_PTR(&pin_PB02) },
    { MP_ROM_QSTR(MP_QSTR_D28), MP_ROM_PTR(&pin_PD13) },
    { MP_ROM_QSTR(MP_QSTR_D29), MP_ROM_PTR(&pin_PD12) },
    { MP_ROM_QSTR(MP_QSTR_D30), MP_ROM_PTR(&pin_PD11) },
    { MP_ROM_QSTR(MP_QSTR_D31), MP_ROM_PTR(&pin_PE02) },
    { MP_ROM_QSTR(MP_QSTR_D32), MP_ROM_PTR(&pin_PA00) },
    { MP_ROM_QSTR(MP_QSTR_D33), MP_ROM_PTR(&pin_PB00) },
    { MP_ROM_QSTR(MP_QSTR_D34), MP_ROM_PTR(&pin_PE00) },
    { MP_ROM_QSTR(MP_QSTR_D35), MP_ROM_PTR(&pin_PB11) },
    { MP_ROM_QSTR(MP_QSTR_D36), MP_ROM_PTR(&pin_PB10) },
    { MP_ROM_QSTR(MP_QSTR_D37), MP_ROM_PTR(&pin_PE15) },
    { MP_ROM_QSTR(MP_QSTR_D38), MP_ROM_PTR(&pin_PE06) },
    { MP_ROM_QSTR(MP_QSTR_D39), MP_ROM_PTR(&pin_PE12) },
    { MP_ROM_QSTR(MP_QSTR_D40), MP_ROM_PTR(&pin_PE10) },
    { MP_ROM_QSTR(MP_QSTR_D41), MP_ROM_PTR(&pin_PE07) },
    { MP_ROM_QSTR(MP_QSTR_D42), MP_ROM_PTR(&pin_PE08) },
    { MP_ROM_QSTR(MP_QSTR_D43), MP_ROM_PTR(&pin_PC08) },
    { MP_ROM_QSTR(MP_QSTR_D44), MP_ROM_PTR(&pin_PC09) },
    { MP_ROM_QSTR(MP_QSTR_D45), MP_ROM_PTR(&pin_PC10) },
    { MP_ROM_QSTR(MP_QSTR_D46), MP_ROM_PTR(&pin_PC11) },
    { MP_ROM_QSTR(MP_QSTR_D47), MP_ROM_PTR(&pin_PC12) },
    { MP_ROM_QSTR(MP_QSTR_D48), MP_ROM_PTR(&pin_PD02) },
    { MP_ROM_QSTR(MP_QSTR_D49), MP_ROM_PTR(&pin_PG02) },
    { MP_ROM_QSTR(MP_QSTR_D50), MP_ROM_PTR(&pin_PG03) },
    { MP_ROM_QSTR(MP_QSTR_D51), MP_ROM_PTR(&pin_PD07) },
    { MP_ROM_QSTR(MP_QSTR_D52), MP_ROM_PTR(&pin_PD06) },
    { MP_ROM_QSTR(MP_QSTR_D53), MP_ROM_PTR(&pin_PD05) },
    { MP_ROM_QSTR(MP_QSTR_D54), MP_ROM_PTR(&pin_PD04) },
    { MP_ROM_QSTR(MP_QSTR_D55), MP_ROM_PTR(&pin_PD03) },
    { MP_ROM_QSTR(MP_QSTR_D56), MP_ROM_PTR(&pin_PE02) },
    { MP_ROM_QSTR(MP_QSTR_D57), MP_ROM_PTR(&pin_PE04) },
    { MP_ROM_QSTR(MP_QSTR_D58), MP_ROM_PTR(&pin_PE05) },
    { MP_ROM_QSTR(MP_QSTR_D59), MP_ROM_PTR(&pin_PE06) },
    { MP_ROM_QSTR(MP_QSTR_D60), MP_ROM_PTR(&pin_PE03) },
    { MP_ROM_QSTR(MP_QSTR_D61), MP_ROM_PTR(&pin_PF08) },
    { MP_ROM_QSTR(MP_QSTR_D62), MP_ROM_PTR(&pin_PF07) },
    { MP_ROM_QSTR(MP_QSTR_D63), MP_ROM_PTR(&pin_PF09) },
    { MP_ROM_QSTR(MP_QSTR_D64), MP_ROM_PTR(&pin_PG01) },
    { MP_ROM_QSTR(MP_QSTR_D65), MP_ROM_PTR(&pin_PG00) },
    { MP_ROM_QSTR(MP_QSTR_D66), MP_ROM_PTR(&pin_PD01) },
    { MP_ROM_QSTR(MP_QSTR_D67), MP_ROM_PTR(&pin_PD00) },
    { MP_ROM_QSTR(MP_QSTR_D68), MP_ROM_PTR(&pin_PF00) },
    { MP_ROM_QSTR(MP_QSTR_D69), MP_ROM_PTR(&pin_PF01) },
    { MP_ROM_QSTR(MP_QSTR_D70), MP_ROM_PTR(&pin_PF02) },
    { MP_ROM_QSTR(MP_QSTR_D71), MP_ROM_PTR(&pin_PE00) },
    { MP_ROM_QSTR(MP_QSTR_D72), MP_ROM_PTR(&pin_PB02) },
    { MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PB09) },
    { MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PB08) },
    { MP_ROM_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_PB05) },
    { MP_ROM_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_PA06) },
    { MP_ROM_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_PA05) },
    { MP_ROM_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_PB07) },
    { MP_ROM_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_PB06) },
    { MP_ROM_QSTR(MP_QSTR_LED1), MP_ROM_PTR(&pin_PB00) },
    { MP_ROM_QSTR(MP_QSTR_LED2), MP_ROM_PTR(&pin_PE01) },
    { MP_ROM_QSTR(MP_QSTR_LED3), MP_ROM_PTR(&pin_PB14) },
    { MP_ROM_QSTR(MP_QSTR_SW), MP_ROM_PTR(&pin_PC13) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
