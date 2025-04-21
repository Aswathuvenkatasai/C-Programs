#include <string.h>

typedef struct {
    char name[21];
    int roll_no;
    float cgpa;
} STUDENT;

// a. Search by name
STUDENT searchByName(STUDENT arr[], int n, const char* target) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].name, target) == 0)
            return arr[i];
    }
    STUDENT empty = {"", -1, 0.0};
    return empty;
}

// b. Search by roll number
STUDENT searchByRoll(STUDENT arr[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (arr[i].roll_no == roll)
            return arr[i];
    }
    STUDENT empty = {"", -1, 0.0};
    return empty;
}

// c. Print all students with CGPA > x
void printAboveCGPA(STUDENT arr[], int n, float x) {
    printf("\nStudents with CGPA > %.2f:\n", x);
    for (int i = 0; i < n; i++) {
        if (arr[i].cgpa > x) {
            printf("Name: %s | Roll No: %d | CGPA: %.2f\n", arr[i].name, arr[i].roll_no, arr[i].cgpa);
        }
    }
}
int main() {
    STUDENT students[100];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d (name roll_no cgpa): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].cgpa);
    }

    // Search by name
    char target_name[21];
    printf("\nEnter name to search: ");
    scanf("%s", target_name);
    STUDENT result = searchByName(students, n, target_name);
    if (strcmp(result.name, "") != 0)
        printf("Found: %s %d %.2f\n", result.name, result.roll_no, result.cgpa);
    else
        printf("Student not found.\n");

    // Search by roll number
    int roll;
    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);
    result = searchByRoll(students, n, roll);
    if (strcmp(result.name, "") != 0)
        printf("Found: %s %d %.2f\n", result.name, result.roll_no, result.cgpa);
    else
        printf("Student not found.\n");

    // Students with CGPA > x
    float x;
    printf("\nEnter CGPA threshold: ");
    scanf("%f", &x);
    printAboveCGPA(students, n, x);

    return 0;
}
