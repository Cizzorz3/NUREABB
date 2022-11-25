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

//subscriber
//observer handle
typedef struct
{
	//array of structures
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
uint8_t get_subject_state(subjects_t * subject);
void set_subject_state(subjects_t * subject);

#endif /* INC_OBSERVER_H_ */
