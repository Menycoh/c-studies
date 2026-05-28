#include <stdio.h>
#include <string.h>


int main()
{

    char username[20] = "Menyco20!";
    char password[20] = "Lol1234";
    char usernameRiddle[20] = "";
    char passwordRiddle[20] = "";

    printf("Enter your username: ");
    fgets(usernameRiddle, 20, stdin);

    printf("Enter your password: ");
    fgets(passwordRiddle, 20, stdin);
    usernameRiddle[strcspn(usernameRiddle, "\n")] = '\0';
    passwordRiddle[strcspn(passwordRiddle, "\n")] = '\0';
    usernameRiddle[strcspn(usernameRiddle, "\n")] = '\0';
    passwordRiddle[strcspn(passwordRiddle, "\n")] = '\0';
    if (strcmp(username, usernameRiddle) == 0 && strcmp(password, passwordRiddle) == 0)
    {

        printf("Accesso consentito. Benvenuto %s", username);
    }
    else 
    {
        
        printf("Accesso negato. Fuori da qui.");
    }
    return 0;
}