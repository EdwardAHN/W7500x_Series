#ifndef TIMERHANDLER_H_
#define TIMERHANDLER_H_

#include <stdint.h>

// For main routine checker
#define MAIN_ROUTINE_CHECK_CYCLE_MSEC		100 // msec
#define DEFINED_COUNT_THRESHOLD_VAL			35

extern uint8_t flag_check_main_routine;

void Timer_Configuration(void); // not used
void Timer_IRQ_Handler(void);

// To replace the timer interrupt, counting inaccurate time value
void Time_Counter_Configuration(void);
void Time_Counter(void);

// Dummy function
void set_phylink_time_check(uint8_t enable);

#endif /* TIMERHANDLER_H_ */
