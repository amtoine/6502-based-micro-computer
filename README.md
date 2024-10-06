## Table of contents
- [_Memory map_](#memory-map-toc)
    - [_Overall view_](#overall-view-toc)
    - [_The IO page_](#the-io-page-toc)
- [_Hardware parts_](#hardware-parts-toc)
    - [_Main computer_](#main-computer-toc)
    - [_Serial interface_](#serial-interface-toc)
    - [_PS/2 protocol buffer_](#ps2-protocol-buffer-toc)
    - [_Chip sockets_](#chip-sockets-toc)

## Memory map [[TOC](#table-of-contents)]
### Overall view [[TOC](#table-of-contents)]
| start  | end    | type         | pages | range ($a_{15} - a_{0}$) | logic                                                     |
| ------ | ------ | ------------ | ----- | ------------------------ | --------------------------------------------------------- |
| `0000` | `7EFF` | $\text{RAM}$ | $127$ | `0zzz zzzz .... ....`    | $\overline{a_{15}}\sum\limits_{i = 8}^{14}\overline{a_i} = \overline{a_{15}}\overline{\prod\limits_{i = 8}^{14}a_i}$ |
| `7F00` | `7FFF` | $\text{IO}$  |   $1$ | `0111 1111 .... ....`    | $\overline{a_{15}}\prod\limits_{i = 8}^{14}a_i$           |
| `8000` | `FFFF` | $\text{ROM}$ | $128$ | `1... .... .... ....`    | $a_{15}$                                                  |

> **Note**
>
> legend of the range column:
> - `.`: either $0$ or $1$
> - `zzz`: at least one bit set to $0$

### The IO page [[TOC](#table-of-contents)]
| start | end  | type          | sub-pages | range ($a_{7} - a_{0}$) | logic                                                              |
| ----- | ---- | ------------- | --------- | ----------------------- | ------------------------------------------------------------------ |
| `00`  | `0F` | $\text{VIA1}$ | $1$       | `0000 ....`             | $\overline{a_{7}}\overline{a_{6}}\overline{a_{5}}\overline{a_{4}}$ |
| `10`  | `1F` | $\text{VIA2}$ | $1$       | `0001 ....`             | $\overline{a_{7}}\overline{a_{6}}\overline{a_{5}}a_{4}$            |
| `20`  | `2F` | $\text{ACIA}$ | $1$       | `0010 ....`             | $\overline{a_{7}}\overline{a_{6}}a_{5}\overline{a_{4}}$            |

> **Note**
>
> legend of the range column:
> - `.`: either $0$ or $1$

## Hardware parts [[TOC](#table-of-contents)]
### Main computer [[TOC](#table-of-contents)]
| name                    | jameco                | mouser            |
| ----------------------- | --------------------- | ----------------- |
| CPU                     | http://bit.ly/30ecZBs | [W65C02S6TPG-14]  |
| VIA                     | http://bit.ly/30iR4sG | [W65C22N6TPG-14]  |
| 32K RAM                 | http://bit.ly/300bxai | [AS6C62256-55PCN] |
| 32K ROM                 |                       | [AT28C256-15PU]   |
| 8K ROM                  | [28C64A-15]           |                   |
| LCD                     | http://bit.ly/2O1ReCu |                   |
| 74HC00                  | http://bit.ly/30e5mLf | [SN74HC00NE4]     |
| 74LS30                  |                       | [SN74LS30NE4]     |
| 1MHz crystal oscillator | http://bit.ly/2NWaDVj |                   |
| 10Kohm potentiometer    | http://bit.ly/2AsCaG1 |                   |
| tact switch             | http://bit.ly/2AdNLZc |                   |
| red LED                 | http://bit.ly/2NZTDgN |                   |
| 220ohm                  | http://bit.ly/2Qc5gUw |                   |
| 1Kohm                   | http://bit.ly/2AjJzHj |                   |
| 0.1pF                   | http://bit.ly/30edWtw |                   |

### Serial interface [[TOC](#table-of-contents)]
| name                         | jameco                | mouser                 |
| ---------------------------- | --------------------- | ---------------------- |
| ACIA                         |                       | [W65C51N6TPG-14]       |
| RS-232 interface             |                       | [MAX232CPE+]           |
| DB9F2 adapter                |                       | [58124-1295]           |
| 1.8432MHz crystal oscillator |                       | [ECS-2100AX-1.8432MHZ] |
| 1uF MLCC capacitor           |                       | [FG18X7R1E105KRT00]    |
| 30pf capacitor               |                       | [561R10TCCQ30]         |
| 1M resistor                  |                       | [VR37000001004FR500]   |

### PS/2 protocol buffer [[TOC](#table-of-contents)]

> **TODO**

### Chip sockets [[TOC](#table-of-contents)]

| pins | jameco | mouser                                 |
| ---- | ------ | -------------------------------------- |
| 40   |        | [1-2199299-5] / [111-93-640-41-001000] |
| 28   |        | [1-2199298-9] / [4828-3004-CP]                         |
| 16   |        | [1-2199298-4]                          |
| 14   |        | [1-2199298-3]                          |


[28C64A-15]: https://www.jameco.com/z/AT28C64B-15P-Major-Brands-IC-28C64A-15-EEPROM-64K-Bit-CMOS_74827.html

[W65C51N6TPG-14]: https://www.mouser.fr/ProductDetail/Western-Design-Center-WDC/W65C51N6TPG-14?qs=AgbsAOSw7WDdUCKSkUixbw%3D%3D
[W65C02S6TPG-14]: https://www.mouser.fr/ProductDetail/Western-Design-Center-WDC/W65C02S6TPG-14?qs=opBjA1TV903lvWo9AEKH5w%3D%3D
[W65C22N6TPG-14]: https://www.mouser.fr/ProductDetail/Western-Design-Center-WDC/W65C22N6TPG-14?qs=opBjA1TV901DbgJ9rfcBoQ%3D%3D
[AS6C62256-55PCN]: https://www.mouser.fr/ProductDetail/Alliance-Memory/AS6C62256-55PCN?qs=LD2UibpCYJqgbIupMJnGTQ%3D%3D
[AT28C256-15PU]: https://www.mouser.fr/ProductDetail/Microchip-Technology/AT28C256-15PU?qs=MAR%2F2X5XOp7eAU2%2FlNw9oA%3D%3D
[SN74HC00NE4]: https://www.mouser.fr/ProductDetail/Texas-Instruments/SN74HC00NE4?qs=mE33ZKBHyE4uNJ8383x2vg%3D%3D
[MAX232CPE+]: https://www.mouser.fr/ProductDetail/Analog-Devices-Maxim-Integrated/MAX232CPE%2B?qs=1THa7WoU59H6WLBcdj%252BTOQ%3D%3D
[58124-1295]: https://www.mouser.fr/ProductDetail/CCS/58124-1295?qs=17u8i%2FzlE89zr48r6Br%252BoA%3D%3D
[ECS-2100AX-1.8432MHZ]: https://www.mouser.fr/ProductDetail/ECS/ECS-2100AX-1.8432MHZ?qs=7cQpS2oZOEMv8URpRm%2FrTg%3D%3D
[FG18X7R1E105KRT00]: https://www.mouser.fr/ProductDetail/TDK/FG18X7R1E105KRT00?qs=sGAEpiMZZMukHu%252BjC5l7YTvFF0ytHSxtoC4NbnbovTo%3D
[561R10TCCQ30]: https://www.mouser.fr/ProductDetail/Vishay/561R10TCCQ30?qs=sGAEpiMZZMukHu%252BjC5l7YQBS4TczbHi4IrZt%2Fqz%2FGVA%3D
[VR37000001004FR500]: https://www.mouser.fr/ProductDetail/Vishay-BC-Components/VR37000001004FR500?qs=Iqe6t0HYRD4lz%252B2cDrCA1g%3D%3D
[SN74LS30NE4]: https://www.mouser.fr/ProductDetail/Texas-Instruments/SN74LS30NE4?qs=SL3LIuy2dWwsgWE7AHV5lg%3D%3D

[1-2199299-5]: https://www.mouser.fr/ProductDetail/TE-Connectivity/1-2199299-5?qs=fK8dlpkaUMthXjoyadQV1Q%3D%3D
[111-93-640-41-001000]: https://www.mouser.fr/ProductDetail/Mill-Max/111-93-640-41-001000?qs=WZeyYeqMOWdiMTxI6nZMPA%3D%3D
[1-2199298-9]: https://www.mouser.fr/ProductDetail/TE-Connectivity/1-2199298-9?qs=fK8dlpkaUMumZ9haKKccEA%3D%3D
[4828-3004-CP]: https://www.mouser.fr/ProductDetail/3M-Electronic-Solutions-Division/4828-3004-CP?qs=mroHWPoUHBolYNJsg4b2PQ%3D%3D
[1-2199298-4]: https://www.mouser.fr/ProductDetail/TE-Connectivity/1-2199298-4?qs=fK8dlpkaUMvpL10rY9Abiw%3D%3D
[1-2199298-3]: https://www.mouser.fr/ProductDetail/TE-Connectivity/1-2199298-3?qs=fK8dlpkaUMtBOtVI99wRlQ%3D%3D
