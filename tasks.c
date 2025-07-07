#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASK_LENGTH 100
void remove_task(int index);

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("Usage: ./todo <command> [arguments]\n");
        return 1;
    }
    if (strcmp(argv[1], "add") == 0) {
        if (argc != 3) {
            printf("Usage: ./todo add <task>\n");
            return 1;
        }
        FILE *file = fopen("tasks.txt", "a");
        if (file == NULL) {
            // If file doesn't exist, create it, then append
            file = fopen("tasks.txt", "w");
            if (file == NULL) {
                printf("Error creating file.\n");
                return 1;
            }
        }
        fprintf(file, "New task: %s\n", argv[2]);
        fclose(file);  // Close the file after writing

        printf("Task added: %s\n", argv[2]);
    }
    else if (strcmp(argv[1], "remove") == 0) {
        if (argc != 3) {
            printf("Usage: ./todo remove <task_number>\n");
            return 1;
        }
        int task_index = atoi(argv[2]);
        remove_task(task_index);  // Call the remove function
    }
    else {
        printf("Unknown command\n");
        return 1;
    }

    return 0;
}
void remove_task(int index)
{
    // Open the file to read the tasks
    FILE *file = fopen("tasks.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    char tasks[100][MAX_TASK_LENGTH];
    int task_count = 0;
    while (fgets(tasks[task_count], sizeof(tasks[task_count]), file)) {
        task_count++;
    }

    fclose(file);  // Close the file after reading
    if (index <= 0 || index > task_count) {
        printf("Invalid task number.\n");
        return;
    }
    file = fopen("tasks.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }
    for (int i = 0; i < task_count; i++) {
        if (i != index - 1) {  // Skip the task to remove (index is 1-based)
            fprintf(file, "%s", tasks[i]);
        }
    }

    fclose(file);  // Close the file after writing

    printf("Task number %d has been removed.\n", index);
}
