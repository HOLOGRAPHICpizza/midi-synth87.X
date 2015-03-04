#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

#define selectBank(A, B) STATUSbits.RP1 = A; STATUSbits.RP0 = B;

void countDelay(int count1, int count2);

#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

