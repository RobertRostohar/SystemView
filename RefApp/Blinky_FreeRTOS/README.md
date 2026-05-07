# Blinky project

The **Blinky** project is a simple example that can be used to verify the
basic tool setup.

It is compliant to the Common Microcontroller Software Interface Standard (CMSIS)
and uses the CMSIS-RTOS2 API interface for RTOS functionality. The CMSIS-RTOS2 API
is available with various real-time operating systems, for example RTX5 or FreeRTOS.

## Operation

- At start:
    - outputs "Blinky example" via SystemView
    - blinks vioLED0 in 1 sec interval.
- The vioBUTTON0 changes the blink frequency and start/stops vioLED1.

## Debug setup

### CMSIS-Toolbox with pyOCD

Add the following to the `solution:target-types:target-set:debugger` node of the `.csolution.yml` file:

```yml
  rtt:
    - channel:
        - number: 1
          mode: systemview
```
