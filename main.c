#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Title 80
#define Content 300
#define Notes 10

typedef struct {
    int id;
    char title[Title];
    char content[Content];
} Note;

Note notes[Notes];
int note_count = 0;
int next_id = 1;


void c_input() {
    int c;
    
    while ((c = getchar()) != '\n' && c != EOF) {
        
    }
}

void display_note(Note n) {
    printf("Employee ID: %d | Employee Name: %s\n", n.id, n.title);
    printf("Working Post: %s\n", n.content);
}

int find_id(int id) {
    for (int i = 0; i < note_count; i++) {
        if (notes[i].id == id) return i;
    }
    return -1; 
}

void create_note() {
    if (note_count >= Notes) {
        printf("\n\tMax notes limit reached!\n");
        return;
    }

    Note new_note;
    new_note.id = next_id++;

    printf("\n [1] CREATE Employee Details\n");
    printf("Name: ");
    fgets(new_note.title, Title, stdin);
    int i = 0;

while (new_note.title[i] != '\0') { 
    if (new_note.title[i] == '\n') { 
        new_note.title[i] = '\0';
        break; 
    }
    i++; 
}

    printf("Working Post(single line): ");
    fgets(new_note.content, Content, stdin);
    new_note.content[strcspn(new_note.content, "\n")] = 0;

    notes[note_count++] = new_note;
    printf("\t Data %d created.\n", new_note.id);
}

void view_notes() {
    if (note_count == 0) {
        printf("\n\t No Data available. \n");
        return;
    }
    printf("\n[2] VIEW ALL DATA (%d Total)\n", note_count);
    for (int i = 0; i < note_count; i++) {
        display_note(notes[i]);
    }
}

void search_notes() {
    char term[Title];
    printf("\n[3] SEARCH EMPLOYEE DATA\n");
    printf("Enter Employee name to search: ");
    fgets(term, Title, stdin);
    term[strcspn(term, "\n")] = 0;

    int found = 0;
    printf("Results for '%s' \n", term);
    for (int i = 0; i < note_count; i++) {
        if (strstr(notes[i].title, term) || strstr(notes[i].content, term)) {
            display_note(notes[i]);
            found++;
        }
    }
    if (found == 0) printf("\t No matches found.\n");
}

void edit_note() {
    int id;
    printf("\n[4] EDIT EMPLOYEE DATA\n");
    printf("Enter Employee ID to edit: ");
    if (scanf("%d", &id) != 1) return;
    c_input();

    int index = find_id(id);
    if (index == -1) {
        printf("\t Employee ID %d not found. \n", id);
        return;
    }

    printf("Editing Data %d (Current Employee Name: %s)\n", id, notes[index].title);
    printf("New Name(or press Enter to skip): ");
    char new_title[Title];
    fgets(new_title, Title, stdin);
    new_title[strcspn(new_title, "\n")] = 0;
    
    if (strlen(new_title) > 0) {
        strcpy(notes[index].title, new_title);
    }
    
    printf("\t Data %d updated.\n", id);
}

void delete_note() {
    int id;
    printf("\n[5] DELETE EMPLOYEE DATA\n");
    printf("Enter Employee ID to delete: ");
    if (scanf("%d", &id) != 1) return;
    c_input();

    int index = find_id(id);
    if (index == -1) {
        printf("\t Employee ID %d not found. \n", id);
        return;
    }

    for (int i = index; i < note_count - 1; i++) {
        notes[i] = notes[i + 1];
    }
    note_count--;
    printf("\t Employee Data of ID %d deleted.\n", id);
}


int main() {
    int choice;
    do {
        printf("\n============================================\n");
        printf("  Simple C Notes to maintain employee Details\n");
        printf("==============================================\n");
        printf("1. Create Employee Data \n");
        printf("2. View All Employee Details\n");
        printf("3. Search Employee details \n");
        printf("4. Edit Employee Data\n");
        printf("5. Delete Employee details\n");
        printf("6. Exit \n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("\tInvalid input. \n");
           c_input();
            choice = 0; 
            continue;
        }
        c_input();

        switch (choice) {
            case 1: create_note(); break;
            case 2: view_notes(); break;
            case 3: search_notes(); break;
            case 4: edit_note(); break;
            case 5: delete_note(); break;
            case 6: printf("\nExiting program. (Notes are NOT saved to file)\n"); break;
            default: printf("\t Invalid choice.\n");
        }
    } while (choice != 6);

    return 0;

}

