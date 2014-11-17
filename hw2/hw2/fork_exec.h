#ifndef FORK_EXEC_H
#define FORK_EXEC_H

//
int fork_and_exec_last(int connfd, char **cmd);
int fork_and_exec_pipe(int connfd, char **cmd, int p_n);
int fork_and_exec_file(int connfd, char **cmd, char *filepath);

//
void debug_print_pipe_cat_content(int count);

#endif
