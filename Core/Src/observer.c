/*
 * observer.c
 *
 *  Created on: Nov 25, 2022
 *      Author: Mohamed Adel
 */

#include "observer.h"

/**================================================================
 * @Fn				- observer_attach
 * @brief 			- attaches a new observer to the specified subbject
 * @param [in]      - *observer pointer for the observer config struct which contains all the observer parametrs
 * @param [in]      - *subject pointer for the subject config struct which contains all the subject parametrs
 * @retval 			- None
 * Note				- None
 */
void observer_attach(observers_t *observer , subjects_t *subject );
/**================================================================
 * @Fn				- observer_detach
 * @brief 			- detacjes the observer to the specified subbject
 * @param [in]      - *observer pointer for the observer config struct which contains all the observer parametrs
 * @param [in]      - *subject pointer for the subject config struct which contains all the subject parametrs
 * @retval 			- None
 * Note				- None
 */
void observer_detach(observers_t *observer , subjects_t *subject );
/**================================================================
 * @Fn				- notify_observer
 * @brief 			- notifies all the observers to the specified subject
 * @param [in]      - *observer pointer for the observer config struct which contains all the observer parametrs
 * @param [in]      - *subject pointer for the subject config struct which contains all the subject parametrs
 * @retval 			- None
 * Note				- None
 */
void notify_observer(observers_t *observer , subjects_t *subject );
/**================================================================
 * @Fn				- get_subjet_state
 * @brief 			- gets  the state to the specified subject
 * @param [in]      - *subject pointer for the subject config struct which contains all the subject parametrs
 * @retval          - uint8_t the state of the subject
 * Note				- None
 */
uint8_t get_subjet_state(subjects_t * subject);
/**================================================================
 * @Fn				- set_subjet_state
 * @brief 			- sets  the state to the specified subject
 * @param [in]      - *subject pointer for the subject config struct which contains all the subject parametrs
 * @retval 			- None
 * Note				- None
 */
void set_subjet_state(subjects_t * subject);
/**================================================================
 * @Fn				- update_observers
 * @brief 			- updates the observe value
 * @param [in]      - *observer pointer for the observer config struct which contains all the observer parametrs
 * @retval 			- None
 * Note				- None
 */
void update_observers(observers_t *observer);
