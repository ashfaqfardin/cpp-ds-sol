#include <iostream>

using namespace std;

struct goals{
    int teamNum;
    int playerId;
    
    void setGoalInfo(){
        cout << "Enter Team Number: ";
        cin >> teamNum;
        teamNum = teamNum - 1; //array indexing
        cout << "Enter Player Id: ";
        cin >> playerId;
        playerId = playerId - 1; //array indexing
    }
    
};

void teamWin(int goalsA, int goalsB){
    cout << "Total goals of Team-1: " << goalsA << endl;
    cout << "Total goals of Team-2: " << goalsB << endl;
    if(goalsA > goalsB){
        cout << "Team-1 won the game!" << endl;
    }
    else{
        cout << "Team-2 won the game!" << endl;
    }
}

int main()
{
    int** team = new int*[2]; //2 teams
    for(int i = 0; i < 2; i++){
        team[i] = new int[10]; // 2d dynamic array size[2][10];
    }
    
    // initialization
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 10; j++){
            team[i][j] = 0;
        }
    }
    
    goals firstGoal;
    firstGoal.setGoalInfo();
    team[firstGoal.teamNum][firstGoal.playerId]++; //counting goals;
    
    goals secondGoal;
    secondGoal.setGoalInfo();
    team[secondGoal.teamNum][secondGoal.playerId]++; //counting goals;
    
    goals thirdGoal;
    thirdGoal.setGoalInfo();
    team[thirdGoal.teamNum][thirdGoal.playerId]++; //counting goals;
    
    goals fourthGoal;
    fourthGoal.setGoalInfo();
    team[fourthGoal.teamNum][fourthGoal.playerId]++; //counting goals;
    
    goals fifthGoal;
    fifthGoal.setGoalInfo();
    team[fifthGoal.teamNum][fifthGoal.playerId]++; //counting goals;
    
    for(int i = 0; i < 2; i++){
        cout << "Team " << i + 1 << endl;
        cout << "Player ID :";
        for(int j = 0; j < 10; j++){
            cout << j + 1 << " ";
        }
        
        cout << endl;
        cout << "Goals:     ";
        for(int k = 0; k < 10; k++){
            cout << team[i][k] << " ";
        }
        cout << endl;
    }
    
    //winning team decide
    int countGoalsA = 0;
    int countGoalsB = 0;
    for(int i = 0; i < 10; i++){
        if(team[0][i] == 1){
            countGoalsA++;
        }
        if(team[1][i] == 1){
            countGoalsB++;
        }
    }
    
    teamWin(countGoalsA, countGoalsB);

    return 0;
}
