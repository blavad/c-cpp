#ifndef __BINPUT_H__
#define __BINPUT_H__

/**
 * @brief Activates non-blocking mode for the standard input.
 */
void activateNonBlockingMode();

/**
 * @brief Restores the terminal settings.
 */
void restoreBlockingMode();

/**
 * @brief Checks and retrieves the input if available.
 */
int getNonBlockingInput(char *input);

#endif // __BINPUT_H__
