#ifndef MACRO_H
# define MACRO_H

// Colors

# include <stdio.h>

# define BLACK			"\033[0;30m"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define YELLOW			"\033[0;33m"
# define CYAN			"\033[0;35m"
# define BLUE			"\033[0;36m"
# define WHITE			"\033[0;37m"
# define BOLD_RED		"\033[1;31m"
# define BOLD_GREEN		"\033[1;32m"
# define BOLD_YELLOW	"\033[0;33m"
# define BOLD_CYAN		"\033[1;35m"
# define BOLD_BLUE		"\033[1;34m"
# define BOLD_WHITE		"\033[1;37m"
# define RESET			"\033[0;0m"

# define DEBUG			printf("DEBUGING...\n");
#endif