// Copyright 2023-2025 KAIA.AI
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Based on https://github.com/getSurreal/XV_Lidar_Controller

#include "LDS_LDS02RR.h"

void LDS_LDS02RR::init() {
  LDS_NEATO_XV11::init();
  cw = true;
}

const char* LDS_LDS02RR::getModelName() { return "LDS02RR"; }