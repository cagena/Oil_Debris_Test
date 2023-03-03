/** @file shares.h
 *  This file contains extern declarations of shares and queues which are used
 *  in more than one file of a demonstration project.
 * 
 *  @author JR Ridgely
 *  @author Corey Agena, Daniel Ceja, Parker Tenney
 *  @date   2021-Oct-23 Original file
 *  @date   2022-Nov-25 Edited for the Robot Arm Project by Agena, Ceja, and
 *          Tenney
 *  @copyright (c) 2021 by JR Ridgely, released under the LGPL 3.0. 
 */

#ifndef _SHARES_H_
#define _SHARES_H_

#include "taskqueue.h"
#include "taskshare.h"

// Share which hold the imu values for the wrist and linear actuator
extern Share<uint8_t> ax_pwm;
extern Share<uint8_t> ay_pwm;

#endif // _SHARES_H_