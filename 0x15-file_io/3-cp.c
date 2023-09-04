#include "main.h"

#define BUFSIZE 1024

/**
 * main - main function
 *
 * @argc: number of argument
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[]) {
	char *file_from = argv[1];
	                    char *file_to = argv[2];

int fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
			    int fd_source = open(file_from, O_RDONLY);
char buffer[BUFSIZE];
                                            ssize_t bytes_read, bytes_written;
		    	    if (argc != 3) {
		            dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
			            exit(97);
				        }

			    if (fd_source == -1) {
				            dprintf(2, "Error: Can't read from file %s\n", file_from);
					            exit(98);
						        }

				    if (fd_dest == -1) {
					            dprintf(2, "Error: Can't write to file %s\n", file_to);
						            close(fd_source);
							            exit(99);
								     }

					        while ((bytes_read = read(fd_source, buffer, BUFSIZE)) > 0) {
							        bytes_written = write(fd_dest, buffer, bytes_read);
								        if (bytes_written == -1) {
										            dprintf(2, "Error: Can't write to file %s\n", file_to);
											                close(fd_source);
													            close(fd_dest);
														                exit(99);
																        }
									    }

						    if (bytes_read == -1) {
							            dprintf(2, "Error: Can't read from file %s\n", file_from);
								            close(fd_source);
									            close(fd_dest);
										            exit(98);
											        }

						        if (close(fd_source) == -1 || close(fd_dest) == -1) {
								        dprintf(2, "Error: Can't close fd\n");
									        exit(100);
										    }

							    return 0;
}
