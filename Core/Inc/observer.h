/*
 * observer.h
 *
 *  Created on: Nov 25, 2022
 *      Author: Mohamed Adel
 */

#ifndef INC_OBSERVER_H_
#define INC_OBSERVER_H_

#include "common_includes.h"

#define MAX_NUM_OF_SUBSCRIBERS 4

typedef struct
{
	void (*subject_ptr) (void);
	uint8_t state ;
}subjects_t;

typedef struct
{
	void (*observer_ptr) (void);
	uint8_t state ;
}observers_t;

void observer_attach(observers_t *observer , subjects_t *subject );
void observer_detach(observers_t *observer , subjects_t *subject );
void notify_observer(observers_t *observer , subjects_t *subject );
uint8_t get_subjet_state(subjects_t * subject);
void set_subjet_state(subjects_t * subject);
void update_observers(observers_t *observer);

#endif /* INC_OBSERVER_H_ */
