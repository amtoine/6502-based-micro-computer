| start  | end    | type         | pages | range ($a_{15} - a_{0}$) | logic                                                     |
| ------ | ------ | ------------ | ----- | ------------------------ | --------------------------------------------------------- |
| `0000` | `7EFF` | $\text{RAM}$ | $127$ | `0zzz zzzz .... ....`    | $\overline{a_{15}}\sum\limits_{i = 8}^{14}\overline{a_i}$ |
| `7F00` | `7FFF` | $\text{IO}$  |   $1$ | `0111 1111 .... ....`    | $\overline{a_{15}}\prod\limits_{i = 8}^{14}a_i$           |
| `8000` | `FFFF` | $\text{ROM}$ | $128$ | `1... .... .... ....`    | $a_{15}$                                                  |

> **Note**
>
> legend of the range column:
> - `.`: either $0$ or $1$
> - `zzz`: any bit set to $0$

| start | end  | type          | sub-pages | range ($a_{7} - a_{0}$) | logic                                                              |
| ----- | ---- | ------------- | --------- | ----------------------- | ------------------------------------------------------------------ |
| `00`  | `0F` | $\text{VIA1}$ | $1$       | `0000 ....`             | $\overline{a_{7}}\overline{a_{6}}\overline{a_{5}}\overline{a_{4}}$ |
| `10`  | `1F` | $\text{VIA2}$ | $1$       | `0001 ....`             | $\overline{a_{7}}\overline{a_{6}}\overline{a_{5}}a_{4}$            |
| `20`  | `2F` | $\text{ACIA}$ | $1$       | `0010 ....`             | $\overline{a_{7}}\overline{a_{6}}a_{5}\overline{a_{4}}$            |
