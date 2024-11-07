#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <fcntl.h>

/**
 * @brief Activates the non-blocking mode for the terminal.
 */
void activateNonBlockingMode()
{
    struct termios term;
    tcgetattr(STDIN_FILENO, &term);          // Récupérer les attributs actuels du terminal
    term.c_lflag &= ~(ICANON | ECHO);        // Désactiver l'input canonic et l'echo
    tcsetattr(STDIN_FILENO, TCSANOW, &term); // Appliquer les nouveaux paramètres

    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);      // Récupérer les flags actuels de stdin
    fcntl(STDIN_FILENO, F_SETFL, flags | O_NONBLOCK); // Activer le mode non bloquant
}

/**
 * @brief Restores the terminal settings.
 */
void restoreBlockingMode()
{
    struct termios term;
    tcgetattr(STDIN_FILENO, &term);
    term.c_lflag |= (ICANON | ECHO); // Réactiver l'input canonic et l'echo
    tcsetattr(STDIN_FILENO, TCSANOW, &term);

    int flags = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, flags & ~O_NONBLOCK); // Désactiver le mode non bloquant
}

/**
 * @brief Checks and retrieves the input if available.
 */
int getNonBlockingInput(char *input)
{
    return read(STDIN_FILENO, input, 1); // Lire un caractère, retourne -1 si aucune entrée
}
