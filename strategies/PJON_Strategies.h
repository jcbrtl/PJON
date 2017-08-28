
/* PJON dynamic Strategy inclusion
   _____________________________________________________________________________

    Copyright 2017 Giovanni Blu Mitolo gioscarab@gmail.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License. */

#pragma once

/* Strategy related constant predefinition memory optimization */
#if defined(PJON_INCLUDE_AS)
  #include "AnalogSampling/AnalogSampling.h"
#endif
#if defined(PJON_INCLUDE_ETCP)
  #include "EthernetTCP/EthernetTCP.h"
#endif
#if defined(PJON_INCLUDE_LUDP)
  #include "LocalUDP/LocalUDP.h"
#endif
#if defined(PJON_INCLUDE_EUPD)
  #include "LocalUDP/EthUDP.h"
#endif
#if defined(PJON_INCLUDE_OS)
  #include "OverSampling/OverSampling.h"
#endif
#if defined(PJON_INCLUDE_SWBB)
  #include "SoftwareBitBang/SoftwareBitBang.h"
#endif
#if defined(PJON_INCLUDE_TS)
  #include "ThroughSerial/ThroughSerial.h"
#endif
#if defined(PJON_INCLUDE_NONE)
  /* None for custom strategy inclusion */
#endif
#if !defined(PJON_INCLUDE_AS)   && !defined(PJON_INCLUDE_ETCP) && \
    !defined(PJON_INCLUDE_GUDP) && !defined(PJON_INCLUDE_LUDP) && \
    !defined(PJON_INCLUDE_OS)   && !defined(PJON_INCLUDE_SWBB) && \
    !defined(PJON_INCLUDE_TS)   && !defined(PJON_INCLUDE_NONE)
  #include "AnalogSampling/AnalogSampling.h"
  #include "OverSampling/OverSampling.h"
  #include "SoftwareBitBang/SoftwareBitBang.h"
  #include "ThroughSerial/ThroughSerial.h"
  /* Avoid ATtiny 45/85 error missing inclusion error */
  #if !defined(__AVR_ATtiny45__) && !defined(__AVR_ATtiny85__)
    #include "EthernetTCP/EthernetTCP.h"
    #include "LocalUDP/LocalUDP.h"
    #include "EthUDP/EthUDP.h"
  #endif
#endif
