#ifndef HEADER_H
#define HEADER_H

void print_name(char *name, void (*f)(char *));
void array_iterator(char *array, size_t size, void (*action)(int));

#endif /* HEADER_H */
