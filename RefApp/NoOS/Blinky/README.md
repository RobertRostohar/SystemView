# Blinky project

The **Blinky** project is a simple example that can be used to verify the
basic tool setup.

It is compliant to the Common Microcontroller Software Interface Standard (CMSIS).

## Operation

- At start:
    - outputs "Blinky example" via SystemView
    - blinks vioLED0 in 1 sec interval.

## Debug setup

### CMSIS-Toolbox with pyOCD

Add the following to the `solution:target-types:target-set:debugger` node of the `.csolution.yml` file:

```yml
  rtt:
    - channel:
        - number: 1
          mode: systemview
```
