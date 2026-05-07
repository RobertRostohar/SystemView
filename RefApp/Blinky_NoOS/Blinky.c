/*---------------------------------------------------------------------------
 * Copyright (c) 2026 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#include <stdio.h>
#include "main.h"
#include "cmsis_vio.h"
#include "SEGGER_SYSVIEW.h"

/*
  Simple delay function (approximate, not accurate).
*/
static void Delay(uint32_t ticks) {
  uint32_t n;

  n = (SystemCoreClock >> (10+4)) * ticks;
  while (n--) {
    __NOP(); __NOP(); __NOP(); __NOP(); __NOP(); __NOP();
    __NOP(); __NOP(); __NOP(); __NOP(); __NOP(); __NOP();
  }
}

/*
  Application main function.
*/
int app_main(void) {

  SEGGER_SYSVIEW_Conf();

  SEGGER_SYSVIEW_Print("Blinky example\n");

  for (;;) {
      SEGGER_SYSVIEW_MarkStart(0U);
      vioSetSignal(vioLED0, vioLEDon);
      Delay(500U);
      SEGGER_SYSVIEW_MarkStop(0U);
      SEGGER_SYSVIEW_MarkStart(1U);
      vioSetSignal(vioLED0, vioLEDoff);
      Delay(500U);
      SEGGER_SYSVIEW_MarkStop(1U);
  }

  return 0;
}
