#include <stdio.h>
#include <string.h>

// Union to hold different types of diagnostic data
union DiagnosticData {
    int errorCode;
    float temperature;
    char statusMessage[30];
};

// Structure to describe the message type and its value
struct CarDiagnostic {
    int dataType; // 1 = error code, 2 = temperature, 3 = status message
    union DiagnosticData data;
};

int main() {
    struct CarDiagnostic diag;

    // Case 1: Error code
    diag.dataType = 1;
    diag.data.errorCode = 404;
    printf("Error Code: %d\n", diag.data.errorCode);

    // Case 2: Temperature warning
    diag.dataType = 2;
    diag.data.temperature = 98.6;
    printf("Engine Temperature: %.2f C\n", diag.data.temperature);

    // Case 3: Status message
    diag.dataType = 3;
    strcpy(diag.data.statusMessage, "Oil level low");
    printf("Status: %s\n", diag.data.statusMessage);

    return 0;
}

