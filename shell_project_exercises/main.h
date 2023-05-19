#ifndef MAIN_H__
#define MAIN_H__

char **separate_string(char *s);
void free_arr(char **s);
void read_and_write_to_pipe(int index, int **pipes);
int **create_pipes(void);
int **run_functions(int process_index, int **pipes);

#endif
