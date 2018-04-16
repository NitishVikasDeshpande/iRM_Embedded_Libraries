/**
 * @author  Nickel_Liang <nickelliang>
 * @date    2018-04-15
 * @file    bsp_laser.h
 * @brief   Board support package for laser
 * @log     2018-04-15 nickelliang
 */

#ifndef _BSP_LASER_H_
#define _BSP_LASER_H_

#include "stm32f4xx_hal.h"
#include "main.h"

/**
 * @ingroup bsp
 * @defgroup bsp_laser BSP Laser
 * @{
 */

/**
 * Turn on laser
 *
 * @author Nickel_Liang
 * @date   2018-04-15
 */
void laser_on(void);

/**
 * Turn off laser
 *
 * @author Nickel_Liang
 * @date   2018-04-15
 */
void laser_off(void);

/** @} */

#endif