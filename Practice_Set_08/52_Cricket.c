#include <stdio.h>
#include <string.h>

struct cricket {
    char player_name[50];
    char team_name[50];
    float batting_average;
};

int main() {
    struct cricket player[50];
    int i;

    for (i = 0; i < 50; i++) {
        printf("Enter player name for player %d: ",i+1);
        scanf("%s", player[i].player_name);
        printf("Enter team name for player %d: ",i+1);
        scanf("%s", player[i].team_name);
        printf("Enter batting average for player %d: ",i+1);
        scanf("%f", &player[i].batting_average);
    }

    char current_team[50];
    for (i = 0; i < 50; i++) {
        if (strcmp(current_team, player[i].team_name) != 0) {
            strcpy(current_team, player[i].team_name);
            printf("\nTeam name: %s\n", current_team);
        }
        printf("Player name: %s\n", player[i].player_name);
        printf("Batting average: %.2f\n", player[i].batting_average);
    }
    return 0;
}

