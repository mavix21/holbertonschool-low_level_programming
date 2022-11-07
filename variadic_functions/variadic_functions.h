#ifndef MAIN_H
#define MAIN_H
/**
 * struct fmt - Matches specifier with its corresponding printer function
 * @formater: Specifier
 * @print_fmt: Pointer to a void function that prints an argument according to
 * the given format
 *
 */
typedef struct fmt
{
	char *formater;
	void (*print_fmt)(va_list);
} fmt_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
