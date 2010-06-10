/* Copyright (c) 2008, 2009 Nicira Networks
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef VSWITCHD_BRIDGE_H
#define VSWITCHD_BRIDGE_H 1

#include <stdbool.h>
#include <stdint.h>

struct ovsrec_open_vswitch;
struct svec;

void bridge_init(const struct ovsrec_open_vswitch *);
void bridge_reconfigure(const struct ovsrec_open_vswitch *);
int bridge_run(void);
void bridge_wait(void);

#endif /* bridge.h */
