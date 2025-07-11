# To-Do-List-Manager

As part of my CS50 course, I have implemented a basic command-line To-Do List Manager using the C programming language.

This project is a simple program that allows users to manage their tasks through a terminal interface. Tasks are stored in a text file named tasks.txt. The program supports two main operations: adding tasks and removing tasks by number.

FEATURES:
1. Add new tasks to the list
2. Remove existing tasks using their task number
3. Store tasks persistently in a text file
4. Includes file handling and error handling

FUNCTIONALITY OVERVIEW:
1. Add a Task :The add command allows users to append a new task to the tasks.txt file. Each task is stored in the following format:    New task: <task_description>
               If the file does not exist, it is created automatically. If the file already exists, the new task is appended at the end.

2.Remove a Task : The remove command allows users to delete a task based on its task number. Tasks are numbered in the order they are added, starting from 1. When a task is removed, the list is updated and                          renumbered. The updated list is saved back to the file.
3.File Handling :
         For adding tasks: The program opens tasks.txt in append mode ("a"). If the file does not exist, it is created using write mode ("w").
         For removing tasks: The program reads all tasks into memory, skips the specified task, and rewrites the file with the remaining tasks.
         
4.Error Handling : The program checks whether the correct number of command-line arguments is provided.If the task number for removal is invalid (e.g., does not exist), an error message is displayed.If there is                      an issue opening or creating the file, an error message is printed.

LIMITATIONS AND CONSIDERATIONS:
1. File Size: The program is designed for small task lists and stores tasks in memory temporarily, which is not efficient for large lists.
2. Task Numbering: Tasks are numbered starting from 1, and the numbering is reset after each removal.
3. No Editing Feature: Currently, tasks can only be added or removed; editing is not supported.
4. File Format: Tasks are stored as plain text without any structure such as timestamps or priorities.

FUTURE ENHANCEMENTS:
-> Add support for editing existing tasks.
-> Implement task prioritization to mark tasks as high or low priority.
-> Add the ability to mark tasks as completed.
-> Preserve original task numbering even after deletions.

CONCLUSION:
This To-Do List Manager provides a basic yet functional interface for managing tasks via the command line. It demonstrates file handling, error checking, and command-line argument processing in C. This project serves as a solid foundation for learning how to build simple interactive tools using the C programming language.

