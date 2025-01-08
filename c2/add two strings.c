#include <stdio.h>
#include <string.h>

void addStrings(char num1[], char num2[], char result[]) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int carry = 0, i, j, k = 0;
    
    // Make result array large enough to hold the maximum possible size + 1
    char tempResult[1001];
    
    // Start from the end of both strings (least significant digit)
    i = len1 - 1;
    j = len2 - 1;

    // Add digits until we exhaust both strings
    while (i >= 0 || j >= 0 || carry) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;  // Get digit from num1 or 0 if i < 0
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;  // Get digit from num2 or 0 if j < 0

        int sum = digit1 + digit2 + carry;  // Sum digits and carry

        carry = sum / 10; 
        tempResult[k++] = (sum % 10) + '0';  
        
        i--;  // Move to the next digit
        j--;
    }

    // The digits are stored in reverse order, so reverse the result string
    tempResult[k] = '\0';  // Null-terminate the string

    // Reverse the result string
    int len = k;
    for (i = 0; i < len; i++) {
        result[i] = tempResult[len - i - 1];
    }
    result[len] = '\0';  // Null-terminate the result
}

int main() {
    char num1[1000], num2[1000], result[1001];

    // Input two large numbers as strings
    printf("Enter first large number: ");
    scanf("%s", num1);
    printf("Enter second large number: ");
    scanf("%s", num2);

    // Perform the addition
    addStrings(num1, num2, result);

    // Output the result
    printf("Sum: %s\n", result);

    return 0;
}
