#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 *  * print_error - Print an error message and exit with the given code.
 *   * @code: The exit code.
 *    * @format: The format string for the error message.
 *     */
void print_error(int code, const char *format, ...)
{
	    va_list args;
	        va_start(args, format);
		    dprintf(STDERR_FILENO, format, args);
		        va_end(args);
			    exit(code);
}

int main(int argc, char **argv)
{
	    int file_from, file_to;
	        ssize_t read_file_from, write_file_to;
		    char buffer[BUFFER_SIZE];

		        if (argc != 3)
				    {
					            print_error(97, "Usage: cp file_from file_to\n");
						        }

			    file_from = open(argv[1], O_RDONLY);
			        if (file_from == -1)
					    {
						            print_error(98, "Error: Can't read from file %s\n", argv[1]);
							        }

				    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
				        if (file_to == -1)
						    {
							            print_error(99, "Error: Can't write to %s\n", argv[2]);
								        }

					    while ((read_file_from = read(file_from, buffer, sizeof(buffer))) > 0)
						        {
								        write_file_to = write(file_to, buffer, read_file_from);
									        if (write_file_to == -1 || read_file_from != write_file_to)
											        {
													            print_error(99, "Error: Can't write to %s\n", argv[2]);
														            }
										    }

					        if (read_file_from == -1)
							    {
								            print_error(98, "Error: Can't read from file %s\n", argv[1]);
									        }

						    if (close(file_from) == -1 || close(file_to) == -1)
							        {
									        print_error(100, "Error: Can't close fd %d\n", (close(file_from) == -1) ? file_from : file_to);
										    }

						        return 0;
}

