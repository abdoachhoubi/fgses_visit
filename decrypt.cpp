#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void encrypt(char *text, int key) {
    int i;
    int len = strlen(text);

    for (i = 0; i < len; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';
        } else if (text[i] == ' ' || text[i] == '\t') {
            text[i] = '*';  // Convert whitespace to asterisk
        }
		else
			text[i] = '@';
    }
}

void decrypt(char *text, int key) {
    int i;
    int len = strlen(text);

    for (i = 0; i < len; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = ((text[i] - 'a' + 26 - key) % 26) + 'a';
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = ((text[i] - 'A' + 26 - key) % 26) + 'A';
        } else if (text[i] == '*') {
            text[i] = ' ';  // Convert asterisk to whitespace
        }
		else if (text[i] == '@') {
			text[i] = ' ';
		}
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: ./program <task: encrypt/decrypt> <text> <key>\n");
        return 1;
    }

    char *task = argv[1];
    char *text = argv[2];
    int key = atoi(argv[3]);

    if (strcmp(task, "encrypt") == 0) {
        encrypt(text, key);
        printf("Encrypted text: %s\n", text);
    } else if (strcmp(task, "decrypt") == 0) {
        decrypt(text, key);
        printf("Decrypted text: %s\n", text);
    } else {
        printf("Invalid task. Please choose 'encrypt' or 'decrypt'.\n");
        return 1;
    }

    return 0;
}
