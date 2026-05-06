# SEGGER SystemView Pack Notes

## Modifications and add-ons to original source code

- Added `LICENSE.md` file (taken from RTT and is the same also in the sources).
- Renamed `Global.h` to `SEGGER_Global.h` (more SEGGER specific and avoids conflicts).
- FreeRTOS V11:
    - `SEGGER_SYSVIEW_FreeRTOS.h`: enabled reconfiguration with enabled context check (default).

## SystemView Configuration

- `SEGGER_SYSVIEW_Conf.h` contains only user-specific configuration.
- `SEGGER_Global.h` (renamed from `Global.h`) is probably not a real configuration file (and not SystemView specific).

## Pack description (.pdsc)

- `<releases>`: not an actual release on github (no `<url>`).
- `<requirements>`: temporarily removed the dependency to unpublished RTT pack in order for pack validation to succeed. The dependency can be added back once the RTT pack is published.

  ```xml
  <requirements>
    <packages>
      <package vendor="SEGGER" name="RTT" version="8.0.0-0"/>
    </packages>
  </requirements>
  ```

- pack version 4.10.0: based on latest GitHub tag V4.10
- component: SEGGER:SystemView variant NoOS and FreeRTOS.
    - component version 3.32.0: based on source code defines (SEGGER_SYSVIEW_MAJOR/MINOR/REV).
    - config file version 3.32.0 (same as component version).
    - other OS variants currently not provided.
- [./Sample](./Sample):
    - SystemView Recorder: not yet provided in the pack (could be a separate component).
        - COMM: SystemView Recorder: SEGGER_SYSVIEW_REC.c/.h.
        - COMM/IP: TCP/IP interface using embOS and embNET. Could be added as a SystemView Recorder variant (assuming proper CMSIS-Pack exists for embOS and embNET).
        - COMM/UART: UART interface configuration template using BSP_UART_xxx functions. CMSIS-Driver USART based SystemView Recorder variant could be added to provide a more generic solution.
    - RTOS support:
        - embOS: not yet provided in the pack (would require CMSIS-embOS pack {not yet checked} and conditional config files).
        - FreeRTOSV8/V9/V10/10.4: not provided in the pack (older versions which are not interesting and would also require patching FreeRTOS source code).
        - FreeRTOSV11: provided within FreeRTOS variant.
        - MicriumOS: no CMSIS pack available, not provided in the pack.
        - NoOS: provided within NoOS variant.
        - NuttX: no CMSIS pack available (would also require patching), not provided in the pack.
        - ThreadX: no CMSIS pack available, not provided in the pack.
        - uCOS-II/III: no CMSIS pack available, not provided in the pack.
- Examples:
    - Reference application that exemplifies usage would be usefull.
