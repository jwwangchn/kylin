/**
 * Copyright (c) 2011-2016, Jack Mo (mobangjack@foxmail.com).
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#ifndef __MEC_H__
#define __MEC_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/*******************************************/
/* Mecanum Wheel Power Transmission System */
/*******************************************/
/*              2        1                 */
/*                  |y                     */
/*                 b|___x                  */
/*               z    a                    */
/*              3        4                 */
/*                                         */
/*******************************************/

typedef struct
{
	float l;
	float r;

	float cx;
	float cy;
	float cz;
}Mec_t;

void Mec_Config(Mec_t* mec, float lx, float ly, float r1, float r2);
void Mec_Synthe(const Mec_t* mec, const float* w, float* v);
void Mec_Decomp(const Mec_t* mec, const float* v, float* w);

#ifdef __cplusplus
}
#endif

#endif
