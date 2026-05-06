# SEGGER SystemView

SEGGER SystemView is a real-time recording and visualization tool for embedded applications. It captures runtime events with low overhead and presents them in timeline and statistical views that help analyze task execution, interrupts, software events, and communication behavior.

SystemView is typically used together with [SEGGER RTT](https://www.segger.com/products/debug-probes/j-link/technology/about-real-time-transfer/), which transports the recorded event data from the target to the host through the debug probe without requiring a dedicated UART.

## CMSIS-Pack

This CMSIS-Pack enables integration of SystemView into CMSIS-based projects and toolchains and provides:

- SystemView sources and configuration files (for bare-metal systems and FreeRTOS).
- Reference applications that exemplify usage.

To use SystemView in a csolution project add `pack: SEGGER::SystemView` and one of these components:

- `component: SEGGER:SystemView&NoOS` for bare-metal applications
- `component: SEGGER:SystemView&FreeRTOS` for FreeRTOS-based applications

Both components require the RTT pack. The [RTE directory](https://open-cmsis-pack.github.io/cmsis-toolbox/build-overview/#rte-directory-structure) contains the related configuration files such as `SEGGER_SYSVIEW_Conf.h` and `SEGGER_Global.h` for additional settings.

## Tool Support

SystemView integrates with SEGGER debug probes and tooling. A typical setup uses J-Link together with RTT to stream event data to the SystemView host application.

- [SEGGER SystemView](https://www.segger.com/products/development-tools/systemview/)
- [SEGGER J-Link](https://www.segger.com/products/debug-probes/j-link/)
- [SEGGER RTT technology](https://www.segger.com/products/debug-probes/j-link/technology/about-real-time-transfer/)

SystemView data capturing is also supported by pyOCD and the CMSIS-Debugger VSCode extension. Refer to CMSIS-Toolbox user's guide [pyOCD Debugger - RTT](https://open-cmsis-pack.github.io/cmsis-toolbox/pyOCD-Debugger/#rtt) for RTT channel configuration and [pyOCD Debugger - SystemView](https://open-cmsis-pack.github.io/cmsis-toolbox/pyOCD-Debugger/#systemview) for `*.SVDat` capture support.

## Links

- [Documentation](https://www.segger.com/systemview)
- [Knowledge Base](https://kb.segger.com/SystemView)
- Issues (ToDo: Segger)
- [Arm Examples](https://github.com/search?q=topic%3Asystemview+org%3AArm-Examples+fork%3Atrue&type=repositories) that use SystemView.
