## install tools
### Arduino
> **Note**
>
> in the following, let's assume
> - version: 2.3.2
> - platform: 64-bit Linux

- download the IDE and build toolchain from the [_Downloads_ page](https://www.arduino.cc/en/software)
- unarchive the files with commands like `unzip`
- move all the files to a known place
```shell
cp -r arduino-ide_2.3.2_Linux_64bit/ ~/.local/share/arduino/
```
- expose the Arduino binary to the `PATH`
```shell
ln -s ~/.local/share/arduino/arduino-ide_2.3.2_Linux_64bit/arduino-ide ~/.local/bin/arduino-ide
```

### `screen`
on ArchLinux
```shell
pacman -S screen
```

## run the monitoring script
- tie the pins of the 6502 to an Arduino as shown in [`bus_monitor.ino`](bus_monitor/bus_monitor.ino)
- upload the code to the Arduino
- open a serial monitor
```shell
screen /dev/ttyACM0 57600
```
- record the output by pressing `<c-a>H`
- clear the monitor with `<c-a>C`
- close the monitor with `<c-a>K`
