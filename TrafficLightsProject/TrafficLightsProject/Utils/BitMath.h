/*
 * BitMath.h
 *
 * Created: 10/5/2022 8:33:43 PM
 *  Author: mohamad hassan
 */

#ifndef BITMATH_H_
#define BITMATH_H_

#define Set_Bit(REG, BIT) REG |= (1 << BIT)
#define Clear_Bit(REG, BIT) REG &= ~(1 << BIT)
#define Toggle_Bit(REG, BIT) REG ^= (1 << BIT)
#define Get_Bit(REG, BIT) ((REG >> BIT) & 0x01)

#endif /* BITMATH_H_ */